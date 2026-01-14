class Solution {
public:
    int countCollisions(string dir) {
        int n = dir.size();
        if(n == 1) return 0;
        int i = 0, j = n-1;
        while(i < n && dir[i] == 'L') i++;
        while(j >= 0 && dir[j] == 'R') j--;
        int count = 0;
        while(i <= j){
            if(dir[i] != 'S') count++;
            i++;
        }
        return count;
    }
};