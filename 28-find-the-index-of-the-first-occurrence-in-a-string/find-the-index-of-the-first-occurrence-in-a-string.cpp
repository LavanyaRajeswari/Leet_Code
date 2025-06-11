class Solution {
public:
    int strStr(string hay, string need) {
    int i = 0, j = 0, c = 0;
    int m = hay.length(), n = need.length();
    while(i < m and j < n) {
        // cout<<hay[i] << " " <<need[j]<<endl;
        if(hay[i] == need[j]) {
            c++;
            j++;
        }
        else if(hay[i] != need[j] and c > 0){
            c = 0;
            i = max(0,(i-j));
            // cout << ((i-j)+1) << endl;
            j = 0;
        }
        if(c == n) {
            return (i-n)+1;
        }
        // cout<<c<<endl;
        i++;
    }
    if(c == n) {
        return (i-n)+1;
    }
    return -1;   
    }
};