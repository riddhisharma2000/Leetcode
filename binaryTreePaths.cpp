/// solution for printing all paths from root to all leaf nodes.


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
    
 void dfs(TreeNode* root, vector<string> &s, string t)
 {
     if(!root->left && !root->right)
     {
         s.push_back(t);
         return ;
     }
     
     if(root->left)
     {
             dfs(root->left, s ,t + "->" + to_string(root->left->val));
     }
      if(root->right)
     {
             dfs(root->right, s ,t + "->" + to_string(root->right->val));
     }
 }
    
    vector<string> binaryTreePaths(TreeNode* root) {
       
        vector<string> s;
        
        if(!root)
            return s;
        
        dfs(root , s , to_string(root->val));
        
        return s;
        
    }
};
