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
    bool res = true;
    void helper(TreeNode* root, int rootVal){
        if(!root){
            return;
        }
        if(root->val != rootVal){
            res = false;
            return;
        }
        helper(root->left, rootVal);
        helper(root->right, rootVal);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        helper(root, root->val);
        return res;
    }
};