class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0;
        int b = 0;

        unordered_map<char,int> m;
        
        for(int i = 0; i < secret.size(); i++) {
            if(secret[i] == guess[i]) {
                a++;
            }
            else {
                m[secret[i]]++;
            }
        }

        for(int i = 0; i < guess.size(); i++) {
            if(secret[i] != guess[i]) {
                if(m[guess[i]] > 0) {
                    b++;
                    m[guess[i]]--;
                }
            }
        }

        return to_string(a) + "A" + to_string(b) + "B";
    }
};