class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
    map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int m = *max_element(nums.begin(),nums.end());
        for(auto it:mpp){
            if(it.first == m){
            if(it.second < k)
            return 0;
            }
        }
        long long ans = 0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == m){
                k--;
            }
            while(!k){
                if(nums[j] == m){
                    k++;
                }
                j++;
            }
            ans += j;
        }
        return ans;
    }
};