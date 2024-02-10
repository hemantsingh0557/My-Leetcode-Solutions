










// class Solution {
// public:
//     int countSubstrings(string s) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // 1st Method ==> Brute Force(accepted) (but should be TLE)   TC = O(n^3) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Simple Optimized (expand from middle)  TC = O(n^2) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Brute Force(accepted) (but should be TLE)    
// // //  1st Method    ======>  Brute Force(accepted) (but should be TLE)    
// // //  1st Method    ======>  Brute Force(accepted) (but should be TLE)    
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int n ; 
//     bool checkSubstring( int i , int j , string s)
//     {
//         while( i<j )
//         {
//             if( s[i] != s[j] ) return false ; 
//             i++ , j-- ; 
//         }
//         return true ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countSubstrings(string s) 
//     {
//         n = s.size() ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i; j<n; j++) 
//             {
//                 if( checkSubstring( i , j , s ) )  ans++ ; 
//             }
//         }
//         return ans  ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  Simple Optimized (expand from middle)
// // //  2nd Method    ======>  Simple Optimized (expand from middle)
// // //  2nd Method    ======>  Simple Optimized (expand from middle)
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int n ; 
    int noOfSubstring( int j , int k , string s)
    {
        int ct = 0 ; 
        while( j >=0 && k < n && s[j] == s[k] ) j-- , k++ , ct++ ;
        return ct ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int countSubstrings(string s) 
    {
        n = s.size() ; 
        int ans = 0 ; 
        for(int i=0; i<n; i++)
        {
            ans += noOfSubstring( i , i , s) ; // for odd length
            ans += noOfSubstring( i , i+1 , s) ; // for even length
        }
        return ans  ;
    }
};



























