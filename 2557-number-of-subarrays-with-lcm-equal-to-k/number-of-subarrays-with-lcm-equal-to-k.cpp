class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            long long x = nums[i];
            if(x == k){
                ans++;
            }
            for(int j = i+1; j < nums.size(); j++){
                x = lcm(x, nums[j]);
                if(x == k) ans++;
                else if (x > k) break;
            }
        }
        return ans;
    }
};