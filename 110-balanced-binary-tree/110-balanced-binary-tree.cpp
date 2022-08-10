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
    bool solve(TreeNode* root,int* h)
    {
        int lh=0,rh=0;
        
        int l=0,r=0;
        if(root == NULL)
        {
            *h=0;
            return 1;
        }
        l=solve(root->left,&lh);
        r=solve(root->right,&rh);
        
        *h=max(lh,rh)+1;
        if(abs(lh-rh)>1)
            return 0;
        else
            return l&&r;
            
    }
    bool isBalanced(TreeNode* root) {
       if(root == NULL)
           return true;
        int h=0;
        return solve(root,&h);
        
    }
};