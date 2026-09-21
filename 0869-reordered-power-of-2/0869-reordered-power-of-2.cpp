class Solution {
    bool isPowerOf2(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());

        do {
            if(s[0]=='0'){
                continue;
            }
            int num = stoi(s);

            if (isPowerOf2(num)) {
                return true;
            }

        } while (next_permutation(s.begin(), s.end()));

        return false;
    }
};