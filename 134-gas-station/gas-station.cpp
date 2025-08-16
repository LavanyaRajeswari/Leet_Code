class Solution {
public:
    bool fun(int i,vector<int>& gas, vector<int>& cost,int n) {
        int g = 0,f = 0;
        for(int j = i; j < n; j++){
            g += gas[j];
            g -= cost[j];
            if(g < 0) f= 1;
        }
        for(int j = 0; j < i; j++) {
            g += gas[j];
            g -= cost[j];
            if(g < 0) f = 1;
        }
        if(g >= 0 and f == 0) return true;
        return false;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(),x = 0,y = 0;
        for(int i = 0; i < n; i++) {
            x += gas[i];
            y += cost[i];
        }
        if(x < y) return -1;
        map<pair<int,int>,int>mp;
        for(int i = 0; i < n; i++) {
            if(gas[i] >= cost[i] and mp.find({gas[i],cost[i]}) == mp.end()) {
                mp[{gas[i],cost[i]}]++;
                bool ans = fun(i,gas,cost,n);
                if(ans) return i;
            }
        }
        return -1;
    }
};