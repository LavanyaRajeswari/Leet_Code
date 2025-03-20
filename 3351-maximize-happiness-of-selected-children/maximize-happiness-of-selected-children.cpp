class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.rbegin(),h.rend());
        long long ans = 0, c = 0,x = 0;
        for(int i = 0; i < k; i++){
            ans += max(x,(h[i] - c));
            c++;
        }
        return ans;
    }
};