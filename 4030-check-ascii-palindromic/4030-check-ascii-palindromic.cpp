class Solution {
public:

    string toBinary(int n) {
        string ans = "";

        for(int i = 7; i >= 0; i--) {
            if(n & (1 << i))
                ans += '1';
            else
                ans += '0';
        }

        return ans;
    }

    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r) {
            if(s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    bool isPalindromic(string s) {
        string binary = "";

        for(char c : s) {
            int ascii = c;
            binary += toBinary(ascii);
        }

        return isPalindrome(binary);
    }
};