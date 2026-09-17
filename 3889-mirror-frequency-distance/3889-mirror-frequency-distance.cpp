class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int>freq(36,0);

        for(char c:s){
            if(c>='0' && c<='9'){
                freq[c-'0']++;
            } else{
                freq[10+(c-'a')]++;
            }
        }

        int ans=0;

        for(int i=0; i<5; i++){
            ans+=abs(freq[i]-freq[9-i]);
        }

        for(int i=0; i<13; i++){
            ans+=abs(freq[10+i]-freq[10+(25-i)]);
        }

        return ans;
    }
};