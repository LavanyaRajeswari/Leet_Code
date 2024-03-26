class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
            ans[nums[i]]++;
            }
        }
        int i = 1;
        for(auto it:ans){
            if(it.first != i) return i;
            else i++;
        }
        int n=0;
        for(auto it:ans){
            n = max(it.first,n);
        }
        return n+1;
    }
};