class Solution {
public:
    string reverseByType(string s) {
        vector<char>charectors;
        vector<char>symbol;

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                charectors.push_back(s[i]);
            } else{
                symbol.push_back(s[i]);
            }
        }

        reverse(charectors.begin(),charectors.end());
        reverse(symbol.begin(),symbol.end());

        int c=0,sy=0;

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                s[i]=charectors[c];
                c++;
            } else{
                s[i]=symbol[sy];
                sy++;
            }
        }

        return s;
    }
};