class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1]) flag++;
        }
        if((flag == 1 && nums[nums.size()-1] <= nums[0]) || (flag==0))
            return true;
        else return false;
    }
};