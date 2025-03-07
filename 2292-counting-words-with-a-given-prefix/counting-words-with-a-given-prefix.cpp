class Solution {
public:
    struct TrieNode{
        bool isLeaf;
        int count;
        TrieNode* children[26];
        TrieNode(){
            count = 0;
            isLeaf = false;
            for(int i = 0; i < 26; i++) {
                children[i] = NULL;
            }
        }
    };
    int prefixCount(vector<string>& words, string pref) {
        TrieNode* root = new TrieNode();
        TrieNode* temp = root;
        for(int i = 0; i < words.size(); i++) {
            temp = root;
            for(auto it:words[i]) {
                if(temp->children[it-'a'] == NULL) {
                    temp->children[it-'a'] = new TrieNode();
                }
                temp = temp->children[it-'a'];
                temp->count++;
            }
            temp->isLeaf = true;
        }
        temp = root;
        int ans = 0;
        for(auto it : pref) {
            if(temp->children[it-'a'] == NULL) {
                return 0;
            }
            temp = temp->children[it-'a'];
        }
        return temp->count;
    }
};