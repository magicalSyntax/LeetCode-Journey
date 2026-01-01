class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOnes = 0, row = 0;
        for(int i = 0; i < mat.size(); i++){
            int countOnes = 0;
            for(int j = 0; j < mat[i].size(); j++){
                countOnes += mat[i][j];
            }
            if(maxOnes < countOnes){
                maxOnes = countOnes;
                row = i;
            }
        }
        return {row, maxOnes};
    }
};