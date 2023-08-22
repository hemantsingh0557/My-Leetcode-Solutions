






// class Solution {
// public:
//     string convertToTitle(int columnNumber) {
        
//     }
// };






















class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string ans = "" ;
        while(columnNumber>0 )
        {   
            columnNumber-- ;
            char rem = (columnNumber % 26) + 'A' ;
            ans.push_back(rem) ;  
            columnNumber /= 26 ;
        }
        reverse(ans.begin() , ans.end() ) ;
        return ans ;
    }
};














































