class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>suf;
        vector<int>ans;
        int n = nums.size();
        int x = 1;
        for(int i = 0; i < n; i++) {
            x *= nums[i];
            pre.push_back(x);
        }
        x = 1;
        for(int i = n-1; i >= 0; i--) {
            x *= nums[i];
            suf.push_back(x);
        }
        reverse(suf.begin(), suf.end());
        for(int i = 0; i < n; i++) {
            int st = i - 1, ed = i + 1;
            if(i == 0) {
                ans.push_back(suf[ed]);
            }
            else if(i == n-1) {
                ans.push_back(pre[st]);
            }
            else {
                ans.push_back(pre[st] * suf[ed]);
            }
        }
        return ans;
    }
};