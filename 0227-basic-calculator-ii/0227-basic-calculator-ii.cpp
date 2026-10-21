class Solution {
public:
    int calculate(string s) {
        int num=0;
        char op='+';
        stack<int>nums;

        for(int i=0; i<=s.size(); i++){
            if (i < s.size() && isdigit(s[i])){
                num=num*10+(s[i]-'0');
            } else if(s[i]=='+' || s[i]=='-' || s[i]=='*' ||  s[i]=='/' || i==s.size()){

                if(op=='+'){
                    nums.push(num);
                } else if(op=='-'){
                    nums.push(-num);
                } else if(op=='*'){
                    int n=nums.top();
                    nums.pop();
                    nums.push(n*num);
                } else if(op=='/'){
                    int n=nums.top();
                    nums.pop();
                    nums.push(n/num);
                }
                if(i<s.size()){
                    op=s[i];
                }
                num=0;
            }
        }
        int ans=0;
        while(!nums.empty()){
            ans+=nums.top();
            nums.pop();
        }

        return ans;
    }
};