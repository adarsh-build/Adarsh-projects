
class Solution {
public:
    bool prime(int n) {
        if(n < 2) return false;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) return false;
        }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> m;

        for(int n : nums) {
            m[n]++;
        }

        for(auto p : m) {
            if(prime(p.second)) {
                return true;
            }
        }

        return false;
    }
};
