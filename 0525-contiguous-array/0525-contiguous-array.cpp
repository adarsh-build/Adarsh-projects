class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> memory;
        memory[0] = -1;

        int sum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                sum++;
            else
                sum--;

            if (memory.count(sum)) {
                maxLength = max(maxLength, i - memory[sum]);
            }
            else {
                memory[sum] = i;
            }
        }

        return maxLength;
    }
};