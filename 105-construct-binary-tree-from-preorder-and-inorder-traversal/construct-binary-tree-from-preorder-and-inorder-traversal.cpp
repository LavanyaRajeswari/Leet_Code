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
    int i = 0;
    TreeNode* bulid(int a,int b,vector<int>&preorder,map<int,int>&mp) {
        if(a > b) return nullptr;
        TreeNode* root = new TreeNode(preorder[i]);
        int ind = mp[preorder[i]];
        i++;
        root->left = bulid(a,ind-1,preorder,mp);
        root->right = bulid(ind+1,b,preorder,mp);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }
        return bulid(0,n-1,preorder,mp);
    }
};