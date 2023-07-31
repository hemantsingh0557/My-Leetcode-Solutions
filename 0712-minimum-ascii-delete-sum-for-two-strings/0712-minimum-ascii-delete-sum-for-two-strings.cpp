









// class Solution {
// public:
//     int minimumDeleteSum(string s1, string s2) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                // //  k is average length of both string     
// // //  1st Method  ====> Simple Recursion  ( TLE TLE TLE )   TC = O(3^k) , SC = O(k) 
// //                      
// //                      
// //                 // // n, m are the length of string s1 and s2
// // //  2nd Method  ====> DP Memoization   TC = O(n*m) , SC = O(n*m) 
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
// // //   Time Complexity   = O(3^k)    // //  k is average length of both string     
// //                              
// // //   Space Complexity  = O(k)   
// //                               



// class Solution {
// public:
//     int n  , m ; 
//     int minimumSum(int i , int j , string & s1, string & s2 )
//     {
//         if(i>=n )
//         {
//             int sum = 0 ;
//             for(int k =j ; k<m; k++) sum += s2[k]  ;
//             return sum ;
//         }
//         if(j>=m )
//         {
//             int sum = 0 ;
//             for(int k =i ; k<n; k++) sum += s1[k] ;
//             return sum ;
//         }
//         int ans = s1[i] + minimumSum(i+1 , j , s1 , s2 ) ;
//         ans = min( ans , s2[j] + minimumSum(i , j+1 , s1 , s2 ) ) ;
//         if(s1[i]==s2[j]) ans = min( ans , minimumSum(i+1 , j+1 , s1 , s2 ) ) ;
//         else  ans = min( ans ,  s1[i] + s2[j] + minimumSum(i+1 , j+1 , s1 , s2 ) ) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumDeleteSum(string s1, string s2) 
//     {
//         n = s1.size() , m = s2.size() ;
//         int ans = minimumSum(0 , 0 , s1 , s2 ) ;    
//         return ans ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n*m)    // // n, m are the length of string s1 and s2
// //                              
// // //   Space Complexity  = O(n*m)   
// //                               



class Solution {
public:
    int n  , m ; 
    int dp[1000][1000] ;
    int minimumSum(int i , int j , string & s1, string & s2 )
    {
        if(i>=n )
        {
            int sum = 0 ;
            for(int k =j ; k<m; k++) sum += s2[k]  ;
            return sum ;
        }
        if(j>=m )
        {
            int sum = 0 ;
            for(int k =i ; k<n; k++) sum += s1[k] ;
            return sum ;
        }
        if(dp[i][j] != -1) return dp[i][j] ;
        int ans = s1[i] + minimumSum(i+1 , j , s1 , s2 ) ;
        ans = min( ans , s2[j] + minimumSum(i , j+1 , s1 , s2 ) ) ;
        if(s1[i]==s2[j]) ans = min( ans , minimumSum(i+1 , j+1 , s1 , s2 ) ) ;
        else  ans = min( ans ,  s1[i] + s2[j] + minimumSum(i+1 , j+1 , s1 , s2 ) ) ;
        return dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumDeleteSum(string s1, string s2) 
    {
        memset( dp , -1 , sizeof(dp) )  ;
        n = s1.size() , m = s2.size() ;
        int ans = minimumSum(0 , 0 , s1 , s2 ) ;    
        return ans ;
    }
};















































