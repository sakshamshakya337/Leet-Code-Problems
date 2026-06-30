class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> prime(n+1,true);
        if(n>=0) prime[0] = false;
        if(n>=1) prime[1] = false;

        // Sieve of Eratosthenes
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j] = false;
                }
            }
        }

        vector<vector<int>> result;

        for(int i=2;i<=n/2;i++){
            if(prime[i] && prime[n-i]){
                result.push_back({i,n-i});
            }
        }

        return result;

    }
};