class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z = 0,product = 1;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){ 
        if(nums[i] == 0) z++;
        if(nums[i]!=0){
        product*=nums[i];
        }
        }
        if(z > 1){
            for(int i=0;i<nums.size();i++)
            ans.push_back(0);
        }
        else if(z == 1){
            for(int i=0;i<nums.size();i++)
            if(nums[i]!=0) ans.push_back(0);
            else ans.push_back(product);
        }
        else{
            for(int i=0;i<nums.size();i++)
            ans.push_back(product/nums[i]);
        }
        return ans;
    }
};