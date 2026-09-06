class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int count = 0;

        while(l < r) {
            if(nums[l] != 0) {
                l++;
            }
            else if(nums[r] == 0) {
                r--;
            }
            else {
                swap(nums[l], nums[r]);
                count++;
                l++;
                r--;
            }
        }

        return count;
    }
};