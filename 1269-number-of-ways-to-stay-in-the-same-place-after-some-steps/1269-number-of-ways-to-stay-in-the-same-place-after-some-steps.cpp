














// class Solution {
// public:
//     int numWays(int steps, int arrLen) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion( TLE TLE TLE )   TC = O(3^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int n ;
//     int totalWays( int i , int steps, int arrLen )
//     {
//         if( steps == 0 && i == 0 ) return  1 ;
//         if( steps == 0 && i != 0 ) return  0 ;
//         if( i < 0 || i >= n ) return 0 ;
//         // cout<<i<<" "<<steps<<endl;
//         int ans =  totalWays( i , steps-1 , arrLen  ) ;  
//         ans +=  totalWays( i+1 , steps-1 , arrLen  ) ; 
//         ans +=  totalWays( i-1 , steps-1 , arrLen  ) ; 
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numWays(int steps, int arrLen) 
//     {
//         n = arrLen ; 
//         int ans = totalWays( 0 , steps , arrLen ) ;
//         return ans ; 
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)  
// //                               

class Solution {
public:
    int M = 1e9+7 ;
    int dp[505][505] ;
    int totalWays( int i , int steps, int arrLen )
    {
        if( steps == 0 && i == 0 ) return  1 ;
        if( steps == 0 && i != 0 ) return  0 ;
        if( i < 0 || i >= arrLen ) return 0 ;
        if( dp[i][steps] != -1 ) return dp[i][steps] ; 
        int ans =  totalWays( i , steps-1 , arrLen  ) ;  
        ans = ans % M ;    
        ans += totalWays( i+1 , steps-1 , arrLen )  ; 
        ans = ans % M ;    
        ans += totalWays( i-1 , steps-1 , arrLen )  ;    
        return dp[i][steps] = ans % M ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numWays(int steps, int arrLen) 
    {
        memset( dp , -1 , sizeof(dp) ) ; 
        int ans = totalWays( 0 , steps , arrLen ) ;
        return ans ; 
    }
};











































