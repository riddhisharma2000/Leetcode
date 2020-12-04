// bottom up solution 
class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        
        int m = t1.length();
        int n = t2.length();
        
        if(m == 0 || n==0)
        {
            return 0;
        }
        
        int t[m+1][n+1];
        
        for(int i=0;i<m+1;i++)
        {
            t[i][0] = 0;
        }
        
        for(int i=0;i<n+1;i++)
        {
            t[0][i] = 0;
        }
        
        
        for(int i=1;i<m+1;i++)
        {
           for(int j=1;j<n+1;j++)
        {
           if(t1[i-1] == t2[j-1])
           {
               t[i][j] = t[i-1][j-1] + 1;
           }
               else
               {
                   t[i][j] = max(t[i-1][j] , t[i][j-1]);
               }
        }
        }
        
        return t[m][n];
    }
};
