class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currsum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currsum += nums[i];
            
            // 1. Record the best sum seen so far
            if (currsum > maxsum) {
                maxsum = currsum;
            }
            
            // 2. Drop the current subarray only if its sum becomes negative
            if (currsum < 0) {
                currsum = 0;
            }
        }
        
        return maxsum;
    }
};