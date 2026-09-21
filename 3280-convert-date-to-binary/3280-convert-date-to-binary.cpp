class Solution {
public:


     string toBinary(int n) {
        if (n == 0) return "0";

        string s;
        while (n > 0) {
            s += char('0' + n % 2);
            n /= 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }

    string convertDateToBinary(string date) {

        int dates = stoi(date.substr(8,2));
          int month = stoi(date.substr(5,4));
            int year = stoi(date.substr(0,4));
        
    
       return toBinary(year)+"-" + toBinary(month) + "-" + toBinary(dates);
    }
};