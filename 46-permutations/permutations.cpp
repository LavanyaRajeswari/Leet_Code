class Solution {
public:
    void solution(vector<int>nums,int start,int end,vector<vector<int>>&ans){
        if(start >= end){
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(nums[start],nums[i]);
            solution(nums,start+1,end,ans);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    solution(nums,0,nums.size()-1,ans);
    return ans;
    }
};