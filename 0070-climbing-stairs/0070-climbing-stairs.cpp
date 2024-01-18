















// class Solution {
// public:
//     int climbStairs(int n) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )  TC = O(2^n) , SC = O(n) 
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
// // //  1st Method    ======>    Simple Recursion  ( TLE TLE TLE ) 
// // //  1st Method    ======>    Simple Recursion  ( TLE TLE TLE ) 
// // //  1st Method    ======>    Simple Recursion  ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int findways( int n )
//     {
//         if( n == 0 )   return 1 ;
//         int ans =  findways(n-1) ;
//         if( n - 2 >= 0 ) ans += findways(n-2) ;
//         return  ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int climbStairs(int n) 
//     {
//         int ans = findways(n) ;
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
    int dp[50] ; 
    int findways( int n )
    {
        if( n == 0 )   return 1 ;
        if( dp[n] != -1 ) return dp[n] ;  
        int ans =  findways(n-1) ;
        if( n - 2 >= 0 ) ans += findways(n-2) ;
        return dp[n] = ans ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int climbStairs(int n) 
    {
        memset(dp , -1 , sizeof(dp) ) ; 
        int ans = findways(n) ;
        return ans ; 
    }
};




































