class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;

        for(int i=1; i<=n; i++){
            ans.push_back("Push");

            if(find(target.begin(),target.end(),i)==target.end()){
                ans.push_back("Pop");
            }

            if(i==target.back()){
                break;
            }
        }
        return ans;
    }
};