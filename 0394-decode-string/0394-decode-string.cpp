class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>charStack;

        int num=0;
        string curr="";

        for(char c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
            } else if(c=='['){
                numStack.push(num);
                charStack.push(curr);

                num=0;
                curr="";
            } else if(c==']'){
                int repeat=numStack.top();
                numStack.pop();
                string prev=charStack.top();
                charStack.pop();
                string temp="";

                for(int i=0; i<repeat; i++){
                    temp+=curr;
                }

                curr=prev+temp;
            } else{
                curr+=c;
            }
        }
        return curr;
    }
};