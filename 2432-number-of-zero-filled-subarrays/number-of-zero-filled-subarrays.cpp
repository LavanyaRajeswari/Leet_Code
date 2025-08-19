class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long c = 0,ans = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                c++;
            }
            if(nums[i] != 0 || i+1 == n){
                ans += ((c*(c+1))/2);
                c = 0;
            }
        }
        return ans;
    }
};