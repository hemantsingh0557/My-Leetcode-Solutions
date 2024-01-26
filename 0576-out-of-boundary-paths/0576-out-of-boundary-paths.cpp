










// class Solution {
// public:
//     int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion( TLE TLE TLE )    TC = O(4 ^(m*n) ) , SC = O(m*n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(m*n*maxMove) , SC = O(m*n*maxMove) 
// //                     
// //                     
// // //  3rd Method  ====> ( Try to solve ) DP Iterative    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion( TLE TLE TLE )
// // //  1st Method    ======>  Simple Recursion( TLE TLE TLE )
// // //  1st Method    ======>  Simple Recursion( TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(4 ^(m*n) )   ( Probably )   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


// class Solution {
// public: 
//     int M = 1e9 + 7 ;  
//     vector<pair<int,int>> vp = { {1,0} , {-1,0} , {0,1} , {0,-1} } ;  
//     int totalPaths(int m, int n, int remainMove, int i, int j) 
//     {
//         if( i<0 || j<0 || i>=m || j>=n ) return 1 ; 
//         if( remainMove == 0 ) return  0 ; 
//         long ans = 0 ; 
//         for(auto it : vp)
//         {
//             int newRow = it.first + i ; 
//             int newCol = it.second + j ; 
//             ans += totalPaths( m , n , remainMove-1 , newRow , newCol ) ; 
//             ans %= M ;  
//         }
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findPaths(int m, int n, int maxMove, int startRow, int startColumn) 
//     {
//         int ans = totalPaths( m , n , maxMove , startRow , startColumn ) ;
//         return ans ;  
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization 
// // //  2nd Method    ======>  DP Memoization 
// // //  2nd Method    ======>  DP Memoization 
// //                             
// // //   Time Complexity   = O(m*n*maxMove) 
// //                              
// // //   Space Complexity  = O(m*n*maxMove)
// //                               

class Solution {
public: 
    int M = 1e9 + 7 ;  
    int dp[55][55][55] ;
    vector<pair<int,int>> vp = { {1,0} , {-1,0} , {0,1} , {0,-1} } ;  
    int totalPaths(int m, int n, int remainMove, int i, int j) 
    {
        if( i<0 || j<0 || i>=m || j>=n ) return 1 ; 
        if( remainMove == 0 ) return  0 ; 
        if( dp[remainMove][i][j] != -1 ) return dp[remainMove][i][j] ;  
        long ans = 0 ; 
        for(auto it : vp)
        {
            int newRow = it.first + i ; 
            int newCol = it.second + j ; 
            ans += totalPaths( m , n , remainMove-1 , newRow , newCol ) ; 
            ans %= M ;  
        }
        return dp[remainMove][i][j] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        int ans = totalPaths( m , n , maxMove , startRow , startColumn ) ;
        return ans ;  
    }
};












// //                           
// //                           
// // //  3rd Method    ======>   ( Try to solve ) DP Iterative
// // //  3rd Method    ======>   ( Try to solve ) DP Iterative
// // //  3rd Method    ======>   ( Try to solve ) DP Iterative
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               
















































