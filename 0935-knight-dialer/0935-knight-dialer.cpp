

















// class Solution {
// public:
//     int knightDialer(int n) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )   TC = O(2^n) or O(3^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Dp Memoization    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Simple Maths    TC = O(n) , SC = O(1) constant 
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
// // //   Time Complexity   = O(2^n) or O(3^n)
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int M = 1e9+7 ;
//     vector<vector<int>>v = { {4,6},{6,8},{7,9},{4,8},{0,3,9},{},{0,1,7},{2,6},{1,3},{2,4} } ;
//     //
//     int distinctNumbers(int num , int len )
//     {
//         if( len == 0 ) return 1 ;  
//         int ans = 0 ; 
//         for(auto ele : v[num] )
//         {
//             ans +=  distinctNumbers( ele , len-1 ) ;  
//             ans %= M  ; 
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int knightDialer(int n) 
//     {
//         int ans = 0 ; 
//         for(int i=0; i<10; i++)
//         {
//             ans += distinctNumbers(i , n-1 ) ;  
//             ans %= M  ; 
//         } 
//         return  ans ;  
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   Dp Memoization  
// // //  2nd Method    ======>   Dp Memoization  
// // //  2nd Method    ======>   Dp Memoization  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





// class Solution {
// public:
//     int M = 1e9+7 ;
//     vector<vector<int>>v = { {4,6},{6,8},{7,9},{4,8},{0,3,9},{},{0,1,7},{2,6},{1,3},{2,4} } ;
//     int dp[10][5005] ; 
//     //
//     int distinctNumbers(int num , int len )
//     {
//         if( len == 0 ) return 1 ;  
//         if( dp[num][len] != -1  ) return dp[num][len] ;  
//         int ans = 0 ; 
//         for(auto ele : v[num] )
//         {
//             ans +=  distinctNumbers( ele , len-1 ) ;  
//             ans %= M  ; 
//         }
//         return dp[num][len] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int knightDialer(int n) 
//     {
//         memset(dp , -1 , sizeof(dp) ) ;
//         int ans = 0 ; 
//         for(int i=0; i<10; i++)
//         {
//             ans += distinctNumbers(i , n-1 ) ;  
//             ans %= M ; 
//         } 
//         return  ans ;  
//     }
// };
















// //                           
// //                           
// // //  3rd Method    ======>  Simple Maths
// // //  3rd Method    ======>  Simple Maths
// // //  3rd Method    ======>  Simple Maths
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int M = 1e9+7 ;
    int knightDialer(int n) 
    {
        if( n == 1 ) return 10 ; 
        int A = 4 ;  //   for  1 , 3 , 7, 9  all same
        int B = 2 ;  //   for  2 ,  8
        int C = 2 ;  //   for  4 ,  6
        int D = 1 ;  //   for  0
        // int E = 0 ;  //   for  5  // no benifit so leave it
        //
        //
        for(int i=0; i<n-1; i++)
        {
            int tempA = A ; 
            int tempB = B ; 
            int tempC = C ; 
            int tempD = D ; 
            A = ( (2*tempB)%M + (2*tempC)%M ) % M ;  
            B = ( tempA ) % M ;  
            C = ( (tempA)%M + (2*tempD)%M ) % M ;  
            D = ( tempC ) % M ;  
        } 
        int ans =  (A+B)%M ; 
        ans =  ( ans + C ) % M ;  
        ans =  ( ans + D ) % M ;  
        return  ans ;  
    }
};






























































