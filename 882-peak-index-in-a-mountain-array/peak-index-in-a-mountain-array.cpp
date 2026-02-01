class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();

        int low = 1, high = n - 2;

        while(low <= high){
            int mid = (low+high) / 2;

            if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid+1]) 
                return mid;
            else{
                if(nums[mid - 1] > nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};