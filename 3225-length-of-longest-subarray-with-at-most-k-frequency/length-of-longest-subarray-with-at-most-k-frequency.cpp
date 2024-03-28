class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int i=0,j=-1;
        for(int it=0;it<nums.size();it++){
            mpp[nums[it]]++;
            while(mpp[nums[it]] > k){
                j++;
                mpp[nums[j]]--;
            }
            i = max(i,it-j);
        }
        return i;
    }
};