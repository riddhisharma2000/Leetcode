/*  In two sum problem we need to find a pair whose sum is equal to target.
    we can use a hash table to add array values(as key) and index as values. 
    We can find pairs using temporary variable temp to find the remaining number after subtracting the current number from target
    and checking in the hash table.
*/

//C++ Solution

vector<int> twoSum(vector<int>& nums, int target) {
     
        unordered_map<int,int> m;
        
        vector<int> v;
        
         
        
        for(int i=0;i<nums.size();i++)
        {
            int temp = target - nums[i];
            
            
            if( m.find(temp) != m.end())
            {
                v.push_back( m[temp] );
                v.push_back(i);
                
                return v;
            }
            
            m[nums[i]] = i;
             
        }
        
        return v;
    }
