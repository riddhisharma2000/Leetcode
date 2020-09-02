/*  Course Schedule problem on leetcode is a basic application of cycle detection in a directed graph.
*/

class Solution {
public:
    
   bool dfs(int node, vector<bool> &rec , vector<bool> &vis,vector<vector<int>>& v)
   {
       if(vis[node] == false)
       {
       vis[node] = true;
       rec[node] = true;
       
       for(auto it : v[node])
       {
           if(!vis[it])
           {
               if(dfs(it, rec , vis , v) == false)
                   return false;
           }
           else
           {
               if(rec[it])
                   return false;
           }
       }
       }
           rec[node] = false;
       return true;
       
   }
    
    bool canFinish(int numCourses, vector<vector<int>>& p) {
         
        
         vector<vector<int>> v(numCourses);
         
        for(auto i : p)
        {
            v[i[1]].push_back(i[0]);
            
        }
        
        vector<bool> vis(numCourses,false);
         vector<bool> rec(numCourses,false);
        
      
        
        for(int i =0;i<numCourses;i++)
        {
       if( dfs(i,rec, vis , v) == false)
                return false;
        }
        
            return true;
    }
};
