class Solution {
public:
    string reverseParentheses(string s) {
        vector<int>st;
        vector<int>deletion;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push_back(i);
                deletion.push_back(i);
            } else if(s[i]==')'){
                deletion.push_back(i);
                int start=st.back();
                st.pop_back();

                reverse(s.begin()+start+1,s.begin()+i);
            }
        }
        for(int n=s.size()-1; n>=0; n--){
            if(s[n]=='(' || s[n]==')'){
                s.erase(s.begin()+n);
            }
        }

        return s;
    }
};