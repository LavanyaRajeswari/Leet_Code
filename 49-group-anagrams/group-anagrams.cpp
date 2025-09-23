class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    map<string,vector<int>>map;
    vector<string>s = strs;
    for(int i=0;i<strs.size();i++){
        sort(s[i].begin(),s[i].end());
        vector<int>x;
        if(map[s[i]].size() > 0){
            x = map[s[i]];
        }
        x.push_back(i);
        map[s[i]] = x;
    } 
    for(auto it:map){
        vector<string>m;
        for(auto i:it.second){
            m.push_back(strs[i]);
        }
        ans.push_back(m);
    }
    return ans;
    }
};