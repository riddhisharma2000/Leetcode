class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int col = matrix[0].size();
         vector<vector<int>> dis(rows,  vector<int>(col,INT_MAX - 100000));
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j] == 0)
                {
                    dis[i][j] = 0;
                }
                else
                {
                    // for top and left
                    if(i>0)
                    {
                        dis[i][j] = min(dis[i][j] , dis[i-1][j] + 1);
                    }
                    
                    if(j>0)
                    {
                         dis[i][j] = min(dis[i][j] , dis[i][j-1] + 1);
                    }
                }
            }
        }
        
       
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=col-1;j>=0;j--)
            {
                  // for bottom and right
                    if(i<rows-1)
                    {
                        dis[i][j] = min(dis[i][j] , dis[i+1][j] + 1);
                    }
                    
                    if(j<col-1)
                    {
                         dis[i][j] = min(dis[i][j] , dis[i][j+1] + 1);
                    }
                
            }
        }
        
        return dis;
    }
};
