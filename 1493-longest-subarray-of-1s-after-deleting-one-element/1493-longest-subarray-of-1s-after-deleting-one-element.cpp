class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxLength = 0;

        for (right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zeroCount++;
            }

            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // right - left is used because we need to delete one element
            maxLength = max(maxLength, right - left);
        }

        return maxLength;
    }
};
