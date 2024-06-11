class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<arr1.size();i++){
            mpp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            while(mpp[arr2[i]]){
                mpp[arr2[i]]--;
                ans.push_back(arr2[i]);
            }
        }
        for(auto it:mpp){
            while(it.second){
                it.second--;
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};