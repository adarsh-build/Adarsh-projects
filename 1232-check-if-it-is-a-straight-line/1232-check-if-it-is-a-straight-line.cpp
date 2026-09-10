class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];

        int dx = coordinates[1][0] - x0;
        int dy = coordinates[1][1] - y0;

        for(int i = 2; i < coordinates.size(); i++) {
            int x = coordinates[i][0] - x0;
            int y = coordinates[i][1] - y0;

            if(x * dy != y * dx)
                return false;
        }

        return true;
    }
};