class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i = 0,score = 0;
        int j = tokens.size()-1;
        while(i<=j){
            if(tokens[i] <= power){
                power-=tokens[i];
                score++;
                i++;
            }
            else if(i < j && score > 0){
                power+=tokens[j];
                j--;
                score--;
            }
            else{
                return score;
            }
        }
        return score;
    }
};