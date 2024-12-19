class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it:nums2) {
            nums1.push_back(it);
        }
        sort(nums1.begin(),nums1.end());
        int low = 0, high = nums1.size()-1;
        int mid = (low+high)/2;
        double ans = nums1[mid];
        if(nums1.size() % 2 == 0)  {
            ans += nums1[mid+1];
            ans /= 2;
        }
        return ans;
    }
};