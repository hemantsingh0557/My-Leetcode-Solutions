













// //   This question is same as  516. Longest Palindromic Subsequence
// //   This question is same as  516. Longest Palindromic Subsequence
// //   This question is same as  516. Longest Palindromic Subsequence

// //  link ==>   https://leetcode.com/problems/longest-palindromic-subsequence/




// //
// // // // // // //  Solve Using  Two  Method  ===>      
// // // // // // //  Solve Using  Two  Method  ===>                      
// //                     
// //
// // //  1st Method  ====>  Simple Recursion(TLE TLE TLE)   TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method  ====>  DP Memoization   TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int minInsertions(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// class Solution {
// public:
//     int length(int i , int j , string &s)
//     {
//         if(i>j) return 0 ;
//         if(i==j) return 1 ;
//         int ans = INT_MIN ;
//         if(s[i]==s[j]) ans = 2 + length(i+1 , j-1 ,s) ;
//         else 
//         {
//             ans = max(ans , length(i , j-1 , s) ) ;  
//             ans = max(ans , length(i+1 , j , s) ) ;  
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minInsertions(string s) 
//     {
//         int n = s.size() ;
//         int longestSubsequeunceLength = length(0 , n-1, s) ;
//         int ans = n - longestSubsequeunceLength ;
//         return ans ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>    DP Memoization  
// // //  2nd Method    ======>    DP Memoization  
// // //  2nd Method    ======>    DP Memoization  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               


class Solution {
public:
    int dp[505][5005] ;
    int length(int i , int j , string &s)
    {
        if(i>j) return 0 ;
        if(i==j) return 1 ;
        if(dp[i][j] !=-1) return dp[i][j] ;
        int ans = INT_MIN ;
        if(s[i]==s[j]) ans = 2 + length(i+1 , j-1 ,s) ;
        else 
        {
            ans = max(ans , length(i , j-1 , s) ) ;  
            ans = max(ans , length(i+1 , j , s) ) ;  
        }
        return  dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minInsertions(string s) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        int n = s.size() ;
        int longestSubsequeunceLength = length(0 , n-1, s) ;
        int ans = n - longestSubsequeunceLength ;
        return ans ;
    }
};






























