class Solution {
public:
    string interpret(string command) {
        unordered_map<string,string>d={
            {"(al)","al"},{"()","o"},{"G","G"},
        };

        string temp="",res="";

        for(char c:command){
            temp+=c;
            if(d.find(temp)!=d.end()){
                res+=d[temp];
                temp="";
            }
        }

        return res;
    }
};