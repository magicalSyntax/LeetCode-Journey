class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int> ones(nums.size()/2);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                cout << count;
            }
            else {
                ones.push_back(count);
                count=0;
            }
        }
        int max=count;
        for(int& i: ones) {
            if(max < i) max=i;
        }
        return max;
    }
};