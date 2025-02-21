/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void rec(Node* root,int l,map<int,vector<int>>&mp) {
        if(root == NULL) {
            return;
        }
        if(mp[l].size() > 0) mp[l].push_back(root->val);
        else mp[l] = {root->val};
        int n = root->children.size();
        for(int i = 0; i < n; i++) {
            rec(root->children[i],l+1,mp);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        map<int,vector<int>>mp;
        vector<vector<int>>ans;
        rec(root,0,mp);
        for(auto it:mp){
            vector<int>temp;
            for(auto i:it.second) {
                temp.push_back(i);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};