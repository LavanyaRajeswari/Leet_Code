class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        map<string,int>mp1;
        map<string,int>mp2;
        string s;
        for(int i = 0; i <= s1.size(); i++) {
            if(s1[i] == ' ' || i == s1.size()) {
                mp1[s]++;
                s = "";
            }
            else{
                s += s1[i];
            }
        }
        for(int i = 0; i <= s2.size(); i++) {
            if(s2[i] == ' ' || i == s2.size()) {
                mp2[s]++;
                s = "";
            }
            else{
                s += s2[i];
            }
        }
        for(int i = 0; i <= s1.size(); i++) {
            if(s1[i] == ' ' || i == s1.size()) {
                if(mp2[s] == 0 && mp1[s] == 1){
                    ans.push_back(s);
                }
                s = "";
            }
            else{
                s += s1[i];
            }
        }
        for(int i = 0; i <= s2.size(); i++) {
            if(s2[i] == ' ' || i == s2.size()) {
                if(mp1[s] == 0 && mp2[s] == 1){
                    ans.push_back(s);
                }
                s = "";
            }
            else{
                s += s2[i];
            }
        }
        return ans;
    }
};