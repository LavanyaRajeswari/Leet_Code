class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(int i = 0; i < details.size(); i++){
            string s = details[i];
            int x = 0;
            x += s[11] - '0';
            x =  x * 10 + (s[12] - '0');
            if(x > 60){
                ans++;
            }
        }
        return ans;
    }
};