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
    int getheight(TreeNode * root){
        if(!root)return 0;
        return 1+max(getheight(root->left),getheight(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int left=getheight(root->left);
        int right=getheight(root->right);
        int d=left+right;
        int sub = max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(d,sub);
    }
};
