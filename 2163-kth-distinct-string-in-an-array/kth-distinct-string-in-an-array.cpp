class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        for(int i = 0; i < arr.size(); i++) {
            if(mp[arr[i]] == 1){
                ans++;
            }
            if(ans == k){
                return arr[i];
            }
        }
        return "";
    }
};