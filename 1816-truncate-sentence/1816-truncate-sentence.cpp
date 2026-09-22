class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;
        string word = "";

        for(char c : s) {
            if(c == ' ') {
                words.push_back(word);
                word = "";

                if(words.size() == k)
                    break;
            } 
            else {
                word += c;
            }
        }

        // Add the last word
        if(words.size() < k)
            words.push_back(word);

        string ans = "";

        for(int i = 0; i < k; i++) {
            if(i > 0)
                ans += " ";
            ans += words[i];
        }

        return ans;
    }
};