class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";

        for(int i=s.length()-1; i>=0; i--){
            if(i>=2 && s[i]=='#'){
                int num=(s[i-2]-'0')*10 + (s[i-1]-'0');
                ans+=char('a'+num-1);
                i-=2;
            } else{
                int num=s[i]-'0';
                ans+=char('a'+num-1);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};