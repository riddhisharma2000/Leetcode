 // C++ code    
    
    int minInsertions(string s) {
        
        int l = s.length();
        stack<char> st;
        int res=0;
        
        for(int i=0;i<l;i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i] == ')' && s[i+1] == ')' && i<s.size())
                {
                    if(!st.empty())
                    {
                        st.pop();
                    }
                    else
                    {
                        res++;
                    }
                    
                    i++;
                }
                else if(s[i] == ')' && s[i+1] != ')' && i<s.size())
                {
                    if(!st.empty())
                    {
                        st.pop();
                        res++;
                    }
                    else
                    {
                        res += 2;
                    }
                }
            }
        }
        
        if(st.empty())
        return res;
        else
        {
            return (st.size()*2 + res);
        }
        
    }
