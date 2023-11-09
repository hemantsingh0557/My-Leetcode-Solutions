




























// class Solution {
// public:
//     int countHomogenous(string s) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Maths ans Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// //                           
// //                           
// // //  1st Method    ======>    Simple Maths ans Iteration 
// // //  1st Method    ======>    Simple Maths ans Iteration 
// // //  1st Method    ======>    Simple Maths ans Iteration 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int countHomogenous(string s) 
    {
        int M = 1e9 + 7  ;    
        int n = s.size() ; 
        int ans = 0 ;  
        for(int i=0; i<n; i++)
        {
            int j = i ; 
            while( s[j] == s[j+1] && j < n ) j++ ;
            int len = j - i + 1 ; 
            ans += ( (len) * 1LL * (len + 1) / 2 ) % M ;  
            ans %= M ; 
            i = j ;   
        }
        return ans ;   
    }
};











































