/* The approach is to first count the number of total cells with 1's(i.e 4*count) and 
then subtract the repeating(r) two sides(i.e the left and top) of each cell rather than 
the corner ones.
r*2 as they are included two times .
*/


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& a) {
        
       int count = 0 , r = 0;
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                if(a[i][j] == 1)
                {
                    count++;
                    
                    if(i>0 && a[i-1][j])
                        r++;
                    
                    if(j>0 && a[i][j-1])
                        r++;
                }
            }
        }
        
        return 4*count - r*2;
    }
};
