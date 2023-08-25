


// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  
// // // // //  try to solve follow-up  










// class Solution {
// public:
//     bool isInterleave(string s1, string s2, string s3) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using only Recursion    TC = O(2^(n+m))  , SC = O(1)  (Probably)
// //                      
// //                      
// // //  2nd Method  ====>  DP Memoization    TC = O(n*m)  , SC = O(n*m) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using only Recursion 
// // //  1st Method    ======>   Using only Recursion 
// // //  1st Method    ======>   Using only Recursion 
// //                             
// // //   Time Complexity   = O(2^(n+m)) (Probably)
// //                              
// // //   Space Complexity  = O(1)      (Probably)
// //                               



// class Solution {
// public:
//     int n , m , l ;
//     bool check(int i , int j , int k , string &s1, string &s2, string &s3)
//     {
//         if(i==n && j== m ) return true ;
//         if( i<n && s1[i] == s3[k] && check( i+1 , j , k+1 , s1 , s2 , s3 ) )   return true ;
//         if( j<m && s2[j] == s3[k] && check( i , j+1 , k+1 , s1 , s2 , s3 ) )   return true ;
//         return false ;
//     }
//     bool isInterleave(string s1, string s2, string s3) 
//     {
//         n = s1.size()  , m = s2.size() , l = s3.size() ; 
//         if( n + m != l )  return false ;
//         bool ans = check( 0 , 0 , 0 , s1 , s2 , s3 ); 
//         return ans  ;
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>     DP Memoization  
// // //  2nd Method    ======>     DP Memoization  
// // //  2nd Method    ======>     DP Memoization  
// //                             
// // //   Time Complexity   = O(n*m)  
// //                              
// // //   Space Complexity  = O(n*m)   
// //                               




class Solution {
public:
    int n , m , l ;
    int dp[105][105] ;  
    bool check(int i , int j , int k , string &s1, string &s2, string &s3)
    {
        if(i==n && j== m ) return true ;
        if(dp[i][j] != -1 ) return dp[i][j] ;
        if( i<n && s1[i] == s3[k] && check( i+1 , j , k+1 , s1 , s2 , s3 ) )   return dp[i][j] = true ;
        if( j<m && s2[j] == s3[k] && check( i , j+1 , k+1 , s1 , s2 , s3 ) )   return dp[i][j] = true ;
        return dp[i][j] = false ;
    }
    bool isInterleave(string s1, string s2, string s3) 
    {
        memset(dp , -1 , sizeof(dp) ) ;   
        n = s1.size()  , m = s2.size() , l = s3.size() ; 
        if( n + m != l )  return false ;
        bool ans = check( 0 , 0 , 0 , s1 , s2 , s3 ); 
        return ans  ;
    }
};












































