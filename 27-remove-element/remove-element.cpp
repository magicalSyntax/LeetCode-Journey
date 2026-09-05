class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n == 0) return 0;
        int l = 0, r = n-1;
        while(l < r){
            if(nums[r] == val){
                r--;
            }else if(nums[l] == val){
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                l++; r--;
            } else{
                l++;
            }
        }
        if(nums[l] == val) {
            return l;
        } else{
            return l+1;
        }
    }
};