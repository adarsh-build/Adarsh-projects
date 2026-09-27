class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;

        for(int x : nums)
            freq[x]++;

        vector<int> ans;

        bool remaining = true;

        while(remaining) {
            remaining = false;

            for(auto &p : freq) {
                if(p.second > 0) {
                    ans.push_back(p.first);
                    p.second--;
                    remaining = true;
                }
            }
        }

        return ans;
    }
};