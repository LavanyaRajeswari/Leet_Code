class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(auto i:nums)sum+=i;
        int cur = 0,ans = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            cur += nums[i];
            int diff = abs((sum-cur)-cur);
            if(diff%2 == 0) ans++;
        }
        return ans;
    }
};