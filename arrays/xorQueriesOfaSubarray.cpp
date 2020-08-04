// c++ code

class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        
        int n = a.size();
        
        vector<int> ans;
        
        int pre[n];
        
        pre[0] = a[0];
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1] ^ a[i];
        }
        
        for(int i=0;i<q.size();i++)
        {
            int l = q[i][0];
            int r = q[i][1];
            
            if(l == 0)
            {
                ans.push_back(pre[r]); 
            }
            else
            {
            ans.push_back(pre[r] ^ pre[l-1]);
            }
        }
        
        return ans;
    }
};
