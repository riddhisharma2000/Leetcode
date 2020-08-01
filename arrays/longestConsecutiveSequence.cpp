//  c++ solution

class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        unordered_set<int> s;
        int res =0;
        
        for(int i=0;i<a.size();i++)
        {
            s.insert(a[i]);
        }
        
        for(int i=0;i<a.size();i++)
        {
           if(s.find(a[i]-1) == s.end())
           {
               int k = a[i];
               
               while( s.find(k) != s.end())
               {
                   k++;
               }
               
               res = max(res,k - a[i]);
               
                
           }
        }
        
        return res;
        
    }
};
