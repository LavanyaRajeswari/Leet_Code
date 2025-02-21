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
    void rec(Node* root,vector<int>&ans) {
        if(root == NULL) {
            return;
        }
        ans.push_back(root->val);
        int n = root->children.size();
        for(int i = 0; i < n; i++) {
            rec(root->children[i],ans);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int>ans;
        rec(root,ans);
        return ans;
    }
};