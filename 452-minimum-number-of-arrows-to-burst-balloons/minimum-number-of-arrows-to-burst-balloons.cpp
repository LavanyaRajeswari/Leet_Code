class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
    vector<vector<int>>ans;
    int c=1;
    for(int i=0;i<v.size();i++) {  
    sort(v[i].rbegin(),v[i].rend());
    ans.push_back(v[i]);
    }
    sort(ans.begin(),ans.end());
        int j,i=0;
        while(i<ans.size()-1)
        {   j=i+1;
            while(j<ans.size())
            {   
                if(ans[i][0] <= ans[j][0] and ans[i][0] >= ans[j][1]){
                    j++; 
                }
                else{
                    c++;
                    i=j;
                    break;
                }
            }
            if(j==ans.size()) return c;
        }
        return c;
    }
};