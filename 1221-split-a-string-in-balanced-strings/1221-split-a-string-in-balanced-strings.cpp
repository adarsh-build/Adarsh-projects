class Solution {
public:
    int balancedStringSplit(string s) {
        int lcount=0;
        int rcount=0;
        int ans=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='L'){
                lcount++;
            } else{
                rcount++;
            }

            if(rcount==lcount){
                ans++;
            }
        }

        return ans;
    }
};