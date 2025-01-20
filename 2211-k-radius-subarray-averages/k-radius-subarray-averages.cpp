class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long n = nums.size();
        if(k == 0) return nums;
        vector<int>ans(n,-1);
        long j = 0,sum = 0,it = k;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            // cout<<sum<<" "<<nums[i]<<endl;
            if((i-j) > (k+k)){
                sum -= nums[j];
                j++;
            }
            if((i-j) == (k+k)) {
                ans[it] = (sum)/(k+k+1);
                it++;
            }
        }
        return ans;
    }
};