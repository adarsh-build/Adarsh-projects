class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time = 0;
        int prev = 0;

        for(int i = 0; i < requests.size(); i++) {
            time += abs(requests[i] - prev);
            prev = requests[i];
        }

        return time;
    }
};