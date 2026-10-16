class Solution {
public:
    string validIPAddress(string queryIP) {
        bool symbol = true;

        for (int i = 0; i < queryIP.size(); i++) {
            if (queryIP[i] == '.') {
                symbol = true;
                break;
            }
            else if (queryIP[i] == ':') {
                symbol = false;
                break;
            }
        }

        vector<string> words;
        string part = "";

        char separator = symbol ? '.' : ':';

        for (int i = 0; i <= queryIP.size(); i++) {
            if (i == queryIP.size() || queryIP[i] == separator) {
                words.push_back(part);
                part = "";
            }
            else {
                part += queryIP[i];
            }
        }

        if (symbol) {
            if (words.size() != 4)
                return "Neither";

            for (string word : words) {
                if (word.empty() || word.size() > 3)
                    return "Neither";

                if (word.size() > 1 && word[0] == '0')
                    return "Neither";

                for (char c : word) {
                    if (c < '0' || c > '9')
                        return "Neither";
                }

                int num = stoi(word);

                if (num < 0 || num > 255)
                    return "Neither";
            }

            return "IPv4";
        }
        else {
            if (words.size() != 8)
                return "Neither";

            for (string word : words) {
                if (word.empty() || word.size() > 4)
                    return "Neither";

                for (char c : word) {
                    if (!((c >= '0' && c <= '9') ||
                          (c >= 'a' && c <= 'f') ||
                          (c >= 'A' && c <= 'F'))) {
                        return "Neither";
                    }
                }
            }

            return "IPv6";
        }
    }
};