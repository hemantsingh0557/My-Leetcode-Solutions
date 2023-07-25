





// class Solution {
// public:
//     int minDistance(string word1, string word2) {
//     }
// };






















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE)   TC = O(3^n) , SC = O(1)  constant 
// //                      
// //                      
// // //  2nd Method  ====>  DP Memoization   TC = O(n*m)  , SC = O(n*m) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int n , m ;
//     int operation( int i , int j , string &word1, string &word2 )
//     {
//         if(i==n ) return m -j  ;
//         if(j==m ) return n -i  ;
//         int ans = INT_MAX ;
//         if(word1[i] == word2[j]) ans = operation( i+1 , j+1 , word1 , word2 ) ;
//         else
//         {
//             // insert
//             ans = min( ans , 1 + operation( i , j+1 , word1 , word2 ) ) ;  
//             // delete
//             ans = min( ans , 1 + operation( i+1 , j , word1 , word2 ) ) ;  
//             // replae
//             ans = min( ans , 1 + operation( i+1 , j+1 , word1 , word2 ) ) ;  
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minDistance(string word1, string word2) 
//     {
//         n = word1.size() ,  m = word2.size() ; 
//         int ans = operation( 0 , 0 , word1 , word2 ) ;
//         return ans ;
//     }
// };








                          
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n*m)  
// //                              
// // //   Space Complexity  = O(n*m)   
// //                               



class Solution {
public:
    int n , m ;
    int dp[600][600] ;
    int operation( int i , int j , string &word1, string &word2 )
    {
        if(i==n ) return m -j  ;
        if(j==m ) return n -i  ;
        if( dp[i][j] != -1 )  return dp[i][j] ; 
        int ans = INT_MAX ;
        if(word1[i] == word2[j]) ans = operation( i+1 , j+1 , word1 , word2 ) ;
        else
        {
            // insert
            ans = min( ans , 1 + operation( i , j+1 , word1 , word2 ) ) ;  
            // delete
            ans = min( ans , 1 + operation( i+1 , j , word1 , word2 ) ) ;  
            // replae
            ans = min( ans , 1 + operation( i+1 , j+1 , word1 , word2 ) ) ;  
        }
        return dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minDistance(string word1, string word2) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n = word1.size() ,  m = word2.size() ; 
        int ans = operation( 0 , 0 , word1 , word2 ) ;
        return ans ;
    }
};





























































