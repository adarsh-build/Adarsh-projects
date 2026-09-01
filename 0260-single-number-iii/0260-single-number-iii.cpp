class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long long ans = 0;

        for (int n : nums) {
            ans ^= n;
        }

        long long diff = ans & (-ans);

        int a = 0;
        int b = 0;

        for (int n : nums) {
            if (n & diff)
                a ^= n;
            else
                b ^= n;
        }

        return {a, b};
    }
};