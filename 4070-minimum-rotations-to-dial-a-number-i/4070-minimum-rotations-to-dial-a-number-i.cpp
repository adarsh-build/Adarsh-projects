class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int ans = 0;

        for(char ch : s) {
            int target = ch - '0';

            int diff = abs(current - target);

            int rotations = min(diff, 10 - diff);

            ans += rotations;

            current = target;
        }

        return ans;
    }
};