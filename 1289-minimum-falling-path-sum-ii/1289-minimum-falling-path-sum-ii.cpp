









// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    26th   April   2024   -   Friday    .    










// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )   TC = O(n^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Dp Memoization(Top-Down)    TC = O(n^3) , SC = O(n^2) 
// //                     
// //                     
// // //  3rd Method  ====> (Try to solve) DP Memoization(Bottom-Up)    TC = O(n^3) , SC = O(n^2)  
// //                     
// //                     
// // //  4th Method  ====> (Try to solve) DP Memoization(Bottom-Up)    TC = O(n^2) , SC = O(n^2) 
// // 
// // 
// // //  5th Method  ====> (Try to solve) DP Memoization(Bottom-Up)    TC = O(n^3) , SC = O(1) contant  
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
// // //   Time Complexity   = O(n^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int n ;
//     int minPathSum(int i , int j , vector<vector<int>>& grid )
//     {
//         if( i >= n ) return 0 ;
//         int ans = 1e9 ;
//         for(int k=0; k<n; k++)
//         {
//             if( k == j ) continue ;
//             ans = min( ans , grid[i][k] + minPathSum( i+1 , k , grid ) ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minFallingPathSum(vector<vector<int>>& grid) 
//     {
//         n = grid.size() ;
//         // int ans = minPathSum( 0 , 0 , grid ) ;
//         int ans = 1e9 ;
//         for(int j=0; j<n; j++)
//         {
//             ans = min( ans , grid[0][j] + minPathSum( 1 , j , grid ) ) ;
//         }
//         return ans ;
//     }
// };





// //                           
// //                           
// // //  2nd Method    ======>   Dp Memoization(Top-Down)  
// // //  2nd Method    ======>   Dp Memoization(Top-Down)  
// // //  2nd Method    ======>   Dp Memoization(Top-Down)  
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(n^2)  
// //                               


class Solution {
public:
    int n ;
    int dp[201][201] ;  
    int minPathSum(int i , int j , vector<vector<int>>& grid )
    {
        if( i >= n ) return 0 ;
        if( dp[i][j] != -1 ) return dp[i][j] ;
        int ans = 1e9 ;
        for(int k=0; k<n; k++)
        {
            if( k == j ) continue ;
            ans = min( ans , grid[i][k] + minPathSum( i+1 , k , grid ) ) ;
        }
        return dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minFallingPathSum(vector<vector<int>>& grid) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        n = grid.size() ;
        // int ans = minPathSum( 0 , 0 , grid ) ;
        int ans = 1e9 ;
        for(int j=0; j<n; j++)
        {
            ans = min( ans , grid[0][j] + minPathSum( 1 , j , grid ) ) ;
        }
        return ans ;
    }
};












// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       
// // // //  Copy from the editorial tab      =======> below three solution       





// //                           
// //                           
// // //  3rd Method    ======>   (Try to solve) DP Memoization(Bottom-Up)  
// // //  3rd Method    ======>   (Try to solve) DP Memoization(Bottom-Up)  
// // //  3rd Method    ======>   (Try to solve) DP Memoization(Bottom-Up)  
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               

// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
//         // Initialize a two-dimensional array to cache the result of each sub-problem
//         vector<vector<int>> memo(grid.size(), vector<int>(grid.size(), INT_MAX));
//         // Fill the base case
//         for (int col = 0; col < grid.size(); col++) {
//             memo[grid.size() - 1][col] = grid[grid.size() - 1][col];
//         }
//         // Fill the recursive cases
//         for (int row = grid.size() - 2; row >= 0; row--) {
//             for (int col = 0; col < grid.size(); col++) {
//                 // Select minimum from valid cells of next row
//                 int nextMinimum = INT_MAX;
//                 for (int nextRowCol = 0; nextRowCol < grid.size(); nextRowCol++) {
//                     if (nextRowCol != col) {
//                         nextMinimum = min(nextMinimum, memo[row + 1][nextRowCol]);
//                     }
//                 }
//                 // Minimum cost from this cell
//                 memo[row][col] = grid[row][col] + nextMinimum;
//             }
//         }
//         // Find the minimum from the first row
//         int answer = INT_MAX;
//         for (int col = 0; col < grid.size(); col++) {
//             answer = min(answer, memo[0][col]);
//         }
//         // Return the answer
//         return answer;
//     }
// };












// //                           
// //                           
// // //  4th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Save min and 2nd min 
// // //  4th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Save min and 2nd min 
// // //  4th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Save min and 2nd min 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               

// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
//         // Initialize a two-dimensional array to cache the result of each sub-problem
//         vector<vector<int>> memo(grid.size(), vector<int>(grid.size(), INT_MAX));

//         // Minimum and Second Minimum Column Index
//         int nextMin1C = -1;
//         int nextMin2C = -1;

//         // Base Case. Fill and save the minimum and second minimum column index
//         for (int col = 0; col < grid.size(); col++) {
//             memo[grid.size() - 1][col] = grid[grid.size() - 1][col];
//             if (nextMin1C == -1 || memo[grid.size() - 1][col] <= memo[grid.size() - 1][nextMin1C]) {
//                 nextMin2C = nextMin1C;
//                 nextMin1C = col;
//             } else if (nextMin2C == -1 || memo[grid.size() - 1][col] <= memo[grid.size() - 1][nextMin2C]) {
//                 nextMin2C = col;
//             }
//         }

//         // Fill the recursive cases
//         for (int row = grid.size() - 2; row >= 0; row--) {
//             // Minimum and Second Minimum Column Index of the current row
//             int min1C = -1;
//             int min2C = -1;

//             for (int col = 0; col < grid.size(); col++) {
//                 // Select minimum from valid cells of the next row
//                 if (col != nextMin1C) {
//                     memo[row][col] = grid[row][col] + memo[row + 1][nextMin1C];
//                 } else {
//                     memo[row][col] = grid[row][col] + memo[row + 1][nextMin2C];
//                 }

//                 // Save minimum and second minimum column index
//                 if (min1C == -1 || memo[row][col] <= memo[row][min1C]) {
//                     min2C = min1C;
//                     min1C = col;
//                 } else if (min2C == -1 || memo[row][col] <= memo[row][min2C]) {
//                     min2C = col;
//                 }
//             }

//             // Change of row. Update nextMin1C and nextMin2C
//             nextMin1C = min1C;
//             nextMin2C = min2C;
//         }

//         // Return the minimum from the first row
//         return memo[0][nextMin1C];
//     }
// };













// //                           
// //                           
// // //  5th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Space Optimized 
// // //  5th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Space Optimized 
// // //  5th Method    ======>   (Try to solve) DP Memoization(Bottom-Up) Space Optimized 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant   
// //                               


// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
//         // Minimum and Second Minimum Column Index
//         int nextMin1C = -1;
//         int nextMin2C = -1;

//         // Minimum and Second Minimum Value
//         int nextMin1 = -1;
//         int nextMin2 = -1;

//         // Find the minimum and second minimum from the last row
//         for (int col = 0; col < grid.size(); col++) {
//             if (nextMin1 == -1 || grid[grid.size() - 1][col] <= nextMin1) {
//                 nextMin2 = nextMin1;
//                 nextMin2C = nextMin1C;
//                 nextMin1 = grid[grid.size() - 1][col];
//                 nextMin1C = col;
//             } else if (nextMin2 == -1 || grid[grid.size() - 1][col] <= nextMin2) {
//                 nextMin2 = grid[grid.size() - 1][col];
//                 nextMin2C = col;
//             }
//         }

//         // Fill the recursive cases
//         for (int row = grid.size() - 2; row >= 0; row--) {
//             // Minimum and Second Minimum Column Index of the current row
//             int min1C = -1;
//             int min2C = -1;

//             // Minimum and Second Minimum Value of current row
//             int min1 = -1;
//             int min2 = -1;

//             for (int col = 0; col < grid.size(); col++) {
//                 // Select minimum from valid cells of the next row
//                 int value;
//                 if (col != nextMin1C) {
//                     value = grid[row][col] + nextMin1;
//                 } else {
//                     value = grid[row][col] + nextMin2;
//                 }

//                 // Save minimum and second minimum
//                 if (min1 == -1 || value <= min1) {
//                     min2 = min1;
//                     min2C = min1C;
//                     min1 = value;
//                     min1C = col;
//                 } else if (min2 == -1 || value <= min2) {
//                     min2 = value;
//                     min2C = col;
//                 }
//             }

//             // Change of row. Update nextMin1C, nextMin2C, nextMin1, nextMin2
//             nextMin1C = min1C;
//             nextMin2C = min2C;
//             nextMin1 = min1;
//             nextMin2 = min2;
//         }

//         // Return the minimum from the first row
//         return nextMin1;
//     }
// };

















































