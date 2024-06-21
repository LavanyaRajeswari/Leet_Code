class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<int>p;
        int sum = 0, ans = 0,x = 0;
        p.push_back(0);
        for(int i = 0; i <= grumpy.size()-1; i++ ) {
            if(grumpy[i] == 0){
                sum += customers[i];
                x += customers[i];
            }
            p.push_back(sum);
        }
        int s = 0, e = minutes-1;
        while(e <= grumpy.size()-1){
            sum = x;
            for(int i = s; i <= e; i++) {
                if(grumpy[i] == 1) {
                    sum += customers[i];
                }
            }
            ans = max(ans,sum);
            s++;
            e++;
        }
        return ans;
    }
};