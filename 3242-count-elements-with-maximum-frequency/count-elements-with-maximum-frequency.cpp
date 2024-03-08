class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int mx = 0;
        for(auto it:mpp){
            mx = max(mx,it.second);
        }
        int count = 0;
        for(auto it:mpp){
            if(it.second == mx){
                count+=it.second;
            }
        }
        return count;
    }
};