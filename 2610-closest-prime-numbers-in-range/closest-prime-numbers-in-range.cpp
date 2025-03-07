class Solution {
public:
    vector<bool>prime;
    void sieve() {
        for(int i = 0; i <= 1e6; i++) {
            prime.push_back(true);
        }
        prime[0] = prime[1] = false;
        for(int i = 2; i*i <= 1e6; i++) {
            if(prime[i]) {
                for(int j = i*i; j <= 1e6; j+=i) {
                    prime[j] = false;
                }
            }
        }
    }

    vector<int> closestPrimes(int left, int right) {
        sieve();
        vector<int>ans;
        for(int i = left; i <= right; i++) {
            if(prime[i])ans.push_back(i); 
        }
        int a = -1, b = -1, d = INT_MAX;
        for(int i = 1; i < ans.size(); i++) {
            if(abs(ans[i]-ans[i-1]) < d) {
                d = abs(ans[i]-ans[i-1]);
                a = ans[i-1];
                b = ans[i];
            }
        }
        return {a,b};
    }
};