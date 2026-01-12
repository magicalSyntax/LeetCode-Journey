class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0){
            int temp = x;
            double rev = 0;
            while(x != 0){
                rev = rev*10 + (x%10);
                x /= 10;
            }
            if(temp == rev) return true;
            else return false;
        }
        return false;
    }
};