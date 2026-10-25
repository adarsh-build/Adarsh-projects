class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        vector<int>prefixSum(n,0);
        prefixSum[0]=nums[0];

        for(int i=1; i<n; i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }

        unordered_map<int,int>m;

        for(int i=0; i<n; i++){
            if(prefixSum[i]==k){
                count++;
            }

            int val=prefixSum[i]-k;

            if(m.find(val)!=m.end()){
                count+=m[val];
            } 

            if(m.find(prefixSum[i])==m.end()){
                m[prefixSum[i]]=0;
            }
            m[prefixSum[i]]++;
        }

        return count;
    }
};