class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int n = pr.size();
        int ans = 0,mn = pr[0];
        for(int i = 1; i < n; i++) {
            mn = min(mn,pr[i]);
            ans = max(ans,abs(mn-pr[i]));
        }
        return ans;
    }
};