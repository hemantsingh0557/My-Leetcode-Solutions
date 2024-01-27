











// class Solution {
// public:
//     int kInversePairs(int n, int k) {
        
//     }
// };







// // // // // // // //   // // // //  take some help from solution tab  ======>     
// // // // // // // //   // // // //  take some help from solution tab  ======>    
// // // // // // // //   // // // //  take some help from solution tab  ======>     
// // // // // // // //   // // // //  take some help from solution tab  ======>     
// // // // // // // //   // // // //  take some help from solution tab  ======>     





// // // // // //    Explanation        ===============>>>>
// // // // // //    Explanation        ===============>>>>
// // // // // //    Explanation        ===============>>>>
// // // // // //    Explanation        ===============>>>>
// // // // // //    Explanation        ===============>>>>



// // // /// // //    if    n = 3        ==========>
// // // /// // //    if    n = 3        ==========>
// // // /// // //    if    n = 3        ==========>
//
// 1 2 3              ==>    When  K = 0
// 2 1 3  ,  1 3 2    ==>    When  K = 1
// 2 3 1  ,  3 1 2    ==>    When  K = 2
// 3 2 1              ==>    When  K = 3





// // // /// // //    if    n = 4        ===========>
// // // /// // //    if    n = 4        ===========>
// // // /// // //    if    n = 4        ===========>
//
// 1 2 3 4                                                                      When  K =  0
// 2 1 3 4  ,  1 3 2 4  ,  1 2 4 3                                              When  K =  1
// 2 3 1 4  ,  3 1 2 4  ,  2 1 4 3   ,  1 3 4 2 ,   1 4 2 3                     When  K =  2
// 3 2 1 4  , 2 3 4 1  ,  3 1 4 2  ,  2 4 1 3   ,  1 4 3 2 ,   4 1 2 3          When  K =  3
//                                                                              When  K =  4
//                                                                              When  K =  5
//                                                                              When  K =  6
//
//
//
//
//
//
//
//
//
//
// f(4,3) = f(3,3) + f(3,2) + f(3,1) + f(3,0) 
// f(4,3) = 1 + 2 + 2 + 1
// f(4,3) = 6
//     
//  if we found the value of f(4,3) from the above explain theory then also it is 6
//  so we can write
//  f(4,3) = f(3,3) + f(3,2) + ...... till 0  
//  f(4,3) = f(3,3) + f(3,2) + f(3,1) + f(3,0) 
//  f(4,3) = f(4-1 , 3) + f(4-1 , 3-1) + f(4-1 , 3-2) + f(4-1 , 3-3) 
//  f(4,3) = f(4-1 , 3) + f(4-1 , 3-1) + .... + f(4-1 , 3-(4-1) ) 
//  f(4,3) = f(4-1 , 3) + f(4-1 , 3-1) + .... + f(4-1 , 3-4+1 ) 
//
//
//
//  now in general form    ====>
//  now in general form    ====>
//
//
// f(n,k) = f(n-1,k) + f(n-1 , k-1) + f( n-1 , k-2) + f(n-1 , k-3) + ..... till 0 
// f(n,k) = f(n-1,k) + f(n-1 , k-1) + f( n-1 , k-2) + f(n-1 , k-3) + ... + f(n-1 , 1) + f(n-1 , 0) 
// f(n,k) = f(n-1,k) + f(n-1 , k-1) + f( n-1 , k-2) + f(n-1 , k-3) + ...........+ f(n-1 , k-(n-1) ) 
// f(n,k) = f(n-1,k) + f(n-1 , k-1) + f( n-1 , k-2) + f(n-1 , k-3) + ...........+ f(n-1 , k-n+1 ) 
//
//
//


















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways ) ====> Simple Recursion ( TLE TLE TLE )    TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method ( Two Ways ) ====> DP Memoization    TC = O(n*k) , SC = O(n*k) 
// //                     
// //                     
// // //  3rd Method  ====> (Try to solve) DP Iterative    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////// 





