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
    int solve(TreeNode* root)
    {
        
        if(root != NULL)
        {
        if(root->left != NULL)
        {
            return root->left->val;
        }
        return (solve(root->left)+solve(root->right));
        }
        return 0;
            
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root==NULL)return 0;
        int leaf=0;                
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            leaf=root->left->val;
        return leaf+sumOfLeftLeaves(root->right)+sumOfLeftLeaves(root->left);
        
    }
};