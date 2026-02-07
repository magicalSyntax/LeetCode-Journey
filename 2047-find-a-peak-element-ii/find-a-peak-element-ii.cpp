class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0, high = m-1;
        while(low <= high){
            int mid = (low+high) / 2;
            int max_index = 0;
            
            for(int i = 0; i < n; i++){
                if(mat[mid][max_index] < mat[mid][i]) max_index = i;
            }

            if(low == high) return {low, max_index};
            else if(mat[mid][max_index] < mat[mid+1][max_index])
                low = mid + 1;
            else 
                high = mid;
        }
        return {-1,-1};
    }
};