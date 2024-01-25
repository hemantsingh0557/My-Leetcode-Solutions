








// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) 
//     {
//     }
// };














// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method ( Two Ways)  ====> Simple Recursion(TLE TLE TLE)    TC = O() , SC = O() 
// //                      
// //                      
// // 2nd Method ( Two Ways)  ====>  DP Memoization   TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method ( Two Ways)   ======>    Simple Recursion(TLE TLE TLE)  
// // //  1st Method ( Two Ways)   ======>    Simple Recursion(TLE TLE TLE)  
// // //  1st Method ( Two Ways)   ======>    Simple Recursion(TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// // //   1st Method   ====>      1st way   =====>                                 
// // //   1st Method   ====>      1st way   =====>                                 
// // //   1st Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n , m ;
//     int CommonLength(int i , int j , string &text1  , string &text2 )
//     {
//         if(i>=n || j>=m) return 0 ;
//         int ans = CommonLength(i+1 , j , text1 , text2 ) ;
//         ans = max(ans , CommonLength(i, j+1 , text1 , text2 ) ) ; 
//         ans = max(ans , (text1[i]==text2[j]) + CommonLength(i+1, j+1 , text1 , text2 ) ) ; 
//         return dp ans ;
//     }
//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         n =  text1.size() ;  
//         m =  text2.size() ; 
//         int ans = CommonLength(0 , 0 , text1 , text2 ) ;
//         return ans ;  
//     }
// };  




// // //   1st Method   ====>      2nd way   =====>                                 
// // //   1st Method   ====>      2nd way   =====>       
// // //   1st Method   ====>      2nd way   =====>                                 


// class Solution {
// public:
//     int CommonLength(int i , int j , string &text1  , string &text2 )
//     {
//         if(i<0 || j<0) return 0 ;
//         int ans = CommonLength(i-1 , j , text1 , text2 ) ;
//         ans = max(ans , CommonLength(i, j-1 , text1 , text2 ) ) ; 
//         ans = max(ans , (text1[i]==text2[j]) + CommonLength(i-1, j-1 , text1 , text2 ) ) ; 
//         return ans ;
//     }
//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         int n =  text1.size() ;  
//         int m =  text2.size() ; 
//         int ans = CommonLength(n-1, m-1 , text1 , text2 ) ;
//         return ans ;  
//     }
// };  












// //                           
// //                           
// // //  2nd Method  (Two Ways)  ======>    DP   Memoization
// // //  2nd Method  (Two Ways)  ======>    DP   Memoization
// // //  2nd Method  (Two Ways)  ======>    DP   Memoization
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               



// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


class Solution {
public:
    int n , m ;
    int dp[1005][1005] ;
    int CommonLength(int i , int j , string &text1  , string &text2 )
    {
        if(i>=n || j>=m) return 0 ;
        if(dp[i][j]!=-1) return dp[i][j] ;
        int ans = CommonLength(i+1 , j , text1 , text2 ) ;
        ans = max(ans , CommonLength(i, j+1 , text1 , text2 ) ) ; 
        ans = max(ans , (text1[i]==text2[j]) + CommonLength(i+1, j+1 , text1 , text2 ) ) ; 
        return dp[i][j] = ans ;
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n =  text1.size() ;  
        m =  text2.size() ; 
        int ans = CommonLength(0 , 0 , text1 , text2 ) ;
        return ans ;  
    }
};  





// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 


// class Solution {
// public:
//     int dp[1005][1005] ;
//     int CommonLength(int i , int j , string &text1  , string &text2 )
//     {
//         if(i<0 || j<0) return 0 ;
//         if(dp[i][j] != -1) return dp[i][j] ;
//         int ans = CommonLength(i-1 , j , text1 , text2 ) ;
//         ans = max(ans , CommonLength(i, j-1 , text1 , text2 ) ) ; 
//         ans = max(ans , (text1[i]==text2[j]) + CommonLength(i-1, j-1 , text1 , text2 ) ) ; 
//         return dp[i][j] = ans ;
//     }
//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         int n =  text1.size() ;  
//         int m =  text2.size() ; 
//         int ans = CommonLength(n-1, m-1 , text1 , text2 ) ;
//         return ans ;  
//     }
// };  
















































