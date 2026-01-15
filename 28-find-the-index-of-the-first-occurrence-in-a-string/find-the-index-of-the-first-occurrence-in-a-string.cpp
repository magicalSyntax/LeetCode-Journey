class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return -1;

        int m = haystack.size();
        int n = needle.size();
        
        //LSP
        vector<int> lps(n, 0);
        for(int i = 1, len = 0; i < n;){
            if(needle[i] == needle[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len!=0) {
                    len = lps[len - 1];
                }else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        //KMP Search
        int i = 0, j = 0;
        while(i < m){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }

            if(j == n){
                return i - j;
            }
            else if(i < m && haystack[i] != needle[j]){
                if(j != 0)
                    j = lps[j-1];
                else
                    i++;
            }
        }

        return -1;
    }
};