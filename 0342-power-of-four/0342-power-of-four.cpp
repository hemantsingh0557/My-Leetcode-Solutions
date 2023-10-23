









// class Solution {
// public:
//     bool isPowerOfFour(int n) {
        
//     }
// };



















// class Solution {
// public:
//     bool isPowerOfFour(int n) 
//     {
//         for(int i=0; i < n ; i++) 
//         {
//             if( pow(4,i) == n ) return true ;
//             else if( pow(4,i) > n ) return false ;
//         }
//         return false ;
//     }
// };





class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if( n == 1  ) return true ;
        if( n == 0 || n % 4 != 0 ) return false ; 
        return isPowerOfFour( n / 4 ) ;
    }
};


































