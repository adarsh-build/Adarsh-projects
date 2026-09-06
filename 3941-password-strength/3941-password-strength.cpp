class Solution {
public:
    int passwordStrength(string password) {
        int strength=0;
        set<char>seen;
        for(char c:password){
            if(seen.count(c)) continue;
            seen.insert(c);
            if(c>='a' && c<='z') strength+=1;
            else if(c>='A' && c<='Z') strength+=2;
            else if(c>='0' && c<='9') strength+=3;
            else strength+=5;
        }

        return strength;
    }
};