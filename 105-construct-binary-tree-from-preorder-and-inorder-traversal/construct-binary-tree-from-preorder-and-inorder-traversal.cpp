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
    TreeNode* build(int i,int j,int a,int b,vector<int>& preorder,map<int,int>&mp){
        if (i > j) return nullptr;
        TreeNode* root = new TreeNode(preorder[i]);
        int ind = mp[preorder[i]];
        int left = ind-a;
        int right = b-ind;
        root->left = build(i+1,i+left,a,ind-1,preorder,mp);
        root->right = build(i+left+1,j,ind+1,b,preorder,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        map<int,int> mp;
        for (int i=0; i<n; i++){
            mp[inorder[i]] = i;
        }
        return build(0,n-1,0,n-1,preorder,mp);
    }
};