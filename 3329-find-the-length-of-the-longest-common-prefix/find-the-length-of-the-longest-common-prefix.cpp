class Solution {
public:
    struct Trie{
        Trie* children[10];
        bool isLeaf;
        int count; 
        Trie(){
            for(int i = 0; i < 10; i++) {
                children[i] = NULL;
                count = 0;
                isLeaf = false;
            }
        }
    };

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie* root = new Trie();
        Trie* node = root;
        int ans = 0;
        for(int i= 0; i < arr1.size(); i++) {
            string s = to_string(arr1[i]);
            node = root;
            for(int j = 0; j < s.length(); j++){
                if(node->children[s[j] - '0'] == NULL ){
                    Trie* newNode = new Trie();
                    node->children[s[j] - '0'] = newNode;
                }
                node = node->children[s[j] - '0'];
            }
            node->isLeaf = true;
        }
        for(int i = 0; i < arr2.size(); i++) {
            node = root;
            int c = 0;
            string s = to_string(arr2[i]);
            for(int j = 0; j < s.length(); j++) {
                if(node->children[s[j] - '0'] != NULL) {
                    node = node->children[s[j] - '0'];
                    c++;
                }
                else{
                    ans = max(ans,c);
                    c = 0;
                    break;
                }
            }
            ans = max(ans,c);
        }
        return ans;
    }
};