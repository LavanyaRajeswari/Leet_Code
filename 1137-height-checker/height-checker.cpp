class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int>v;
        int ans = 0;
        for(auto it:heights){
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<heights.size();i++){
            if(v[i] != heights[i]){
                ans++;
            }
        }
        return ans;
    }
};