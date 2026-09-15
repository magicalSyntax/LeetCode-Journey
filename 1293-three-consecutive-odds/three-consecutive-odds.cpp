class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int odd_count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 1){
                odd_count++;
                if(odd_count == 3) return true;
            } else{
                odd_count = 0;
            }
        }
        return false;
    }
};