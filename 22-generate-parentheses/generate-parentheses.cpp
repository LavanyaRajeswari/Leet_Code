class Solution {
public:
    void fun(int open,int close,string s,int n,vector<string>&v){
	if(close+open >= n*2){
		v.push_back(s);
		return;
	}
	if(close > open){
		return;
	}
	if(open == n){
		fun(open,close+1,s+')',n,v);	
	}
	else{
		fun(open+1,close,s+'(',n,v);
		fun(open,close+1,s+')',n,v);
	}
}
    vector<string> generateParenthesis(int n) {
    vector<string>v;
    string s = "(";
    fun(1,0,s,n,v);
    return v;
    }
};