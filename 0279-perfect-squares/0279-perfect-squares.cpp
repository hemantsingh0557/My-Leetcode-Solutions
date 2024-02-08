















// class Solution {
// public:
//     int numSquares(int n) 
//     {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion ( TLE TLE TLE )  TC = O(2^n)(probably) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method (Two ways)  ====> DP Memoization    TC = O(n*sqrt(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion ( TLE TLE TLE )
// // //  1st Method    ======>    Simple Recursion ( TLE TLE TLE )
// // //  1st Method    ======>    Simple Recursion ( TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(2^n)    (probably)
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int CountPerfectSquare( int num , int n   )
//     {
//         if( n == 0 ) return  0 ; 
//         if( n - num * num < 0 ) return 1e9 ;
//         int ans = CountPerfectSquare( num + 1 , n ) ;
//         ans = min( ans , 1 + CountPerfectSquare( num , n - num * num )  )  ;
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numSquares(int n) 
//     {
//         int ans = CountPerfectSquare( 1 , n ) ;
//         return ans ; 
//     }
// };















// //                           
// //                           
// // //  2nd Method  ( Two Ways )  ======>    DP Memoization
// // //  2nd Method  ( Two Ways )  ======>    DP Memoization
// // //  2nd Method  ( Two Ways )  ======>    DP Memoization
// //
// //




// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       
// //                             
// // //   Time Complexity   = O(n*sqrt(n))   
// //                              
// // //   Space Complexity  = O(n*105)   

// class Solution {
// public:
//     int dp[105][10005] ;
//     int CountPerfectSquare( int num , int n   )
//     {
//         if( n == 0 ) return  0 ; 
//         if( n - num * num < 0 ) return 1e9 ;
//         if( dp[num][n] != -1  ) return dp[num][n]  ;
//         int ans = CountPerfectSquare( num + 1 , n ) ;
//         ans = min( ans , 1 + CountPerfectSquare( num , n - num * num )  )  ;
//         return dp[num][n] = ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numSquares(int n) 
//     {
//         memset(dp , -1 , sizeof(dp) ) ;
//         int ans = CountPerfectSquare( 1 , n ) ;
//         return ans ; 
//     }
// };






// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       
// //                             
// // //   Time Complexity   = O(n*sqrt(n))   
// //                              
// // //   Space Complexity  = O(n)   

class Solution {
public:
    int dp[10005] ;
    int CountPerfectSquare( int num , int n   )
    {
        if( n == 0 ) return  0 ; 
        if( n - num * num < 0 ) return 1e9 ;
        if( dp[n] != -1  ) return dp[n]  ;
        int ans = CountPerfectSquare( num + 1 , n ) ;
        ans = min( ans , 1 + CountPerfectSquare( num , n - num * num )  )  ;
        return dp[n] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numSquares(int n) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        int ans = CountPerfectSquare( 1 , n ) ;
        return ans ; 
    }
};


































































