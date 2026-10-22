class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> m;
        stack<char> st;
        unordered_map<char, bool> visited;

        for (char c : s) {
            m[c]++;
        }

        for (char c : s) {
            m[c]--;

            if (visited[c]) {
                continue;
            }

            while (!st.empty() && st.top() > c && m[st.top()] > 0) {
                visited[st.top()] = false;
                st.pop();
            }

            st.push(c);
            visited[c] = true;
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};