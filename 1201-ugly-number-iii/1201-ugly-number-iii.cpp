
class Solution {
public:
    long long lcm(long long x, long long y) {
        return x / gcd(x, y) * y;
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        long long ab = lcm(a, b);
        long long ac = lcm(a, c);
        long long bc = lcm(b, c);
        long long abc = lcm(ab, c);

        long long low = 1, high = 2000000000LL;

        while (low < high) {
            long long x = low + (high - low) / 2;

            long long count = x / a + x / b + x / c
                            - x / ab - x / ac - x / bc
                            + x / abc;

            if (count >= n) {
                high = x;
            } else {
                low = x + 1;
            }
        }

        return (int)low;
    }
};
