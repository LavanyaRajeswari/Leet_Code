class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    int mx = 0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i=i+2){
        mx += min(nums[i],nums[i+1]); 
    }   
    return mx; 
    }
};