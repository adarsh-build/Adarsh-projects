class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(s.size() < p.size())
            return ans;

        int pFreq[26] = {};
        int windowFreq[26] = {};

        for(char c : p)
            pFreq[c - 'a']++;

        int k = p.size();

        for(int i = 0; i < s.size(); i++) {

            windowFreq[s[i] - 'a']++;

            if(i >= k)
                windowFreq[s[i-k] - 'a']--;

            bool same = true;

            for(int j = 0; j < 26; j++) {
                if(pFreq[j] != windowFreq[j]) {
                    same = false;
                    break;
                }
            }

            if(same)
                ans.push_back(i-k+1);
        }

        return ans;
    }
};