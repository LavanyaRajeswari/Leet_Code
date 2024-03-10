class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int i=0,n=nums1.size();
    int j=0,m=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>ans;
    map<int,int>mpp;
    while(i<n and j<m){
        if(nums1[i] == nums2[j]){
            mpp[nums1[i]]++;
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    for(auto it:mpp){
        ans.push_back(it.first);
    }   
    return ans;
    }
};