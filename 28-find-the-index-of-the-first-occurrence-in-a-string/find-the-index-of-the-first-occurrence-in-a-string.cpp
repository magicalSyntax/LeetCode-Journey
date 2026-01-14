class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        for(int i = 0; i < m-n+1; i++){
            if(haystack[i] == needle[0]){
                int j = 1;
                bool flag = true;
                while(j < n){
                    if(haystack[i+j] != needle[j++]) flag = false;
                }
                if(flag == true) return i;
            }
        }
        return -1;
    }
};