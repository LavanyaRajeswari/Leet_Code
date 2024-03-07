class Solution {
public:
    int maximumGap(vector<int>& nums) {
    int mx = 0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        mx = max(mx,nums[i+1] - nums[i]);
    } 
    return mx;  
    }
};