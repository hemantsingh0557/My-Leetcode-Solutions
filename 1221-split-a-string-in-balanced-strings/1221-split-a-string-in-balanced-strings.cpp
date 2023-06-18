








// class Solution {
// public:
//     int balancedStringSplit(string s) {
        
//     }
// };













class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int n = s.size() ;
        int ans =0 , ct = 0 ; 
        for(int i=0; i<n; i++)
        {
            if(s[i]== 'R') ct++;
            else ct-- ;
            if(ct==0) ans++ ;
        }
        return ans  ;
    }
};






















