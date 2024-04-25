








// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    25th   April   2024   -   Thursday    .    









// class Solution {
// public:
//     int longestIdealString(string s, int k) {
        
//     }
// };





















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE)   TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization with all subsequence(TLE TLE TLE) TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
// // //  3rd Method  ====> DP Memoization with last character  TC = O(n*k) , SC = O(n*k)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion (TLE TLE TLE) 
// // //  1st Method    ======>   Simple Recursion (TLE TLE TLE) 
// // //  1st Method    ======>   Simple Recursion (TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public: 
//     int n  ;
//     int longestlength( int i , int prev , string & s , int k )
//     {
//         if( i >= n ) return 0  ;
//         int ans = longestlength( i+1 , prev , s , k ) ;
//         if( prev == -1 || abs( s[prev] - s[i] ) <= k ) 
//         ans = max( ans  , 1 + longestlength(i+1 , i ,s , k)) ;
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestIdealString(string s, int k) 
//     {
//         n = s.size() ;
//         int ans =  longestlength( 0 , -1 , s , k ) ;
//         return ans  ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======> DP Memoization with all subsequence(TLE TLE TLE)  
// // //  2nd Method    ======> DP Memoization with all subsequence(TLE TLE TLE)  
// // //  2nd Method    ======> DP Memoization with all subsequence(TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               


// class Solution {
// public: 
//     int n  ;
//     map<pair<int , int> , int > mp ;
//     int longestlength( int i , int prev , string & s , int k )
//     {
//         if( i >= n ) return 0  ;
//         if( mp.count({i,prev}) ) return mp[{i,prev}] ;
//         int ans = longestlength( i+1 , prev , s , k ) ;
//         if( prev == -1 || abs( s[prev] - s[i] ) <= k ) 
//         ans = max( ans  , 1 + longestlength(i+1 , i ,s , k)) ;
//         return mp[{i,prev}] = ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestIdealString(string s, int k) 
//     {
//         n = s.size() ;
//         int ans =  longestlength( 0 , -1 , s , k ) ;
//         return ans  ;
//     }
// };


















// //                           
// //                           
// // //  3rd Method    ======>   DP Memoization with last character 
// // //  3rd Method    ======>   DP Memoization with last character 
// // //  3rd Method    ======>   DP Memoization with last character 
// //                             
// // //   Time Complexity   = O(n*k)   
// //                              
// // //   Space Complexity  = O(n*k)   
// //                               


class Solution {
public: 
    int n  ;
    int dp[100005][27] ;
    int longestlength( int i , int prev , string & s , int k )
    {
        if( i >= n ) return 0  ;
        if( dp[i][prev+1] != -1 ) return dp[i][prev+1] ;
        int ans = longestlength( i+1 , prev , s , k ) ;
        if( prev == -1 || abs( prev - (s[i]-'a') ) <= k ) 
        ans = max( ans  , 1 + longestlength(i+1 , s[i]-'a' , s , k)) ;
        return dp[i][prev+1] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int longestIdealString(string s, int k) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        n = s.size() ;
        int ans =  longestlength( 0 , -1 , s , k ) ;
        return ans  ;
    }
};




















































