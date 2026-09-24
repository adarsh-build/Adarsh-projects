class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        vector<int> ones;
        vector<int> twos;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1)
                ones.push_back(i);
            else if(nums[i] == 2)
                twos.push_back(i);
        }

        if(ones.empty() || twos.empty())
            return -1;

        int ans = INT_MAX;

        for(int i = 0; i < ones.size(); i++) {
            for(int j = 0; j < twos.size(); j++) {
                ans = min(ans, abs(ones[i] - twos[j]));
            }
        }

        return ans;
    }
};