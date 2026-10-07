class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;

        for(int i=0; i<n; i++){
            int score=0;

            for(int j=0; j<n-1; j++){
                if(s[j]==s[j+1]){
                    score++;
                }
            }

            if(score==k){
                ans++;
            }

            char first=s[0];
            s.erase(s.begin());
            s.push_back(first);
        }

        return ans;
    }
};