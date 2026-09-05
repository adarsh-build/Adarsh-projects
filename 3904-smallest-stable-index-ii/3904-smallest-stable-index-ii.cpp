class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefixMax(n);
        vector<int> suffixMin(n);

        int maximum = nums[0];

        for(int i = 0; i < n; i++) {
            maximum = max(maximum, nums[i]);
            prefixMax[i] = maximum;
        }

        int minimum = nums[n - 1];

        for(int i = n - 1; i >= 0; i--) {
            minimum = min(minimum, nums[i]);
            suffixMin[i] = minimum;
        }

        for(int i = 0; i < n; i++) {
            if(prefixMax[i] - suffixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};