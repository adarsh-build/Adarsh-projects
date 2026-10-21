class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;

        for (int i = 0; i < num.size(); i++) {
            while (!s.empty() && k > 0 && s.top() > num[i]) {
                s.pop();
                k--;
            }

            s.push(num[i]);
        }

        while (k > 0 && !s.empty()) {
            s.pop();
            k--;
        }

        string ans = "";

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};