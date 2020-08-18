// C++ code.
// 3 sum problem where sum of three numbers is zero.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        vector<vector<int>> b;
        
       sort(a.begin(),a.end());
        
        for(int i=0;i<a.size();i++)
        {
            int num = -a[i];
            int l = i+1;
            int r = a.size()-1;
            
            while(l < r)
            {
                int sum = a[l] + a[r];
                
                if(sum < num)
                    l++;
                else if(sum>num)
                    r--;
                else{
                    vector<int> tmp(3,0);
                    tmp[0] = a[i];
                    tmp[1] = a[l];
                    tmp[2] = a[r];
                    
                    b.push_back(tmp);
                    
                    while(l< r && a[l] == tmp[1]) l++;
                    
                     while(l< r && a[r] == tmp[2]) r--;
                }
                    
            }
            
            while(i+1 < a.size() && a[i+1] == a[i])
                i++;
        }
        
        
        
        return b;
        
    }
};
