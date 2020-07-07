/*If you are given a column title of excel sheet and you need to return the corresponding number.
       for example:-
        A -> 1
        Z -> 26
        AB -> 28 
        AB = 26*1 + 2;
        CDA -> 2133
        CDA = 26*26*3+26*4+1
*/

class Solution {
public:
    int titleToNumber(string s) {
        
        int res =0,j=s.length()-1;
        
        for(int i=0;i<s.length();i++)
        {
            res += pow(26,j) * (s[i] - 'A' + 1);
            j--;
        }
        
        return res;
    }
};
