class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int c = 0,d = 0;
    map<vector<int>,int>map;
    vector<vector<int>>ans;
    for(int a=0;a<nums.size();a++){
        for(int b=a+1;b<nums.size();b++){
            c=b+1;
            d=nums.size()-1;
            while(c<d){
                long long i = nums[a];
                long long j = nums[b];
                long long k = nums[c];
                long long l = nums[d];
                if((i+j+k+l) == target){
                    map[{nums[a],nums[b],nums[c],nums[d]}]++;
                    c++;
                    d--;
                }
                else if((i+j+k+l) > target){
                    d--;
                }
                else{
                    c++;
                }
            }
        }
    }
    for(auto it:map){
        ans.push_back(it.first);
    }
    return ans;
    }
};