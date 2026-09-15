class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(hash.find(nums[i]) != hash.end()){
                return true;
            } 
            else hash.insert(nums[i]);
        }
        return false;
    }
};