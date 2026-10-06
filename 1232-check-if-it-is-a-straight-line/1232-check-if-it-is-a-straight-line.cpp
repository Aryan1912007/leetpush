class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int i = 0;
        while (i < coordinates.size() - 2) {
            int y1= coordinates[i+1][1]- coordinates[i][1];
            int x1 =coordinates[i+1][0]- coordinates[i][0];
            int y2= coordinates[i+2][1]- coordinates[i + 1][1];
            int x2=coordinates[i+2][0]- coordinates[i + 1][0];

            if (y1 * x2 != y2 * x1) {
                return false;
            }
            i++;
        }
        return true;
    }
};