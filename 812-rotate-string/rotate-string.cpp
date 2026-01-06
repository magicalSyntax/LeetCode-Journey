class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        string ss = s+s;

        if(ss.find(goal) != string::npos) return true;
        return false;
    }
};