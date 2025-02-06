class Solution {
public:
    int dp[100001][26];
    int mod = 1e9+7;
    long long per(char ch,int i,int n,vector<vector<int>>&dp) {
        if(i == n) {
            return 1;
        } 
       if(dp[i][ch-'a']!=-1)return dp[i][ch-'a'];
        long long count = 0;
        if(ch == 'a') {
            count += (per('e',i+1,n,dp) % mod);
        }
        else if(ch == 'e') {
            count += (per('a',i+1,n,dp)% mod);
            count += (per('i',i+1,n,dp)% mod);
        }
        else if(ch == 'i') {
            count += (per('a',i+1,n,dp)% mod);
            count += (per('e',i+1,n,dp)% mod);
            count += (per('o',i+1,n,dp)% mod);
            count += (per('u',i+1,n,dp)% mod);
        }
        else if(ch == 'o') {
            count += (per('i',i+1,n,dp)% mod);
            count += (per('u',i+1,n,dp)% mod);
        }
        else if(ch == 'u') {
            count += (per('a',i+1,n,dp)% mod);
        }
        return dp[i][ch-'a'] = (count % mod);
    }
    int countVowelPermutation(int n) {
        long long ans = 0;
        vector<vector<int>>dp(n+1,vector<int>(26,-1));
        ans += (per('a',1,n,dp)% mod);
        ans += (per('e',1,n,dp)% mod);
        ans += (per('i',1,n,dp)% mod);
        ans += (per('o',1,n,dp)% mod);
        ans += (per('u',1,n,dp)% mod);
        ans %= mod;
        return ans;
    }
};