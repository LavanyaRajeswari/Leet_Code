class Solution {
public:
    vector<int> plusOne(vector<int>& dts) {
        reverse(dts.begin(),dts.end());
        int i = 0;
        int n = dts.size();
        dts.push_back(0);
        dts[i] += 1;
        while(i < n) {
            if(dts[i] == 10) {
                dts[i] = 0;
                dts[i+1] += 1;
            }
            else {
                break;
            }
            i++;
        }
        if(dts[n] == 0) {
            dts.pop_back();
        }
        reverse(dts.begin(),dts.end());
        return dts;
    }
};