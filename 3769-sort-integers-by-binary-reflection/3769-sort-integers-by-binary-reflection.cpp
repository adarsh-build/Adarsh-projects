class Solution {
public:
    int reflection(int n){
        int ans=0;
        while(n){
            ans=ans*2+(n%2);
            n/=2;
        }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int x:nums){
            v.push_back({reflection(x),x});
        }

        sort(v.begin(),v.end());

        vector<int>ans;

        for(auto p:v){
            ans.push_back(p.second);
        }

        return ans;
    }
};