



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method(Two ways)  ====>  Simple Recursion   TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method(Two ways)   ====>  Dp Memoization   TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int longestPalindromeSubseq(string s)  {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method (Two ways)     ======>   Simple Recursion 
// // //  1st Method (Two ways)     ======>   Simple Recursion 
// // //  1st Method (Two ways)     ======>   Simple Recursion 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// // //  1st Method   ====>      1st way   =====>                                 
// // //  1st Method   ====>      1st way   =====>                                 
// // //  1st Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n ;
//     int length(int i , int j , string &s) 
//     {
//         if(i==j) return 1 ;
//         if(i>j) return 0;
//         if(s[i]==s[j]) return 2 + length(i+1 , j-1 , s) ;
//         int ans = INT_MIN ;
//         ans = max(ans , length(i+1 , j , s) ) ; 
//         ans = max(ans , length(i , j-1 , s) ) ; 
//         return ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int longestPalindromeSubseq(string s) 
//     {
//         n = s.size() ; 
//         int ans = length(0 , n-1 , s) ;
//         return ans ;
//     }
// };





// // //  1st Method   ====>     2nd  way   =====>                                 
// // //  1st Method   ====>     2nd  way   =====>                                 
// // //  1st Method   ====>     2nd  way   =====>                                 



// class Solution {
// public:
//     int n ;
//     int length(int i , int j , string &s) 
//     {
//         if(i==j) return 1 ;
//         if(i>j) return 0;
//         int ans = INT_MIN ;
//         if(s[i]==s[j]) ans =  2 + length(i+1 , j-1 , s) ;
//         else
//         {
//             ans = max(ans , length(i+1 , j , s) ) ; 
//             ans = max(ans , length(i , j-1 , s) ) ; 
//         }
//         return ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int longestPalindromeSubseq(string s) 
//     {
//         n = s.size() ; 
//         int ans = length(0 , n-1 , s) ;
//         return ans ;
//     }
// };

















// //                           
// //                           
// // //  2nd Method (Two ways)    ======>   Dp Memoization
// // //  2nd Method (Two ways)    ======>   Dp Memoization
// // //  2nd Method (Two ways)    ======>   Dp Memoization
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               



// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n ;
//     int dp[1005][1005] ; 
//     int length(int i , int j , string &s ) 
//     {
//         if(i==j) return 1 ;
//         if(i>j) return 0;
//         if(dp[i][j] != -1) return dp[i][j] ; 
//         if(s[i]==s[j]) return 2 + length(i+1 , j-1 , s ) ;
//         int ans = INT_MIN ;
//         ans = max(ans , length(i+1 , j , s ) ) ; 
//         ans = max(ans , length(i , j-1 , s ) ) ; 
//         return dp[i][j] = ans ;  
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int longestPalindromeSubseq(string s) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;            
//         n = s.size() ; 
//         int ans = length(0 , n-1 , s ) ;
//         return ans ;
//     }
// };







// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 



class Solution {
public:
    int n ;
    int dp[1005][1005] ;
    int length(int i , int j , string &s ) 
    {
        if(i>j) return 0;
        if(i==j) return 1 ;
        if(dp[i][j] != -1) return dp[i][j] ; 
        int ans = INT_MIN ;
        if(s[i]==s[j]) ans =  2 + length(i+1 , j-1 , s  ) ;
        else
        {
            ans = max(ans , length(i+1 , j , s ) ) ; 
            ans = max(ans , length(i , j-1 , s ) ) ; 
        }
        return dp[i][j] = ans ;
    }
    // //  Main Function of Question ==>     Main Function of Question ==>
    // //  Main Function of Question ==>     Main Function of Question ==>
    //  
    int longestPalindromeSubseq(string s) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n = s.size() ; 
        int ans = length(0 , n-1 , s ) ;
        return ans ;
    }
};


























































