class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int trap = 0, lmax = 0, rmax = 0, l = 0, r = n-1;
        while(l <= r){
            if(lmax <= rmax){
                if(height[l] >= lmax){
                    lmax = height[l];
                }else{
                    trap += lmax - height[l];
                }
                l++;
            }else{
                if(height[r] > rmax){
                    rmax = height[r];
                }else{
                    trap += rmax - height[r];
                }
                r--;
            }
        }
        return trap;
    }
};