class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int count = 0;

        while (*min_element(nums.begin(), nums.end()) < k) {

            int minimum = *min_element(nums.begin(), nums.end());

            nums.erase(find(nums.begin(), nums.end(), minimum));

            count++;
        }

        return count;
    }
};