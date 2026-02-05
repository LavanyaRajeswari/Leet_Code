class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums;
        vector<int>ans(n);
        for(int i = 0; i < n; i++) {
            int k = ((i+nums[i]) % n + n) % n;
            ans[i] = nums[k];
        }
        return ans;
    }
};