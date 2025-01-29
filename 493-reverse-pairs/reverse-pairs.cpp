class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high) {
        int i = low, j = mid+1,ans = 0;
        vector<int>temp;
        while(i <= mid) {
            // cout<<nums[i]<<" "<<nums[j]<<endl;
            while(j <= high and (long long)nums[i] > (2LL*nums[j])) {
                // cout<<(mid-i)+1<<endl;
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
            // cout << temp[i] << " ";
        }
        // cout<<endl;
        return ans;
    }
    int mergeSort(vector<int>& nums,int low,int high) {
        if(low >= high) {
            return 0;
        }
        int ans = 0;
        int mid = (low+high)/2;
        ans += mergeSort(nums,low,mid);
        ans += mergeSort(nums,mid+1,high);
        ans += merge(nums,low,mid,high);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size()-1;
        return mergeSort(nums,0,n);

    }
};