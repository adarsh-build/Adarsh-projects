class Solution {
public:
    string generateTag(string caption) {
        string ans = "#";
        bool newWord = true;

        for(char c : caption) {
            if(c == ' ') {
                newWord = true;
            }
            else {
                if(ans.size() == 100)
                    break;

                if(newWord && ans != "#")
                    ans += toupper(c);
                else
                    ans += tolower(c);

                newWord = false;
            }
        }

        return ans;
    }
};