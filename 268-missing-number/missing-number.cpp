class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i <= nums.size(); i++){
            bool found=false;
            for(int& j: nums){
                if (i == j) found=true;
            }
            if(!found) return i;
        }
        return -1;
    }
};