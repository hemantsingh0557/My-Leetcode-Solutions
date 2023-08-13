





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
// // //  1st Method  ====>  Simple Recursion   TC = O(2^n)(probably) , SC = O(n) 
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
// // //  1st Method    ======>    Simple Recursion 
// // //  1st Method    ======>    Simple Recursion 
// // //  1st Method    ======>    Simple Recursion 
// //                             
// // //   Time Complexity   = O(2^n)    (probably)
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public: 
//     int minNumbers(int i , int n)
//     {
//         if(n==0) return 0 ;
//         if( n - (i*i ) < 0 ) return 1e9 ;
//         // cout<<i<<" "<<n<<endl;
//         int ans = minNumbers(i + 1 , n )  ;
//         ans = min( ans , 1 + minNumbers(i , n - (i*i)) ) ;   
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numSquares(int n) 
//     {
//         int ans = minNumbers(1 , n);
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
// // 



// class Solution {
// public: 
//     int dp[105][10005] ;
//     int minNumbers(int i , int n)
//     {
//         if(n==0) return 0 ;
//         if( n - (i*i ) < 0 ) return 1e9 ;
//         if(dp[i][n] != -1) return dp[i][n] ; 
//         // cout<<i<<" "<<n<<endl;
//         int ans = minNumbers(i + 1 , n )  ;
//         ans = min( ans , 1 + minNumbers(i , n - (i*i)) ) ;   
//         return dp[i][n] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numSquares(int n) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         int ans = minNumbers(1 , n);
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
// // 



class Solution {
public: 
    int dp[10005] ;
    int minNumbers(int i , int n)
    {
        if(n==0) return 0 ;
        if( n - (i*i ) < 0 ) return 1e9 ;
        if(dp[n] != -1) return dp[n] ; 
        // cout<<i<<" "<<n<<endl;
        int ans = minNumbers(i + 1 , n )  ;
        ans = min( ans , 1 + minNumbers(i , n - (i*i)) ) ;   
        return dp[n] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numSquares(int n) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        int ans = minNumbers(1 , n);
        return ans ; 
    }
};




























