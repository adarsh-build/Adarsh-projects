class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;

        for (int i = 0; i < nums.size(); i++) {
            xr ^= nums[i];
        }

        if (xr != 0) {
            return nums.size();
        }

        for (int x : nums) {
            if (x != 0) {
                return nums.size() - 1;
            }
        }

        return 0;
    }
};