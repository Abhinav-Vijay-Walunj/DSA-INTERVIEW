/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(Node* root,vector<int>& v)
    {
        if(root == NULL)
            return;
        v.push_back(root->val);
        for(auto x:root->children)
            solve(x,v);
    }
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(root == NULL)
            return v;
        solve(root,v);
        return v;
        
    }
};