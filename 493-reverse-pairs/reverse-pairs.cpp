class Solution {
public:
    long long ans = 0;
    void merge(vector<int>& nums,int low,int mid,int high) {
        int i = low, j = mid+1;
        vector<int>temp;
        while(i <= mid) {
            while(j <= high and (long long)nums[i] > (2LL*nums[j])) {
                j++;
            }
            ans += (j-(mid+1));
            i++;
        }
        i = low, j = mid+1;
        while(i <= mid and j <= high) {
            if(nums[i] < nums[j]) {
                temp.push_back(nums[i++]);
            }
            else{
                temp.push_back(nums[j++]);
            }
        }
        while(i <= mid) {
            temp.push_back(nums[i++]);
        }
        while(j <= high) {
            temp.push_back(nums[j++]);

        }
        for(int i = low; i <= high; i++) {
            nums[i] = temp[i-low];
        }
    }
    void mergeSort(vector<int>& nums,int low,int high) {
        if(low >= high) {
            return;
        }
        // int ans = 0;
        int mid = (low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
        // return ans;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size()-1;
        mergeSort(nums,0,n);
        return ans;

    }
};