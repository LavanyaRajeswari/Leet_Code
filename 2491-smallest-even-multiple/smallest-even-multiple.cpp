class Solution {
public:
    int smallestEvenMultiple(int n) {
    int ans;
    // for(int i=1;i<=n*2;i++){
    //     if(i%2==0 and i%n==0){
    //         ans=i;
    //         break;
    //     }
    // }   
    if(n % 2 == 0) ans = n;
    else ans = (n*2);
    return ans; 
    }
};