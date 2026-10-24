class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());

        int target=1;

        for(int n:coins){
            if(target<n){
                break;
            }

            target+=n;
        }

        return target;
    }
};