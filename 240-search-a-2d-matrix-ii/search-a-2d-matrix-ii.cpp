class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtx, int target) {
        int m = mtx.size();
        int n = mtx[0].size();

        int lx = 0, hy = n-1;
        while(lx <= m-1 && hy >= 0){
            if(mtx[lx][hy] == target) 
                return true;
            else if(mtx[lx][hy] > target)
                hy--;
            else
                lx++;
        }
        return false;
    }
};