class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,vector<int>>mpp; 
        vector<int>ans;
        for(auto it : nums){
            for(auto i : it){
                vector<int>v;
                vector<int>n = mpp[i];
                if(n.size()==0){
                    mpp[i] = {1};
                }
                else{
                    v = mpp[i];
                    v.push_back(1);
                    mpp[i] = v;
                }
            }
        }
        for(auto it:mpp){
            int count = 0;
            for(auto i:it.second){
                count++;
            }
            if(count == nums.size()){
            ans.push_back(it.first);
            }
        }
        return ans;
    }
};