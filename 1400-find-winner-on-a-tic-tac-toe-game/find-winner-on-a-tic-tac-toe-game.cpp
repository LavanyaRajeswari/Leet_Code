class Solution {
public:
    string tictactoe(vector<vector<int>>& m) {
        vector<vector<int>>v(3,vector<int>(3,0));
        for(int i = 0; i < m.size(); i++) {
            if(i % 2 == 0) {
                v[m[i][0]][m[i][1]] = 1;
            }
            else{
                v[m[i][0]][m[i][1]] = 2;
            }
        }
        if(v[0][0] == 1 and v[0][1] == 1 and v[0][2] == 1) return "A";
        if(v[1][0] == 1 and v[1][1] == 1 and v[1][2] == 1) return "A";
        if(v[2][0] == 1 and v[2][1] == 1 and v[2][2] == 1) return "A";
        if(v[0][0] == 1 and v[1][0] == 1 and v[2][0] == 1) return "A";
        if(v[0][1] == 1 and v[1][1] == 1 and v[2][1] == 1) return "A";
        if(v[0][2] == 1 and v[1][2] == 1 and v[2][2] == 1) return "A";
        if(v[0][0] == 1 and v[1][1] == 1 and v[2][2] == 1) return "A";
        if(v[0][2] == 1 and v[1][1] == 1 and v[2][0] == 1) return "A";

        if(v[0][0] == 2 and v[0][1] == 2 and v[0][2] == 2) return "B";
        if(v[1][0] == 2 and v[1][1] == 2 and v[1][2] == 2) return "B";
        if(v[2][0] == 2 and v[2][1] == 2 and v[2][2] == 2) return "B";
        if(v[0][0] == 2 and v[1][0] == 2 and v[2][0] == 2) return "B";
        if(v[0][1] == 2 and v[1][1] == 2 and v[2][1] == 2) return "B";
        if(v[0][2] == 2 and v[1][2] == 2 and v[2][2] == 2) return "B";
        if(v[0][0] == 2 and v[1][1] == 2 and v[2][2] == 2) return "B";
        if(v[0][2] == 2 and v[1][1] == 2 and v[2][0] == 2) return "B";

        for(auto it:v){
            for(auto i:it) {
                if(i == 0) return "Pending";
            }
        }
        return "Draw";
    }
};