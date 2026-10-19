
class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string n = "0123456789abcdef";
        string ans = "";

        unsigned int number = num;

        while (number != 0) {
            int rem = number % 16;
            ans += n[rem];
            number = number / 16;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
