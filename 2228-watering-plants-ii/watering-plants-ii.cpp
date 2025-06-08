class Solution {
public:
    int minimumRefill(vector<int>& p, int A, int B) {
        int n = p.size(),i = 0, j = n - 1;
        int curA = A,curB = B;
        int ans = 0;
        while(i <= j) {
            if(i == j) {
                if(curA >= curB) {
                    if(curA < p[i]) {
                        ans++;
                        curA = A;
                    }
                    if(curA >= p[i]) {
                        curA -= p[i];
                        i++;
                    }
                }
                else {
                    if(curB < p[j]) {
                        ans++;
                        curB = B;
                    }
                    if(curB >= p[j]) {
                        curB -= p[j];
                        j--;
                    }
                }
            }
            else{
                if(curA < p[i]) {
                    ans++;
                    curA = A;
                }
                if(curA >= p[i]) {
                    curA -= p[i];
                    i++;
                }
                if(curB < p[j]) {
                    ans++;
                    curB = B;
                }
                if(curB >= p[j]) {
                    curB -= p[j];
                    j--;
                }
            }
        }
        return ans;
    }
};