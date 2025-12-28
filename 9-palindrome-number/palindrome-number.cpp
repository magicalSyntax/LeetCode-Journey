class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0){
            int temp = x;
            double x_rev = 0;
            while (temp != 0){
                x_rev = x_rev * 10 + temp % 10;
                temp /= 10;
            }
            if (x == x_rev) return true;
        }
        return false;
    }
};