class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtx, int target) {
        int n = mtx.size();
        int m = mtx[0].size();

        int lx = 0, hx = n - 1;
        while(lx <= hx){
            int mx = (lx+hx) / 2;

            if(mtx[mx][0] <= target && target <= mtx[mx][m-1]){
                int ly = 0, hy = m-1;

                while(ly <= hy){
                    int my = (ly+hy) / 2;

                    if(mtx[mx][my] == target) return true;
                    else if(mtx[mx][my] < target) ly = my + 1;
                    else hy = my - 1;
                }
                return false;
            } 
            else if (mtx[mx][0] > target)
                hx = mx - 1;
            else
                lx = mx + 1;
        }

        return false;
    }
};