class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i+1]);
            ans.push_back(nums[i]);
            i++;
        }

        return ans;
    }
};