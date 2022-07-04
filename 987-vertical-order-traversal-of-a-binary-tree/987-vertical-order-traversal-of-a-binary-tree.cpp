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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map < int, map < int, multiset < int >>> nodes;
  queue < pair < TreeNode * , pair < int, int >>> todo;
  todo.push({
    root,
    {
      0,
      0
    }
  }); //initial vertical and level
  while (!todo.empty()) {
    auto p = todo.front();
    todo.pop();
    TreeNode * temp = p.first;

    //x -> vertical , y->level
    int x = p.second.first, y = p.second.second;
    nodes[x][y].insert(temp -> val); //inserting to multiset
      if (temp -> left) {
      todo.push({
        temp -> left,
        {
          x - 1,
          y + 1
        }
      });
    }
    if (temp -> right) {
      todo.push({
        temp -> right,
        {
          x + 1,
          y + 1
        }
      });
    }
  }
  vector < vector < int >> ans;
  for (auto p: nodes) {
      vector < int > col;
    for (auto q: p.second) {
      col.insert(col.end(), q.second.begin(), q.second.end());
    }
    ans.push_back(col);
  }
  return ans;
        /*
        map<int,map<int,multiset<int,int>>> mp;
//         it stores at each node line,height,at same heught and level may be coincident nodes so to store them in sorted order
        queue<pair<TreeNode*,pair<int,int>>> q;
//         to store each node with its line and level or height
        q.push({root,{0,0}});
//         root,level,line
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            TreeNode* node=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            
            mp[x][y].insert(node->val);
            
            if(node->left != NULL)
            {
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right != NULL)
            {
                q.push({node->left,{x+1,y+1}});
            }
            
        }
        vector<vector<int>> ans;
        
        for(auto it:mp)
        {
            vector<int> col;
            for(auto i:it.second)
            {
                col.insert(col.end(),i.second.begin(),i.second.end());
            }
            ans.push_back(col);
        }
        return ans;*/
    }
};