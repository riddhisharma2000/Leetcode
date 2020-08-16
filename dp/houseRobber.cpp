// C++ solution. 
// Using DP.

class Solution {
public:
    int rob(vector<int>& nums) {
        
        int i,l=nums.size();
        
        if(l == 0)
            return 0;
        
        vector<int> res(l + 1,0);
        
        
        res[l] = 0;
        res[l-1] = nums[l-1];
        
        for(i = l-2;i>=0; i--)
        {
            res[i] = max( res[i+1], res[i+2]+nums[i]);
        }
        
        
        
        return res[0];
            
        
    }
};
