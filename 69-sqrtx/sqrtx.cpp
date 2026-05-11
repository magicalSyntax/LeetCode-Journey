class Solution {
public:
    int mySqrt(int x) {
        bool found = false;
        int count = 0;
        int odd = 1;
        while(!found){
            x = x - odd;
            if(x == 0){
                count++;
                found = true;
            }else if(x < 0){
                found = true;
            }else {
                count++; odd+=2;
            }
        }
        return count;
    }
};