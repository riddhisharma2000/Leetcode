// c++ code

int subarraySum(vector<int>& a, int k) {
        
        unordered_map<int,int> m;
        int sum=0,c=0;
      
        for(int i = 0;i<a.size();i++)
        {
            sum += a[i];
            
            if(sum == k)
                c++;
            
            if(m.find(sum - k) != m.end())
            {
                c += m[sum-k];
            }
            
            m[sum]++;
        }
        
        return c;
    }
