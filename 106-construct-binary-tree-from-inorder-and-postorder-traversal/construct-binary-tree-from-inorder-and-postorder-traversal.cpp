/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int j;
    TreeNode* build(int a, int b,vector<int>& postorder,map<int,int>& mp) {
        if(a > b) return nullptr;
        TreeNode * root = new TreeNode(postorder[j]);
        int ind = mp[postorder[j]];
        j--;
        root->right = build(ind+1,b,postorder,mp);
        root->left = build(a,ind-1,postorder,mp);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        map<int,int>mp;
        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        j = n - 1;
        return build(0,n-1,postorder,mp);
    }
};