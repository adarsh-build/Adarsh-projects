
class Solution {
public:
    vector<vector<int>> memo;

    bool solve(string &s1, string &s2, string &s3, int i, int j) {
        int p = i + j;

        if (p == s3.size()) return true;

        if (memo[i][j] != -1)
            return memo[i][j];

        bool ans = false;

        if (i < s1.size() && s1[i] == s3[p]) {
            ans = solve(s1, s2, s3, i + 1, j);
        }

        if (!ans && j < s2.size() && s2[j] == s3[p]) {
            ans = solve(s1, s2, s3, i, j + 1);
        }

        return memo[i][j] = ans;
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size())
            return false;

        memo.assign(s1.size() + 1,
                    vector<int>(s2.size() + 1, -1));

        return solve(s1, s2, s3, 0, 0);
    }
};
