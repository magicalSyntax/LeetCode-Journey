class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != ' ' && j < s.size()) j++;
            int l = i, r = j-1;
            while(l < r) swap(s[l++], s[r--]); 
            i = j+1;
        }
        return s;
    }
};