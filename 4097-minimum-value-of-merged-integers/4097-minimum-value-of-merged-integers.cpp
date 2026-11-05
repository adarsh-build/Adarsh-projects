class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
          long long ans = LLONG_MAX;

          for(int i = 0; i < nums.size() - 1; i+=2){
            string n1 = to_string(nums[i]);
            string n2 = to_string(nums[i + 1]);

            string merge = n1 + n2;


            long long num = stoll(merge);

            ans = min(num , ans);
          }
          return ans;
    }
};