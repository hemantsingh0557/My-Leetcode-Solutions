








// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    24th   April   2024   -   Wednesday    .    









// class Solution {
// public:
//     int tribonacci(int n) 
//     {
        
//     }
// };










// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE )   TC = O(3^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Math and something like simulation    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
// // //  4th Method  ====> (Try to solve) Purely Maths    TC = O(log(n)) , SC = O(1) constant 
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion (TLE TLE TLE )
// // //  1st Method    ======>  Simple Recursion (TLE TLE TLE )
// // //  1st Method    ======>  Simple Recursion (TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int calculateNum(int n )
//     {
//         if( n == 0 ) return 0 ;
//         if( n <= 2 ) return 1 ;
//         int ans = calculateNum(n-1) + calculateNum(n-2) + calculateNum(n-3) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int tribonacci(int n) 
//     {
//         int ans = calculateNum(n) ;
//         return ans  ;
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization 
// // //  2nd Method    ======>  DP Memoization 
// // //  2nd Method    ======>  DP Memoization 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int dp[40]  ;
//     int calculateNum(int n )
//     {
//         if( n == 0 ) return 0 ;
//         if( n <= 2 ) return 1 ;
//         if( dp[n] != -1 ) return dp[n] ;
//         int ans = calculateNum(n-1) + calculateNum(n-2) + calculateNum(n-3) ;
//         return dp[n] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int tribonacci(int n) 
//     {
//         memset(dp , -1 , sizeof(dp) ) ;
//         int ans = calculateNum(n) ;
//         return ans  ;
//     }
// };












// //                           
// //                           
// // //  3rd Method    ======>  Math and something like simulation
// // //  3rd Method    ======>  Math and something like simulation
// // //  3rd Method    ======>  Math and something like simulation
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int tribonacci(int n) 
    {
        if( n == 0 ) return 0 ;
        if( n <= 2 ) return 1 ;
        int a = 0 , b = 1 , c = 1 ;
        int ans = 0 ;
        for(int i=3; i<=n; i++)
        {
            ans = a + b + c ;
            a = b ;
            b = c ;
            c = ans ;
        }
        return ans  ;
    }
};









// //                           
// //                           
// // //  3rd Method    ======>   (Try to solve) Purely Maths 
// // //  3rd Method    ======>   (Try to solve) Purely Maths 
// // //  3rd Method    ======>   (Try to solve) Purely Maths 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// // 





























