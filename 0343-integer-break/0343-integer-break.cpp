








// class Solution {
// public:
//     int integerBreak(int n) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Recursion( TLE TLE TLE )    TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n^2) , SC = O(n)
// //                     
// //                     
// // //  3rd Method  ====> Using Maths    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Recursion( TLE TLE TLE )  
// // //  1st Method    ======>    Using Recursion( TLE TLE TLE )  
// // //  1st Method    ======>    Using Recursion( TLE TLE TLE )  
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int solve( int n)
//     {
//         if( n==0  ) return 1 ;
//         if( n < 0 ) return 0 ; 
//         int ans = 1 ; 
//         for(int i=1; i<=n; i++)
//         {
//             if( n - i >= 0 ) ans = max( ans , i * solve(n-i) ) ;
//             else break ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int integerBreak(int n) 
//     {
//         if(n==2) return 1 ;
//         if(n==3) return 2 ;
//         int ans =  solve(n) ;
//         return ans ;  
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization  
// // //  2nd Method    ======>  DP Memoization  
// // //  2nd Method    ======>  DP Memoization  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int dp[60] ;
//     int solve( int n)
//     {
//         if( n==0  ) return 1 ;
//         if( n < 0 ) return 0 ; 
//         if( dp[n] != -1 ) return dp[n] ;
//         int ans = 1 ; 
//         for(int i=1; i<=n; i++)
//         {
//             if( n - i >= 0 ) ans = max( ans , i * solve(n-i) ) ;
//             else break ;
//         }
//         return dp[n] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int integerBreak(int n) 
//     {
//         // if(n==2) return 1 ;
//         // if(n==3) return 2 ;
//         if( n <= 3 ) return n-1 ;  
//         memset(dp , -1 , sizeof(dp)) ;
//         int ans =  solve(n) ;
//         return ans ;  
//     }
// };









// //                           
// //                           
// // //  3rd Method ( Two Ways )  ======>    Using   Maths
// // //  3rd Method ( Two Ways )  ======>    Using   Maths
// // //  3rd Method ( Two Ways )  ======>    Using   Maths
// //                             
// //                             
// //                             
// // // //  see proof Online ( The inequality of arithmetic and geometric )
// //                             
// //                             
// //                             
                              





// // // //   3rd Method   ====>      1st way   =====> Break Into 3     
// // // //   3rd Method   ====>      1st way   =====> Break Into 3             
// // // //   3rd Method   ====>      1st way   =====> Break Into 3   
// // //   
// // // //   Time Complexity   = O(n)   
// // //                              
// // // //   Space Complexity  = O(1) constant  
// // // 


// class Solution {
// public:
//     int integerBreak(int n) 
//     {
//         if( n <= 3 ) return n-1 ;
//         int ans = 1 ; 
//         while( n > 4 ) ans *= 3 , n -= 3 ; 
//         // // we break the n into 3 untill we get 4 because when we got 4 it is better to
//         // // break the 4 into 2+2 not into 3+1 because 2*2 > 3*1
//         // // now either we do ans * 2 * 2 or we can directly do ans * 4
//         // 
//         // 
//         // now if we get 5 then it will subtract one time and n will become 2 
//         // now loop break and it return ans *2 because here n is 2
//         //
//         // 
//         return ans * n ;  
//     }
// };







// // //   3rd Method   ====>  2nd  way   =====> Break Into 3 ( Modulo % )    
// // //   3rd Method   ====>  2nd  way   =====> Break Into 3 ( Modulo % )             
// // //   3rd Method   ====>  2nd  way   =====> Break Into 3 ( Modulo % )  
// //   
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// // 


class Solution {
public:
    int integerBreak(int n) 
    {
        if( n <= 3 ) return n-1 ;
        int ans = 1 ; 
        //
        //
        if( n % 3 == 0 ) return pow(3 , n/3 ) ;
        //
        // same as the logicin 1st way of this method 
        if( n % 3 == 1 ) return pow(3 , n/3 -1 ) * 4 ;
        //
        //
        // // when 2 remain as remainder or 5  , 8  and these type no come ;
        // if( n % 3 == 2 ) return pow(3 , n/3  ) * 2 ; 
        return pow(3 , n/3  ) * 2 ;
    }
};









