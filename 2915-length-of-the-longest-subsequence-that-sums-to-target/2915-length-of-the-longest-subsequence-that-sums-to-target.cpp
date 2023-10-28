











// class Solution {
// public:
//     int lengthOfLongestSubsequence(vector<int>& nums, int target) 
//     {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE)   TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n^2) , SC = O(n^2) 
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
//     int longestLength( int i , vector<int>& nums, int target )
//     {
//         if( target == 0 ) return 0 ;
//         if( i >= n || target < 0 ) return -1e9 ;
//         int ans = 1 + longestLength( i+1  , nums , target - nums[i] ) ;
//         ans = max( ans , longestLength( i+1  , nums , target ) ) ;
//         return  ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int lengthOfLongestSubsequence(vector<int>& nums, int target) 
//     {
//         n = nums.size() ; 
//         int ans = longestLength( 0  , nums , target ) ; 
//         if( ans <= 0  ) return -1 ; 
//         return ans ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               



class Solution {
public:
    int n  ; 
    int dp[1005][1005] ;
    int longestLength( int i , vector<int>& nums, int target )
    {
        if( target == 0 ) return 0 ;
        if( i >= n || target < 0 ) return -1e9 ;
        if( dp[i][target] != -1  ) return dp[i][target] ; 
        int ans = 1 + longestLength( i+1  , nums , target - nums[i] ) ;
        ans = max( ans , longestLength( i+1  , nums , target ) ) ;
        return dp[i][target] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int lengthOfLongestSubsequence(vector<int>& nums, int target) 
    {
        memset( dp , -1 , sizeof(dp) ) ;  
        n = nums.size() ; 
        int ans = longestLength( 0  , nums , target ) ; 
        if( ans <= 0  ) return -1 ; 
        return ans ; 
    }
};
































































