class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int n=nums.size(), n1=0, n2=0, len=0;
        vector<int> mpp(2*n+1, INT_MIN);
        mpp[n]=-1;
        for(int i=0; i<n; i++){
            n1+=nums[i];
            n2=(i+1)-n1;
            if (mpp[n1-n2+n]!=INT_MIN) 
                len=max(len, i-mpp[n1-n2+n]);
            else 
                mpp[n1-n2+n]=i;
        } 
        return len;    
    }
};