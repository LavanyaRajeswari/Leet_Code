class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0, mx = 0;
        vector<int>v;
        for(int i = n-1; i >= 0; i--) {
            mx = max(mx,prices[i]);
            v.push_back(mx);
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < n; i++) {
            if(prices[i] < v[i]) ans = max(ans, v[i]- prices[i]);
        }
        return ans;
    }
};