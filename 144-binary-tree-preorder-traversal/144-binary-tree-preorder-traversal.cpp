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
    vector<int> solve(TreeNode* root,vector<int>& v)
    {
        if(root != NULL)
        {
            v.push_back(root->val);
            if(root->left != NULL)
            {
                solve(root->left,v);
            }
            if(root->right != NULL)
            {
                solve(root->right,v);
            }
            
        }
        return v;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL)
            return ans;
        
        solve(root,ans);
        return ans;
    }
};