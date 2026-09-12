class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> m;

        for (char c : s) {
            m[c]++;
        }
        int Vcount=0;
        int Ccount=0;

        for (auto p : m) {
            if(p.first=='a' || p.first=='e' || p.first=='i' || p.first=='o' || p.first=='u'){
                Vcount=max(Vcount,p.second);
            } else{
                Ccount=max(Ccount,p.second);
            }
        }

        return Ccount+Vcount;
    }
};