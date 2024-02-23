class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>v;
    int n = nums.size();
    int x=pow(2,n);
    for(int i=0;i<x;i++){
        vector<int>ans;
        int temp=i,j=0;
        int a=pow(2,n-1);
        while(a!=0){
            if(a&temp){
                ans.push_back(nums[j]);
            } 
            a=a>>1;
            j++;
        }
        v.push_back(ans);
    }
    return v;
    }
};