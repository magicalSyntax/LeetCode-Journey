class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < m; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }
        for(int j = 1; j < n; j++){
            int ones = 0, zeros = 0;
            for(int i = 0; i < m; i++){
                if(grid[i][j] == 1) ones++;
                else zeros++;
            }
            if(ones < zeros){
                for(int i = 0; i < m; i++){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }
        int score = 0, bitValue = 1;
        for(int j = n-1; j >= 0; j--){
            for(int i = 0; i < m; i++){
                score += grid[i][j] * bitValue;
            }
            bitValue *= 2;
        }
        return score;
    }
};