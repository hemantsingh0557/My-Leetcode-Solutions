







// //
// // // // // // //  Solve Using  Thwo   Method  ===>     
// // // // // // //  Solve Using  Thwo   Method  ===>                        
// //                     
// //                                     // //  Time Complexity is not confirmed
// // 1st Method ===> Normal Recursion (TLE TLE TLE )  TC = O((m*n)^2) ,SC = O(1) constant
// //                      
// //                      
// // 2nd Method  ====>  DP Memoizatoin    TC = O(m*n) , SC = O(m*n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int countPaths(vector<vector<int>>& grid) {
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Normal Recursion (TLE TLE TLE )
// // //  1st Method    ======>   Normal Recursion (TLE TLE TLE )
// // //  1st Method    ======>   Normal Recursion (TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int M = 1000000007 ;
//     int m , n ;
//     int ans = 0;
//     vector<pair<int,int>> movements = { {-1,0}, {1,0}, {0,-1}, {0,1} } ;
//     bool isValid(int i, int j)
//     {
//         return i>=0 && j>=0 && i<m && j<n ;
//     }
//     void dfs(int i, int j, vector<vector<int>>& grid)
//     {
//         ans++ ;
//         ans = ans% M ;
//         for(auto move :  movements )
//         {
//             int x = move.first + i ;
//             int y = move.second + j ;
//             if( isValid(x,y) && grid[x][y]>grid[i][j] )    dfs(x,y, grid);
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countPaths(vector<vector<int>>& grid) 
//     {
//         m = grid.size() ,  n = grid[0].size() ;  
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 dfs(i,j, grid);
//             }
//         }
//         return ans ;
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>       DP Memoizatoin      
// // //  2nd Method    ======>       DP Memoizatoin   
// // //  2nd Method    ======>       DP Memoizatoin   
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               









class Solution {
public:
    int M = 1000000007 ;
    int m , n ;
    int dp[1005][1005]  ;
    vector<pair<int,int>> movements = { {-1,0}, {1,0}, {0,-1}, {0,1} } ;
    bool isValid(int i, int j)
    {
        return i>=0 && j>=0 && i<m && j<n ;
    }
    int dfs(int i, int j, vector<vector<int>>& grid)
    {
        if(dp[i][j] != -1 )   return  dp[i][j] ;
        int  ct = 1 ;
        for(auto move :  movements )
        {
            int x = move.first + i ;
            int y = move.second + j ;
            if( isValid(x,y) && grid[x][y]>grid[i][j] )  ct = (ct + dfs(x,y, grid))% M ;
        }
        return dp[i][j] = ct ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int countPaths(vector<vector<int>>& grid) 
    {
        memset(dp, -1, sizeof(dp)) ;
        m = grid.size() ,  n = grid[0].size() ;  
        int ans = 0 ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                ans = (ans +  dfs(i,j, grid) )%M ;
            }
        }
        return ans ;
    }
};






















