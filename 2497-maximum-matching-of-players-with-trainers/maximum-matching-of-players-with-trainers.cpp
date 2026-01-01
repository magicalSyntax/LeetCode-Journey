class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        if(players.size()==0 || trainers.size()==0) return 0;
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int p = 0, t = 0, match = 0;

        while(p < players.size() && t < trainers.size()){
            if(trainers[t] >= players[p]){
                match++;
                p++;
            }t++;
        }
        return match;
    }
};