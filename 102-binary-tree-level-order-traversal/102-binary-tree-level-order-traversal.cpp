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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        vector<int> v;
        q.push(root);
        int cnt=1;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            
            
            //ans.push_back(v);
            if(temp->left != NULL)
            {
                q.push(temp->left);
                //v.push_back(temp->data);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
            q.pop();
            v.push_back(temp->val);
            if(--cnt == 0)
            {
                ans.emplace_back(v);
            v.clear();
                cnt=q.size();
            }
            
            
        }
        return ans;
    }
};