class Solution {
public:
    void fun(vector<vector<int>>&ans,int n,int k,int i,vector<int>&a,int s){
        if(s >= k){
            ans.push_back(a);
            return;
        }
        if(i > n){
            return;
        }
        a.push_back(i);
        fun(ans,n,k,i+1,a,s+1);
        a.pop_back();
        fun(ans,n,k,i+1,a,s);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>a;
        fun(ans,n,k,1,a,0);
        return ans;
    }
};