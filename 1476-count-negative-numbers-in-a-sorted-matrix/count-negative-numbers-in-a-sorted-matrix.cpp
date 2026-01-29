class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = grid.size();
        int r = grid[0].size();
        int count = 0;
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++){
                if(grid[i][j] < 0){
                    count++;
                }
            }
        }
        return count;
    }
};