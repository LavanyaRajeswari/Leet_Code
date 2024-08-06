class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        map<string,int>mp1;
        map<string,int>mp2;
        for(auto it:words1){
            mp1[it]++;
        }
        for(auto it:words2){
            mp2[it]++;
        }
        for(int i = 0; i < words1.size(); i++) {
            if(mp1[words1[i]] == mp2[words1[i]] && mp1[words1[i]] == 1){
                ans++;
            }
        }
        return ans;
    }
};