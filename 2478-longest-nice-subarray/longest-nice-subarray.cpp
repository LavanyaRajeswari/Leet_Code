class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size(),ans = 0,cur = 0, c = 0,j = 0;
        for(int i = 0; i < n; i++) {
            while((cur & nums[i]) != 0) {
                    cur ^= nums[j];
                    j++;
                }
            cur |= nums[i];
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};