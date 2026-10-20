class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);

        for (int x : arr) {
            int r = ((x % k) + k) % k;
            freq[r]++;
        }

        if (freq[0] % 2 != 0) return false;

        for (int r = 1; r <= k / 2; r++) {
            if (r == k - r) {
                if (freq[r] % 2 != 0) return false;
            } else {
                if (freq[r] != freq[k - r]) return false;
            }
        }

        return true;
    }
};