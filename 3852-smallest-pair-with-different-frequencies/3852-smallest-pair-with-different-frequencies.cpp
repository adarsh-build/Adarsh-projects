class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int freq[101] = {};

        for(int x : nums) {
            freq[x]++;
        }

        for(int x = 1; x <= 100; x++) {
            if(freq[x] == 0) continue;

            for(int y = x + 1; y <= 100; y++) {
                if(freq[y] != 0 && freq[y] != freq[x]) {
                    return {x, y};
                }
            }
        }

        return {-1, -1};
    }
};