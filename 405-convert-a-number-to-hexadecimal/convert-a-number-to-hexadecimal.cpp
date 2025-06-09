class Solution {
public:
    string toHex(long long num) {
        if(num == 0) return "0";
        if(num < 0) {
            num *= -1;
            string x = "";
            while(num > 0) {
                if(num&1) x+='0';
                else x+='1';
                num >>= 1;
            }
            int b = 1;
            vector<int>bit(32,1);
            for(int i = 0; i < x.size(); i++) {
                if(x[i] == '0') {
                    bit[i] = 0;
                }
            }
            for(int i = 0; i < 32; i++){
                if(bit[i] == 1) {
                    num += pow(2,i);
                }
            }
            num++;
        }
            vector<int>v;
            vector<string>ch = {"a","b","c","d","e","f"};
            string ans = "";
            int q = num/16;
            if(num <= 9) return to_string(num);
            if(num < 16) {
                return ch[num-10];
            }
            while(q > 0) {
                q = num/16;
                int r = num%16;
                v.push_back(r);
                num = q;
            }
            reverse(v.begin(),v.end());
            for(auto it:v) {
                if(it >= 10) {
                    ans += ch[it-10];
                }
                else{
                    ans += to_string(it);
                }
            }
        return ans;
    }
};