class Solution {
public:
    int countBits(int n) {
        int count = 0;

        while (n > 0) {
            count += n % 2;
            n /= 2;
        }

        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (countBits(i) == k) {
                sum += nums[i];
            }
        }

        return sum;
    }
};