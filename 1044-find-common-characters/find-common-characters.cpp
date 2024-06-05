class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    map<char,vector<int>>mpp;
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            map<char,int>m;
            for(auto it:words[i]){
                m[it]++;
            }
            for(auto it:m){
                if(mpp[it.first].size()) {
                    vector<int>s;
                    s = mpp[it.first];
                    s.push_back(it.second);
                    mpp[it.first] = s;
                }
                else{
                    mpp[it.first] = {it.second};
                }
            }
        }
        for(auto it:mpp){
            int count = 0,x=INT_MAX;
            string st;
            for(auto i:it.second){   
                count++;
                x = min(x,i);
            }
            if(count == words.size()){
                st = it.first;
                while(x--){
                ans.push_back(st);
                }
            }
        }
        return ans;
    }
};