class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n));
        int c;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                c = n - j - 1;
                ans[i][j] = matrix[c][i];
            }
        }
        copy(ans.begin(), ans.end(), matrix.begin());
    }
};