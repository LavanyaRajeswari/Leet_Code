class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int j = i+1,sum = nums[i];
            while(j < n) {
                if(sum == k) ans++;
                sum += nums[j];
                j++;
            }
            if(sum == k) ans++;
        }
        return ans;
    }
};