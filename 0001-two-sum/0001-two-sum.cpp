
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Start j from i+1 to avoid duplicate pairs
                if (nums[i] + nums[j] == target) { // Check if the sum matches the target
                    return {i, j}; // Return the indices as a vector
                }
            }
        }
        return {}; // Return an empty vector if no solution exists
    }
};