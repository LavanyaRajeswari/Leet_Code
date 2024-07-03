class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size()-1;
        int ans = 0;
        if(n <= 2){
            return ans;
        }
        sort(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        ans = abs(mn-nums[n-3]);
        ans = min(ans,abs(nums[3]-mx));
        ans = min(ans,abs(nums[1]-nums[n-2]));
        ans = min(ans,abs(nums[2]-nums[n-1]));
        return ans;
    }
};