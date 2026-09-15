class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        
        for(int x : nums) {
            freq[x]++;
        }

        vector<int> ans;
        int n = nums.size();

        for(auto p : freq) {
            if(p.second > n / 3) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};