//C++ code

int lengthOfLongestSubstring(string s) {
        
        int i=0,j=0,c=0;
        
        unordered_set<char> m;
        int len = s.length();
        
        while(i<len && j<len)
        {
            if(m.find(s[j]) == m.end())
            {
                m.insert(s[j]);
                j++;
                c = max(c,j-i);
            }
            else
            {
                 //m.erase(m.find(s[i])); 
                m.erase(s[i]);
                i++;
            }
        }
        return c;
        
    }
