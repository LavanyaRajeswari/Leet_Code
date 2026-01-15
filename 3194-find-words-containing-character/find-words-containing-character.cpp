class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        int n = w.size();
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            for(auto it:w[i]) {
                if(it == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};