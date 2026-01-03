class Solution {
public:
    void setZeroes(vector<vector<int>>& mtx) {
        int r = mtx.size();
        int c = mtx[0].size();
        bool zr = false, zc = false;
        for(int j = 0; j < c; j++){
            if (mtx[0][j] == 0) zr = true;
        }
        for(int i = 0; i < r; i++){
            if(mtx[i][0] == 0) zc = true;
        }
        for(int i = 1; i < r; i++){
            for(int j = 1; j < c; j++){
                if(mtx[i][j] == 0){
                    mtx[i][0] = 0;
                    mtx[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < r; i++){
            if(mtx[i][0] == 0){
                for(int j = 1; j < c; j++){
                    mtx[i][j] = 0;
                }
            }
        }
        for(int j = 1; j < c; j++){
            if(mtx[0][j] == 0){
                for(int i = 1; i < r; i++){
                    mtx[i][j] = 0;
                }
            }
        }
        if(zc){
            for(int i = 0; i < r; i++) mtx[i][0] = 0;
        }
        if(zr){
            for(int j = 0; j < c; j++) mtx[0][j] = 0;
        }
    }
};