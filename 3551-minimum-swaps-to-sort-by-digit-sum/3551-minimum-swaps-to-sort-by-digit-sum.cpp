class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> position;

        for (int i = 0; i < n; i++) {
            position[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            int correct = arr[i].second;

            if (nums[i] != correct) {
                int j = position[correct];

                position[nums[i]] = j;
                position[correct] = i;

                swap(nums[i], nums[j]);

                swaps++;
            }
        }

        return swaps;
    }
};