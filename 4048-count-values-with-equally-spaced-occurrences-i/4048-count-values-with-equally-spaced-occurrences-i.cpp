class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int count = 0;

        for(auto p : mp) {

            if(p.second.size() == 3) {

                vector<int> v = p.second;

                if(v[1] - v[0] == v[2] - v[1]) {
                    count++;
                }
            }
        }

        return count;
    }
};