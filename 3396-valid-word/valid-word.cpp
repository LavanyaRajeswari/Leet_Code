class Solution {
public:
    bool isValid(string word) {
        int r = 0,f = 0;
        transform(word.begin(),word.end(),word.begin(), ::tolower);
        for(int i = 0; i < word.length(); i++) {
            if(isalpha(word[i])) {
                if(word[i] == 'a' || word[i] == 'i' || word[i] == 'e' || word[i] == 'o' || word[i] == 'u') {
                    r = 1;
                }
                else {
                    f = 1;
                }
            }
            else if(!isdigit(word[i])){
                return false;
            }
        }
        if(r+f == 2 and word.length() >= 3) return true;
        return false;
    }
};