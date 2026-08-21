class Solution {
public:
    int find_gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int gcd;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            gcd = nums[i];
            if(gcd == k){
                count++;
            }
            for(int j = i+1; j < nums.size(); j++){
                gcd = find_gcd(gcd, nums[j]);
                if(gcd == k){
                    count++;
                }
            }
        }
        return count;
    }
};