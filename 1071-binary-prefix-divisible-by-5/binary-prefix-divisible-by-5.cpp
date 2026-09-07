class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        vector<bool> ans;
        long long num = 0;
        for(int i = 0; i < n; i++){
            num = (num << 1) + nums[i];
            num = num % 5;
            ans.push_back(num % 5 == 0);
        }
        return ans;
    }
};