class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        map<int,int>mp;
        vector<int>ans(m,-1);
        for(int i = 0; i < n ; i++) {
            mp[nums2[i]] = -1;
            for(int j = i+1; j < n; j++) {
                if(nums2[i] < nums2[j]){
                    mp[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        for(int i = 0; i < m; i++) {
            ans[i] = mp[nums1[i]];
        }
        return ans;
    }
};