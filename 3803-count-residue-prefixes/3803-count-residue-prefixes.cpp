class Solution {
public:
    int residuePrefixes(string s) {
        int count=0;
        set<char>st;

        for(int i=0; i<s.size(); i++){
            st.insert(s[i]);
            if((i+1)%3==st.size()){
                count++;
            }
        }

        return count;
    }
};