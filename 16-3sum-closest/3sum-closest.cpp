class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        long long ans = INT_MAX;
        for(int i = 0; i < n-2; i++) {
            int j = i+1, k = n-1;
            long long sum = nums[i];
            while(j < k) {
                if((sum + nums[j] + nums[k]) == target) {
                    return target;
                }
                if((sum + nums[j] + nums[k]) < target) {
                    if(abs(target-(sum + nums[j] + nums[k])) < abs(target-ans)){
                        ans = (sum + nums[j] + nums[k]);
                    }
                    j++;
                }
                if((sum + nums[j] + nums[k]) > target) {
                    if(abs(target-(sum + nums[j] + nums[k])) < abs(target-ans)){
                        ans = (sum + nums[j] + nums[k]);
                    }
                    k--;
                }
            }
        }
        return ans;
    }
};