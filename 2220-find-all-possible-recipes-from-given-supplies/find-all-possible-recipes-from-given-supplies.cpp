class Solution {
public:
    vector<string> findAllRecipes(vector<string>& rec, vector<vector<string>>& in, vector<string>& sup) {
        map<string,vector<string>>mp;
        map<string,int>ind;
        map<string,int> isRecipe;
        vector<string>ans;
        for(int i = 0; i < in.size(); i++) {
            isRecipe[rec[i]]++;
            for(auto it:in[i]) {
                mp[it].push_back(rec[i]);
                ind[rec[i]]++;
            }
        }
        queue<string>q;
        for(int i = 0; i < sup.size(); i++) {
            q.push(sup[i]);
        }
        while(!q.empty()){
            string x = q.front();
            q.pop();
            for(auto it : mp[x]) {
                ind[it]--;
                if (ind[it] == 0){
                    if (isRecipe.find(it) != isRecipe.end()) ans.push_back(it);
                    q.push(it);
                }
            }
        }
        return ans;
    }
};