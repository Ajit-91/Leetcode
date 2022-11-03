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
    TreeNode* helper(int low, int high, vector<int>& nums) {
        // if at any stage low exceeds high then it is out of bound so return
        if(low > high) return NULL;
        // find mid element in given range low to high
        int mid = low + (high-low)/2;
        // create new node with mid element
        TreeNode* node = new TreeNode(nums[mid]);
        // recursively create the left and right of tree
        node->left = helper(low, mid-1, nums);
        node->right = helper(mid+1, high, nums);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0, nums.size()-1, nums);
    }
};