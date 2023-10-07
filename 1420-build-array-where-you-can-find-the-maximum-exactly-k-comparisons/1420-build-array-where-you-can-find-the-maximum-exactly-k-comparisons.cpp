













// class Solution {
// public:
//     int numOfArrays(int n, int m, int k) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// //  1st Method ( Two Ways ) ===>  Simple Recursion( TLE TLE TLE )  TC = O(n^n) , SC = O(n) 
// //                      
// //                      
// //  2nd Method  ==>  DP Memoization   TC = O( n * (m^2) * k ) , SC = O(n*m*k) 
// //                     
// //                     
// //  3rd Method  ==> Prefix Sum + DP Memoization (Try to solve)  TC = O(n*m*k) , SC = O(m*k)  
// //           // //  till now , not solved(did't not try to solve)        
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method (Two Ways) ======>   Simple Recursion( TLE TLE TLE ) 
// // //  1st Method (Two Ways) ======>   Simple Recursion( TLE TLE TLE ) 
// // //  1st Method (Two Ways) ======>   Simple Recursion( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(n^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       


// class Solution {
// public:
//     int ans = 0 ; 
//     void findarrays(int n , int m , int k , int mx , int cost  )
//     {
//         if( n == 0 ) 
//         {
//             if( cost == k ) ans++ ;
//             return  ;
//         }
//         for(int i=1; i<=m; i++)
//         {
//             if( i > mx  ) findarrays( n-1 , m , k , i , cost+1 ) ;
//             else  findarrays( n-1 , m , k , mx , cost ) ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numOfArrays(int n, int m, int k) 
//     {
//         findarrays( n , m , k , -1 , 0 ) ;
//         return ans ;    
//     }
// };





// // //   1st  Method   ====>    2nd way   =====>       
// // //   1st  Method   ====>    2nd way   =====>       
// // //   1st  Method   ====>    2nd way   =====>      


// class Solution {
// public:
//     int findarrays(int n , int m , int k , int mx , int cost  )
//     {
//         if( n == 0 ) 
//         {
//             if( cost == k ) return 1 ;
//             return 0 ;
//         }
//         int ans =0 ; 
//         for(int i=1; i<=m; i++)
//         {
//             if( i > mx  )  ans += findarrays( n-1 , m , k , i , cost+1 ) ;
//             else ans += findarrays( n-1 , m , k , mx , cost ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numOfArrays(int n, int m, int k) 
//     {
//         int ans = findarrays( n , m , k , -1 , 0 ) ;
//         return ans ;    
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>    DP Memoization 
// // //  2nd Method    ======>    DP Memoization 
// // //  2nd Method    ======>    DP Memoization 
// //                             
// // //   Time Complexity   =  O( n * (m^2) * k )  
// //                              
// // //   Space Complexity  =  O(n*m*k)
// //                               


class Solution {
public:
    int M = 1e9+7 ;  
    int dp[55][105][55] ;
    int findarrays(int n , int m , int k , int mx , int cost  )
    {
        if( n == 0 ) 
        {
            if( cost == k ) return 1 ;
            return 0 ;
        }
        if( dp[n][mx][cost] != -1 ) return dp[n][mx][cost] ; 
        int ans = 0 ; 
        for(int i=1; i<=m; i++)
        {
            if( i > mx  )  ans += findarrays( n-1 , m , k , i , cost+1 ) ;
            else ans += findarrays( n-1 , m , k , mx , cost ) ;
            ans %= M ;
        }
        return dp[n][mx][cost] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numOfArrays(int n, int m, int k) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        int ans = findarrays( n , m , k , 0 , 0 ) ;
        return ans ;    
    }
};


















// //   Try to solve 3rd method 
// //   Try to solve 3rd method 
// //  till now , not solved(did't not try to solve)    
// //  till now , not solved(did't not try to solve)    
//
//
//
// //                           
// //                           
// // //  3rd Method    ======>  Prefix Sum   +   DP Memoization 
// // //  3rd Method    ======>  Prefix Sum   +   DP Memoization 
// // //  3rd Method    ======>  Prefix Sum   +   DP Memoization 
// //                             
// // //   Time Complexity   = O(n*m*k)  
// //                              
// // //   Space Complexity  = O(m*k) 
// //                               





































































