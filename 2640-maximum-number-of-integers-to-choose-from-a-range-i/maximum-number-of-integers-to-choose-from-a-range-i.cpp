class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       int ans = 0;
       map<int,int>mpp;
       for(auto it:banned){
        mpp[it]++;
       }
       int sum = 0;
       for(int i=1;i<=n;i++){
        if(mpp.find(i) != mpp.end()) continue;
        else{
            if(sum+i <= maxSum){
                sum+=i; 
                ans++;
            }
            else{
                break;
            }
        }
       } 
       return ans;
    }
};