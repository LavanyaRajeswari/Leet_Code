class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    long long ans=0;
    if(left==1073741824 and right==2147483647){
        return 1073741824;
    }
    if(left==right) return left&right;
    for(long long i=0;i<=31;i++){
        int count = 1;
        for(long long j=left;j<=right;j++){
           if(((j>>i)&1) == 0){ 
           count = 0;
           break;
           }
        }
        if(count == 1){
        ans|=(1<<i);
        }
    }
    return ans;   
    }
};