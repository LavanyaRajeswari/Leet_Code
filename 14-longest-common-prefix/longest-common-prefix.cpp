class Solution {
public:
    struct TrieNode{
        TrieNode* children[26];
        bool isLeaf;
        int count;
        TrieNode() {
            for(int i = 0; i < 26;i++){
                children[i] = NULL;
                isLeaf = false;
                count = 0;
            }
        } 
    };
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* root = new TrieNode();
        int n = strs.size();
        string ans = "";
        for(int i = 0; i < n; i++) {
            TrieNode* cur = root;
            for(int j = 0; j < strs[i].length(); j++) {
                if(cur->children[strs[i][j] - 'a'] == NULL) {
                    TrieNode* child = new TrieNode();
                    cur->children[strs[i][j] - 'a'] = child;
                } 
                cur = cur->children[strs[i][j] - 'a'];
                cur->count++;
            } 
            cur->isLeaf = true;
        }
        TrieNode* cur = root;
        for(int i = 0; i < strs[0].length(); i++) {
                cur = cur->children[strs[0][i] - 'a'];
                if(cur->count == n){
                    ans += strs[0][i];
                }
                else{
                    break;
                }
        }
        return ans;
    }
};