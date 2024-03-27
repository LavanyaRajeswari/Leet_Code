class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int s = tasks.size();
        vector<int>v(26);
        for(int i=0;i<tasks.size();i++){
            v[tasks[i]-65]++;
        }
        sort(v.begin(),v.end());
        int maxi = v[25] - 1;
        int ans = maxi*n;
        for(int i=24;i>=0 && v[i];i--){
            ans -= min(maxi,v[i]);
        }
        return ans > 0 ? ans+s : s;   
    }
};