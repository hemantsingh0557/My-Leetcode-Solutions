









// class Solution {
// public:
//     int findLongestChain(vector<vector<int>>& pairs) {
        
//     }
// };























// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion   TC = O(n^3) , SC = O(n)   ( Probably )
// //                      
// //                      
// // //  2nd Method  ====>  DP  Memoization    TC = O(n^2) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Greedy Method      TC = O(nlog(n))  , SC = O(1) constant
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion  
// // //  1st Method    ======>    Simple Recursion  
// // //  1st Method    ======>    Simple Recursion  
// //                             
// // //   Time Complexity   = O(n^3)   ( Probably )
// //                              
// // //   Space Complexity  = O(n)   ( Probably )
// //                               


// class Solution {
// public:
//     int n ;
//     int maxLength(int i  , vector<vector<int>>& pairs  )
//     {
//         int ans = 0 ;
//         for(int j =i+1; j<n; j++)
//         {
//             if( pairs[i][1]  < pairs[j][0]  ) ans = max( ans , 1 + maxLength(j , pairs) ) ;
//         }
//         return ans  ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findLongestChain(vector<vector<int>>& pairs) 
//     {
//         n = pairs.size() ;    
//         sort( pairs.begin() , pairs.end() ) ;
//         int ans = -1 ;
//         for(int i=0; i<n; i++)
//         {
//             ans = max(ans , 1 + maxLength(i , pairs) ) ;
//         }     
//         return ans ; 
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>    DP  Memoization
// // //  2nd Method    ======>    DP  Memoization
// // //  2nd Method    ======>    DP  Memoization
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int n ;
//     int dp[1005] ;  
//     int maxLength(int i  , vector<vector<int>>& pairs  )
//     {
//         int ans = 0 ;
//         if(dp[i] != -1 ) return dp[i] ;
//         for(int j =i+1; j<n; j++)
//         {
//             if( pairs[i][1]  < pairs[j][0]  ) ans = max( ans , 1 + maxLength(j , pairs) ) ;
//         }
//         return dp[i] =  ans  ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findLongestChain(vector<vector<int>>& pairs) 
//     {
//         memset(dp , -1 , sizeof(dp) ) ;
//         n = pairs.size() ;    
//         sort( pairs.begin() , pairs.end() ) ;
//         int ans = -1 ;
//         for(int i=0; i<n; i++)
//         {
//             ans = max(ans , 1 + maxLength(i , pairs) ) ;
//         }     
//         return ans ; 
//     }
// };















// //                           
// //                           
// // //  3rd  Method    ======>    Greedy Method 
// // //  3rd  Method    ======>    Greedy Method 
// // //  3rd  Method    ======>    Greedy Method 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    static bool cmp(vector<int> &a , vector<int> &b )
    {
        return a[1] < b[1] ;
    }
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        int n = pairs.size() ;    
        sort( pairs.begin() , pairs.end() , cmp ) ;
        int ans = 0 , curr_end = INT_MIN ;
        for(int i=0; i<n; i++)
        {
            int next_st =  pairs[i][0] ,   next_end = pairs[i][1] ; 
            if( curr_end < next_st ) curr_end  =  next_end , ans++ ;
        }     
        return ans ; 
    }
};















































