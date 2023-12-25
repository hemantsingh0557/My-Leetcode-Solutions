















// class Solution {
// public:
//     int numDecodings(string s) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )   TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public: 
//     int n ;  
//     int noOfWays(int i , string s)
//     {
//         if( i >= n ) return  1 ; 
//         int ans = 0  ; 
//         if( s[i] != '0' )  ans +=  noOfWays(i+1 , s)  ;
//         if( i < n-1 &&  ( (s[i] =='1') || ( s[i] == '2' && s[i+1] <= '6' )) )  ans +=  noOfWays(i+2 , s)  ;
//         // if( check == 0 ) return  0 ;  
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numDecodings(string s) 
//     {
//         n = s.size() ;  
//         int ans = noOfWays(0, s);
//         return ans ; 
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public: 
    int n ; 
    int dp[105] ;  
    int noOfWays(int i , string & s)
    {
        if( i >= n ) return  1 ; 
        if( dp[i] != -1 ) return dp[i] ; 
        int ans = 0  ; 
        if( s[i] != '0' )  ans +=  noOfWays(i+1 , s)  ;
        if( i < n-1 &&  ( (s[i] =='1') || ( s[i] == '2' && s[i+1] <= '6' )) )  ans +=  noOfWays(i+2 , s)  ;
        return dp[i] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numDecodings(string s) 
    {
        memset(dp , -1 , sizeof(dp) ) ;  
        n = s.size() ;  
        int ans = noOfWays(0, s);
        return ans ; 
    }
};























