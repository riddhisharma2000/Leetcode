
class Solution {
public:
    
   void dfs(vector<vector<int>> &v , TreeNode *root, int sum ,vector<int> &a)
    {
       if(!root)
           return;
       
        a.push_back(root->val);
        if(!root->left && !root->right && root->val == sum)
        {
            v.push_back(a);
        }

     
         dfs(v , root->left , sum - root->val , a);
         dfs(v , root->right , sum - root->val , a);
   
       a.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> v;
        
        
        vector<int> a;
        
     
        dfs(v, root ,sum , a);
        
        return v;
    }
};
