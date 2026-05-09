class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 1; i < n; i++){
            int value = target - nums[i];
            for(int j = i-1; j >= 0; j--){
                if(nums[j] == value) return {i, j};
            }
        }
        return {};
    }
};