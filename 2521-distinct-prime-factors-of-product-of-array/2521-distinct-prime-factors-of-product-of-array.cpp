class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i];

            for(int d = 2; d * d <= n; d++) {

                if(n % d == 0) {
                    s.insert(d);

                    while(n % d == 0) {
                        n = n / d;
                    }
                }
            }

            if(n > 1)
                s.insert(n);
        }

        return s.size();
    }
};