class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int N = int(sqrt(r));
        vector<bool> isPrime(N+1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i <= N; i++){
            if(isPrime[i] == true){
                for(int j = i*i; j <= N; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        int prime_count = 0;
        for(int i = 2;i <= N; i++){
            if((long long)i*i >= l && (long long)i*i <= r && isPrime[i]) prime_count++;
        }
        return (r - l + 1) - (prime_count);
    }
};