// //                           
// //                           
// // //  1st Method  ( Two Ways )  ======>   Simple Recursion ( TLE TLE TLE )   
// // //  1st Method  ( Two Ways )  ======>   Simple Recursion ( TLE TLE TLE )   
// // //  1st Method  ( Two Ways )  ======>   Simple Recursion ( TLE TLE TLE )   
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// // //   1st Method   ====>     1st way   =====>       
// // //   1st Method   ====>     1st way   =====>       
// // //   1st Method   ====>     1st way   =====>       

// class Solution {
// public: 
//     int M = 1e9 + 7 ;
//     int noOfArrays( int n , int k )
//     {
//         if( n == 0 ) return 0 ; 
//         if( k == 0 ) return 1 ; 
//         long ans = 0  ;
//         for(int i=0; i<=min(k , n-1) ; i++)
//         {
//             ans += noOfArrays( n-1 , k-i ) ;
//             ans %= M ; 
//         }
//         return  ans ;         
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int kInversePairs(int n, int k) 
//     {
//         int ans = noOfArrays( n , k ) ;
//         return  ans ;
//     }
// };



// // //   1st Method   ====>     2nd way   =====>       
// // //   1st Method   ====>     2nd way   =====>       
// // //   1st Method   ====>     2nd way   =====>       

// class Solution {
// public: 
//     int M = 1e9 + 7 ;
//     int noOfArrays( int n , int k )
//     {
//         if( k == 0 ) return 1 ; 
//         if( k<0 || n <= 0 ) return 0 ; 
//         long ans = 0  ;
//         for(int i=0; i<=n-1 ; i++)
//         {
//             ans += noOfArrays( n-1 , k-i ) ;
//             ans %= M ; 
//         }
//         return  ans ;         
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int kInversePairs(int n, int k) 
//     {
//         int ans = noOfArrays( n , k ) ;
//         return  ans ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization  
// // //  2nd Method    ======>  DP Memoization  
// // //  2nd Method    ======>  DP Memoization  
// //                             
// // //   Time Complexity   = O(n*k)    
// //                              
// // //   Space Complexity  = O(n*k)  
// //                               




// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       

// class Solution {
// public: 
//     int M = 1e9 + 7 ;
//     int dp[1005][1005] ; 
//     int noOfArrays( int n , int k )
//     {
//         if( n == 0 ) return 0 ; 
//         if( k == 0 ) return 1 ; 
//         if( dp[n][k] != -1 ) return dp[n][k] ; 
//         long ans = 0  ;
//         for(int i=0; i<=min(k , n-1) ; i++)
//         {
//             ans += noOfArrays( n-1 , k-i ) ;
//             ans %= M ; 
//         }
//         return dp[n][k] = ans ;         
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int kInversePairs(int n, int k) 
//     {
//         memset(dp , -1 , sizeof(dp) )  ;
//         int ans = noOfArrays( n , k ) ;
//         return  ans ;
//     }
// };





// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       

class Solution {
public: 
    int M = 1e9 + 7 ;
    int dp[1005][1005] ;
    int noOfArrays( int n , int k )
    {
        if( k == 0 ) return 1 ; 
        if( k<0 || n <= 0 ) return 0 ; 
        if( dp[n][k] != -1 ) return dp[n][k] ; 
        long ans = 0  ;
        for(int i=0; i<=n-1 ; i++)
        {
            ans += noOfArrays( n-1 , k-i ) ;
            ans %= M ; 
        }
        return  dp[n][k] = ans ;         
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int kInversePairs(int n, int k) 
    {
        memset(dp , -1 , sizeof(dp) )  ;
        int ans = noOfArrays( n , k ) ;
        return  ans ;
    }
};













// //                           
// //                           
// // //  3rd Method    ======>    (Try to solve) DP Iterative 
// // //  3rd Method    ======>    (Try to solve) DP Iterative 
// // //  3rd Method    ======>    (Try to solve) DP Iterative 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



















































