class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        vector<int>ans = {INT_MAX,-1};
        while(low <= high) {
            int mid = (low+high) / 2;
            if(nums[mid] == target) {
                ans[0] = min(ans[0],mid);
                high = mid-1;
            }
            else if(nums[mid] < target) {
                low = mid+1;
            }
            else if(nums[mid] > target) {
                high = mid-1;
            }
        }
        if(ans[0] == INT_MAX) return {-1,-1};
        low = ans[0],high = n-1;
        while(low <= high) {
            int mid = (low+high) / 2;
            if(nums[mid] == target) {
                ans[1] = max(ans[1],mid);
                low = mid+1;
            }
            else if(nums[mid] < target) {
                low = mid+1;
            }
            else if(nums[mid] > target) {
                high = mid-1;
            }
        }
        return ans;
    }
};