













// class Solution {
// public:
//     int minMaxDifference(int num) {
        
//     }
// };













class Solution {
public:
    int minMaxDifference(int num) 
    {
        string s = to_string(num) ;
        int n = s.size() ;
        int maxVal = 0 , minVal = 0 ;
        int d1 = -1 , d2 = -1 ;
        for(int i=0; i<n; i++)
        {
            if(d1==-1 && s[i]-'0' != 9) d1 = s[i] ;
            if(d2==-1 && s[i]-'0' != 0) d2 = s[i] ;
            if(s[i]==d1) maxVal = maxVal*10 + 9  ;
            else maxVal = maxVal*10 + s[i] - '0' ;
            if(s[i]==d2) minVal = minVal*10 + 0  ;
            else minVal = minVal*10 + s[i] - '0' ;
        }
        return  maxVal - minVal  ;     
    }
};























