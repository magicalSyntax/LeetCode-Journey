class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int mapSt[128];
        int mapTs[128];

        for(int i = 0; i< s.size(); i++){
            int ch = s[i];
            int dh = t[i];
            if(!mapSt[ch]){
                mapSt[ch] = dh;
            }else {
                if(mapSt[ch] != dh) return false;
            }
        }

        for(int i = 0; i< t.size(); i++){
            int ch = s[i];
            int dh = t[i];
            if(!mapTs[dh]){
                mapTs[dh] = ch;
            }else {
                if(mapTs[dh] != ch) return false;
            }
        }

        return true;
    }
};