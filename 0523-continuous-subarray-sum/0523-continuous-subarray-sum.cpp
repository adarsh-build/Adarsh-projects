class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> memory;
        memory[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum = (sum + nums[i]) % k;

            if (memory.count(sum)) {
                if (i - memory[sum] >= 2)
                    return true;
            }
            else {
                memory[sum] = i;
            }
        }

        return false;
    }
};