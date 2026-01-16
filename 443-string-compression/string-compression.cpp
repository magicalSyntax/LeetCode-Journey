class Solution {
public:
    int addCount(vector<char>& chars, int count, int a){
        string s = to_string(count);
        for(int i = 0; i < s.size(); i++){
            chars[a++] = s[i];
        }
        return s.size();
    }

    int compress(vector<char>& chars) {
        int n = chars.size();
        int ans = 0, count = 0;
        char tar = chars[0];

        for(int i = 0; i < n; i++){
            if(tar == chars[i]) count++;
            else{
                if(count == 1){
                    chars[ans] = tar;
                    ans++;
                } else{
                    chars[ans++] = tar;
                    int add = addCount(chars, count, ans);
                    ans += add;
                }
                tar = chars[i];
                count = 1;
            }
        }
        if(count == 1){
            chars[ans++] = tar;
        } else{
            chars[ans++] = tar;
            int add = addCount(chars, count, ans);
            ans += add;
        }
        return ans;
    }
};