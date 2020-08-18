//c++ code
// Trapping Rainwater question solution using  2 - pointer technique.
// Basic idea is find th nearest left and right maximum(a,b) for each
//element and then find the difference of minimum(a,b) and the current
//element and the store the result in final answer. 

class Solution {
public:
    int trap(vector<int>& a) {
        
        int n = a.size();
        
        int res =0;
        
        int low = 0,high = n-1;
        
        int left_max = 0, right_max = 0;
        
       while(low < high)
        {
           
            if(a[low] < a[high])
            {
                if(left_max < a[low])
                    left_max = a[low];
                else
                    res += left_max - a[low];
                
                low++;
            }
            else
            {
                 if(right_max < a[high])
                    right_max = a[high];
                else
                    res += right_max - a[high];
                
                high--;
            }
        }
        
        return res ;
    }
};
