













// class Solution {
// public:
//     int countVowelPermutation(int n) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion( TLE TLE TLE )    TC = O(n^2) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // 3rd Method ==>(Try to understand Looks easy but hard) Simple  TC = O(n), SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion( TLE TLE TLE )  
// // //  1st Method    ======>    Simple Recursion( TLE TLE TLE )  
// // //  1st Method    ======>    Simple Recursion( TLE TLE TLE )  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)  
// //                               


// class Solution {
// public:
//     int M = 1000000007 ; 
//     int countStrings( char c  , int n )
//     {
//         if( n == 0 ) return  1 ;  
//         int ans  = 0 ;  
//         if( c == 'a' )
//         {
//             ans = ( ans +  countStrings( 'e' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'e' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'i' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'i' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'e' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'o' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'u' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'o' )
//         {
//             ans = ( ans +  countStrings( 'i' , n-1 ) ) % M  ;  
//             ans = ( ans +  countStrings( 'u' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'u' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//         }
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countVowelPermutation(int n) 
//     {
//         string vowel = "aeiou" ;
//         int ans = -1 ; 
//         for(int i=0; i<5; i++)
//         {
//             char c = vowel[i] ; 
//             ans += countStrings( c , n-1 ) ; 
//             ans %= M ;
//         }
//         return ans+1  ; 
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
//     int M = 1000000007 ; 
//     int dp[150][20005] ;  
//     int countStrings( char c  , int n )
//     {
//         if( n == 0 ) return  1 ;  
//         if( dp[c][n] != -1 ) return dp[c][n] ;  
//         int ans  = 0 ;  
//         if( c == 'a' )
//         {
//             ans = ( ans +  countStrings( 'e' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'e' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'i' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'i' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'e' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'o' , n-1 ) ) % M  ; 
//             ans = ( ans +  countStrings( 'u' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'o' )
//         {
//             ans = ( ans +  countStrings( 'i' , n-1 ) ) % M  ;  
//             ans = ( ans +  countStrings( 'u' , n-1 ) ) % M  ; 
//         }
//         else if( c == 'u' )
//         {
//             ans = ( ans +  countStrings( 'a' , n-1 ) ) % M  ; 
//         }
//         return dp[c][n] = ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countVowelPermutation(int n) 
//     {
//         memset( dp , -1 , sizeof(dp) ) ;  
//         string vowel = "aeiou" ;
//         int ans = -1 ; 
//         for(int i=0; i<5; i++)
//         {
//             char c = vowel[i] ; 
//             ans += countStrings( c , n-1 ) ; 
//             ans %= M ;
//         }
//         return ans+1  ; 
//     }
// };













// //                           
// //                           
// // //  3rd Method    ======>  (Try to understand Looks easy but hard)  Simple  
// // //  3rd Method    ======>  (Try to understand Looks easy but hard)  Simple  
// // //  3rd Method    ======>  (Try to understand Looks easy but hard)  Simple  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int countVowelPermutation(int n) 
    {
        int M = 1000000007 ; 
        long a = 1 , e = 1 , i = 1 , o = 1 , u = 1 ;
        long a2 , e2 , i2 , o2 , u2 ;  
        for(int k=2; k<=n; k++)
        {
            a2 = ( e + i + u ) % M  ;   
            e2 = ( a + i ) % M  ;   
            i2 = ( e + o ) % M  ;   
            o2 = ( i ) % M  ;   
            u2 = ( i + o ) % M  ;   
            //
            a = a2 , e = e2 , i = i2 , o = o2 , u = u2 ;
        }
        int ans = (a + e + i + o + u) % M ;   
        return ans  ; 
    }
};












































