class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>v;
    map<vector<int>,int>map;
    for(int i=0;i<nums.size();i++){
    int j = i+1,k = nums.size()-1;
    while(j<k){
        if(nums[i]+nums[j]+nums[k] == 0){
            map[{nums[i],nums[j],nums[k]}]++;
            j++;
            k--;
        }
        else if(nums[i]+nums[j]+nums[k] > 0){
            k--;
        }
        else{
            j++;
        }
    }
    }
    for(auto it:map){
        v.push_back(it.first);
    }
    return v;
    }
};