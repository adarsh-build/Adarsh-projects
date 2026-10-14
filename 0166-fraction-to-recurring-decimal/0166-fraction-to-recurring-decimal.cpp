class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string ans = "";

        if ((numerator < 0) != (denominator < 0))
            ans += "-";

        long long num = abs((long long)numerator);
        long long den = abs((long long)denominator);

        ans += to_string(num / den);

        long long rem = num % den;

        if (rem == 0) return ans;

        ans += ".";

        unordered_map<long long, int> seen;

        while (rem != 0) {
            if (seen.count(rem)) {
                ans.insert(seen[rem], "(");
                ans += ")";
                break;
            }

            seen[rem] = ans.size();

            rem *= 10;
            ans += char('0' + rem / den);
            rem %= den;
        }

        return ans;
    }
};