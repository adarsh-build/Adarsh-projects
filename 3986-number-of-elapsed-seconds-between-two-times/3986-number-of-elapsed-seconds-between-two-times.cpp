class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sH=0, sm=0, ss=0;
        int eH=0, em=0, es=0;

        for(int i=0; i<startTime.size(); i++){
            if(i<=1){
                sH = sH*10 + (startTime[i]-'0');
                eH = eH*10 + (endTime[i]-'0');
            }
            else if(i>=3 && i<=4){
                sm = sm*10 + (startTime[i]-'0');
                em = em*10 + (endTime[i]-'0');
            }
            else if(i>=6 && i<=7){
                ss = ss*10 + (startTime[i]-'0');
                es = es*10 + (endTime[i]-'0');
            }
        }

        int totalStartsecond = sH*3600 + sm*60 + ss;
        int totalEndsecond = eH*3600 + em*60 + es;

        return totalEndsecond - totalStartsecond;
    }
};