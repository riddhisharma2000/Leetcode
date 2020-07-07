/*  Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        
      vector<int> res(a.size()+1);
        
        if( a.size() == 0)
        {
            res.push_back(1);
            return res;
        }
        
        int i,carry = 1;
        
        for(i=a.size() - 1; i>=0;i--)
        {
            if(a[i] == 9)
            {
               a[i] = 0;    
            }
            else
            {
                carry += a[i];
                a[i] = carry;
                break;
            }
        }
        
        if(i<0)
        {res[0] = 1;
            for(i=1;i<a.size();i++)
            {
                res[i] = 0;
            }
         return res;
        }
        else
            return a;
        
    }
};