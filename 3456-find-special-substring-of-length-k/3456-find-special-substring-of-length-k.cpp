class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i = 0; i <= s.size() - k; i++) {

            bool same = true;

            // Check all characters in window are same
            for(int j = i + 1; j < i + k; j++) {
                if(s[j] != s[i]) {
                    same = false;
                    break;
                }
            }

            if(!same)
                continue;

            if(i > 0 && s[i-1] == s[i])
                continue;

            if(i + k < s.size() && s[i+k] == s[i])
                continue;

            return true;
        }

        return false;
    }
};