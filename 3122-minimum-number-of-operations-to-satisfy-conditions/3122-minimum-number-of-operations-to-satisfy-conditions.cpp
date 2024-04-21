












// //  LeetCode  Weekly Contest  394  ( Able To Solve Three Question(third takes more time in implement) )


// //  3rd  Question  ===> Able to solve in contest


// //  Today's  Date   -    21st April 2024  -  Sunday    .    















// // // //  in the below code , due to one single like i submit this question around 9:25
// // // //  that line waste my 40-50 minutes in contest

// class Solution {
// public:
//     int m , n ;
//     int minOperation(int j , int preVal , vector<vector<int>>& grid)
//     {
//         if(  j < 0 || j >= n  )  return 0 ;
//         int ans = 1e9;
//         for (int val = 0; val <= 9; val++) 
//         {
//             if (preVal == val) continue;
//             int res = 0;
//             for (int k = 0; k < m; k++) 
//             {
//                 if (grid[k][j] != val) 
//                 {
//                     res++ ;
//                     //
//                     //
//                     // due to the below line it waste my 40-50 minutes in contest
//                     grid[k][j] = val ;
//                     // 
//                     // find and analyse the mistake due to the above line
//                     //
//                 }
//             }
//             ans = min(ans, res + minOperation(j + 1, val, grid));
//         }
//         return  ans  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumOperations(vector<vector<int>>& grid) 
//     {
//         m = grid.size()  , n = grid[0].size() ;
//         int ans = minOperation( 0 , -1 , grid  ) ;
//         return ans  ;
//     }
// };





















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// // // m is row , n is column and val is range of grid value                
// //                     
// // //  1st Method  ====> Simple Recursion(TLE TLE TLE)    TC = O(n^(m*val)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(m*n*val) , SC = O(n*val) 
// //                     
// //                     
// // //  3rd Method  ====> Try any other    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE) 
// 
// // // m is row , n is column and val is range of grid value                
// //                             
// // //   Time Complexity   =  O(n^(m*val))   
// //                              
// // //   Space Complexity  =  O(n)   
// //                               

// class Solution {
// public:
//     int m , n ;
//     int minOperation(int j , int preVal , vector<vector<int>>& grid)
//     {
//         if(  j < 0 || j >= n  )  return 0 ;
//         int ans = 1e9;
//         for (int val = 0; val <= 9; val++) 
//         {
//             if (preVal == val) continue;
//             int res = 0;
//             for (int k = 0; k < m; k++) 
//             {
//                 if (grid[k][j] != val) res++ ;
//             }
//             ans = min(ans, res + minOperation(j + 1, val, grid));
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumOperations(vector<vector<int>>& grid) 
//     {
//         m = grid.size()  , n = grid[0].size() ;
//         int ans = minOperation( 0 , -1 , grid  ) ;
//         return ans  ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization   
// // //  2nd Method    ======>  DP Memoization   
// // //  2nd Method    ======>  DP Memoization   
// //
// // // m is row , n is column and val is range of grid value                
// //             
// // //   Time Complexity   = O(m*n*val)   
// //                              
// // //   Space Complexity  = O(n*val)   
// //                               

class Solution {
public:
    int m , n ;
    int dp[1005][12] ;
    int minOperation(int j , int preVal , vector<vector<int>>& grid)
    {
        if(  j < 0 || j >= n  )  return 0 ;
        if( dp[j][preVal+1] != -1 ) return  dp[j][preVal+1] ;
        int ans = 1e9;
        for (int val = 0; val <= 9; val++) 
        {
            if (preVal == val) continue;
            int res = 0;
            for (int k = 0; k < m; k++) 
            {
                if (grid[k][j] != val) res++ ;
            }
            ans = min(ans, res + minOperation(j + 1, val, grid));
        }
        return   dp[j][preVal+1] = ans  ;
        // return dp[j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumOperations(vector<vector<int>>& grid) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        m = grid.size()  , n = grid[0].size() ;
        int ans = minOperation( 0 , -1 , grid  ) ;
        return ans  ;
    }
};













// //                           
// //                           
// // //  3rd Method    ======>   Try any other  
// // //  3rd Method    ======>   Try any other  
// // //  3rd Method    ======>   Try any other  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               
































































