class Solution {
public:
    int minPartitions(string n) {
         char maxi = *max_element(n.begin(), n.end());
        return maxi - '0';
    }
};