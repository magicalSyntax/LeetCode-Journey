class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pointer=0, temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=0){
                if(i!= pointer){
                    temp = nums[i];
                    nums[i] = nums[pointer];
                    nums[pointer] = temp;
                }
                pointer++;
            }
        }
    }
};