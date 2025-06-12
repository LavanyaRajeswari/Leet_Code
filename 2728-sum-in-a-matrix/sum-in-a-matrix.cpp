class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int  ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            sort(nums[i].begin(),nums[i].end());
        }
        int i = 0, j = 0,n = nums.size(),m = nums[0].size(),k = 1;
        int mx = 0;
        while(j < m) {
            // cout<<i<<" "<<j<<endl;
            if(i == n) {
                i = 0;
                // k++;
                j++;
                ans += mx;
                mx = 0;
            }
            if(i < n and j < m) { 
                mx = max(mx,nums[i][j]);
            }
            i++;
        }
        return ans;
    }
};