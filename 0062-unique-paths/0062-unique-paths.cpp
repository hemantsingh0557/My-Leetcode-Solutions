









// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//     }
// };
































// // // // // // //  Solve Using  Three  Method  ===>
// // // // // // //  Solve Using  Three  Method  ===>
// 
//
// //  1st Method  ====> Simple Recursion(TLE  TLE  TLE)  TC = O(2^(m*n)) exponential, SC = O(m*n) 
// // 
// //
// //  2nd Method    ======>   Dynamic Programming       TC =  O(m*n)   ,  SC = O(m*n)  
// //
// //
// //  3rd Method   ===> Best => Simple Math ==> nCr formula   TC = O(min(m,n)), SC = O(1) constant 
// //
// //
//
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //
// //
// //
// // // //    1st Method    ======>    Simple Recursion   ===>   TLE    TLE   TLE  TLE   TLE   TLE 
// // // //    1st Method    ======>    Simple Recursion   ===>   TLE    TLE   TLE  TLE   TLE   TLE 
// // // //    1st Method    ======>    Simple Recursion   ===>   TLE    TLE   TLE  TLE   TLE   TLE 
// // // //    1st Method    ======>    Simple Recursion   ===>   TLE    TLE   TLE  TLE   TLE   TLE 
// // // //    1st Method    ======>    Simple Recursion   ===>   TLE    TLE   TLE  TLE   TLE   TLE 
// //


// // // //    1st Method    ======>    Simple Recursion   ===>   1st way
// // // //    1st Method    ======>    Simple Recursion   ===>   1st way
// // // //    1st Method    ======>    Simple Recursion   ===>   1st way
// //
// //
// // //   Time Complexity   =  O(2^(m*n)) exponential 
// //
// //
// // //   Space Complexity  = O(m*n)  because in worst, we use  one variable ans  for every cell or grid[i][j]
// //

// class Solution {
// public:
//     int  M , N  ;
//     int path(int i , int j )
//     {
//         if(i>=M || j>=N) return  0;
//         if(i==M-1 && j== N-1)  return  1 ;
//         int ans = path(i, j+1) ;
//         ans += path(i+1, j) ;
//         return ans ;
//     }
//     // // // // //  Main Function of Question  =====>
//     // // // // //  Main Function of Question  =====>
//     //
//     int uniquePaths(int m, int n) 
//     {
//         M = m , N = n ;
//         int ans = path(0 ,0) ;
//         return ans ;
//     }
// };




///////////     or       or      or       or       or      //////////
///////////     or       or      or       or       or      //////////


// // // //    1st Method    ======>    Simple Recursion   ===>   2nd  way
// // // //    1st Method    ======>    Simple Recursion   ===>   2nd  way
// // // //    1st Method    ======>    Simple Recursion   ===>   2nd  way
// //
// //
// // //   Time Complexity   =  O(2^(m*n)) exponential 
// //
// //
// // //   Space Complexity  = O(1)  because we use only one variable ans 
// //

// class Solution {
// public:
//     int  M , N  ;
//     int ans = 0; 
//     void path(int i , int j )
//     {
//         if(i>=M || j>=N) return ;
//         if(i==M-1 && j== N-1) 
//         {
//             ans ++;
//             return ;
//         }
//         path(i, j+1) ;
//         path(i+1, j) ;
//     }
//     // // // // //  Main Function of Question  =====>
//     // // // // //  Main Function of Question  =====>
//     //
//     int uniquePaths(int m, int n) 
//     {
//         M = m , N = n ;
//         path(0 ,0) ;
//         return ans ;
//     }
// };















// //
// // // // // //       2nd Method         ======>      Dynamic Programming     Memoization     
// // // // // //       2nd Method         ======>      Dynamic Programming     Memoization     
// // // // // //       2nd Method         ======>      Dynamic Programming     Memoization     
// // // // // //       2nd Method         ======>      Dynamic Programming     Memoization     
// //
// //
// // //   Time Complexity   =  O((m*n))  
// //
// //
// // //   Space Complexity  = O(m*n)
// // 


// class Solution {
// public:
//     int  M , N  ;
//     int dp[101][101] ; 
//     int path(int i , int j )
//     {
//         if(i>=M || j>=N) return  0;
//         if(i==M-1 && j== N-1)  return  1 ;
//         if(dp[i][j] != -1)  return  dp[i][j]  ;
//         int ans = path(i, j+1) ;
//         ans += path(i+1, j) ;
//         return dp[i][j] = ans  ;
//     }
//     // // // // //  Main Function of Question  =====>
//     // // // // //  Main Function of Question  =====>
//     //
//     int uniquePaths(int m, int n) 
//     {
//         memset(dp, -1 , sizeof(dp)) ;
//         M = m , N = n ;
//         int ans = path(0 ,0) ;
//         return ans ;
//     }
// };
















// //
// //
// //
// // // //     3rd Method    ======>          Simple Math     ===>   nCr formula     
// // // //     3rd Method    ======>          Simple Math     ===>   nCr formula     
// // // //     3rd Method    ======>          Simple Math     ===>   nCr formula     
// // // //     3rd Method    ======>          Simple Math     ===>   nCr formula     
// //
// //
// //
// //
// // //   Time Complexity   = O(min(m , n ))
// //
// //
// // //   Space Complexity  = O(1)
// //
// //
// //




class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int down = m-1;
        int right = n-1;
        int total = down + right ;   /// //  total = m+n-2 
        // //   here we use formula nCr = (n!)/((n-r)! * r!)
        // // n = total and r = either down or right 
        long long ans = 1;
        int mn = min(down,right) ; // // to protect from the overflow 
        for(int i=1; i<=mn; i++)
        {
            ans = ans * (total+1-i) ;
            ans = ans / (i) ;
        }
        return ans ;
    }
};















































