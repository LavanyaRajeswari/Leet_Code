class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(int i = 0; i < logs.size(); i++){
            if(logs[i] == "./"){  
            }
            else if(logs[i] == "../"){
                if(count >= 1){
                count--;
                }
            }
            else{
                count++;
            }
        }
        return count;
    }
};