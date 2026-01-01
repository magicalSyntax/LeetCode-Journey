class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1, maxCont = 0, cont = 0, width;
        while(l < r){
            width = r - l;
            if(height[l] <= height[r]){
                cont = height[l] * width;
                maxCont = max(maxCont, cont);
                l++;
            }else{
                cont = height[r] * width;
                maxCont = max(maxCont, cont);
                r--;
            }
        }
        return maxCont;
    }
};