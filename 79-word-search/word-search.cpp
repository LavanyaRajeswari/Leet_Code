class Solution {
public:
    bool rec(vector<vector<char>>& board, string word,int i,int j,int k,int n,int m,vector<vector<int>> &vi) {
        if(i < 0 || j < 0 || i >= n || j >= m || k >= word.size()) return false;
        if((k+1 == word.size()) and (word[k] == board[i][j]) and vi[i][j] != 1) {
            return true;
        }
        int ans = false;
        if(board[i][j] == word[k] and vi[i][j] != 1) {
            vi[i][j] = 1;
            ans = (rec(board,word,i+1,j,k+1,n,m,vi) || rec(board,word,i,j+1,k+1,n,m,vi) || rec(board,word,i-1,j,k+1,n,m,vi) || rec(board,word,i,j-1,k+1,n,m,vi));
            if(ans == false) {
                vi[i][j] = 0;
                return false;
            }
        }
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(),m = board[0].size();
        bool ans = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == word[0]) {
                    vector<vector<int>> vi(n,vector<int>(m));
                    ans = rec(board,word,i,j,0,n,m,vi);
                }
                if(ans == true) return ans;
            }
        }
        return ans;
    }
};