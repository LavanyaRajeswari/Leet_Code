class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        int n = ast.size();
        for(int i = 0; i < n; i++) {
            if(mass < ast[i]) {
                return false;
            }
            mass += ast[i];
        }
        return true;
    }
};