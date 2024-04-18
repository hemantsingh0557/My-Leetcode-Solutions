










// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    18th   April   2024   -   Thursday    .    















// class Solution {
// public:
//     int islandPerimeter(vector<vector<int>>& grid) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using DFS    TC = O(m*n) , SC = O(m*n) 
// //                      
// //                      
// // //  2nd Method  ====> Just Normal O(m*n) Solution    TC = O(m*n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try any other   TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using DFS
// // //  1st Method    ======>  Using DFS
// // //  1st Method    ======>  Using DFS
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


// class Solution {
// public:
//     int m , n ;
//     int ans = 0 ;
//     vector<pair<int,int>> Movements = { {-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1} } ; 
//     bool isValid(int x , int y)
//     {
//         return x >= 0 && y >= 0 && x < m && y < n ; 
//     }
//     void dfs(  int i , int j , vector<vector<int>>& vis , vector<vector<int>>& grid )
//     {
//         ans += 4; 
//         vis[i][j] = 1 ;
//         for(auto [x , y] : Movements)
//         {
//             int newX = x + i ;   
//             int newY = y + j  ;
//             if( isValid(newX , newY) && grid[newX][newY] == 1 )
//             {
//                 ans -= 1 ;
//                 if(vis[newX][newY] == 0  ) dfs( newX , newY , vis , grid  ) ;
//             }
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int islandPerimeter(vector<vector<int>>& grid) 
//     {
//         m = grid.size()  , n = grid[0].size() ;
//         int flag = 0 ;
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if( grid[i][j] == 1 )
//                 {
//                     flag = 1;
//                     vector<vector<int>> vis( m , vector<int>(n ,0) ) ;
//                     // ans += 4 ;
//                     dfs( i , j , vis , grid  ) ;
//                     break ;
//                 }
//             }
//             if( flag == 1 ) break ;
//         }
//         return ans  ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  Just Normal O(m*n) Solution
// // //  2nd Method    ======>  Just Normal O(m*n) Solution
// // //  2nd Method    ======>  Just Normal O(m*n) Solution
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int r = grid.size() ,  c = grid[0].size()  ;
        int perimeter = 0;
        int ct = 0 ;
        for(int i =0; i<r; i++)
        {
            for(int j =0; j<c; j++)
            {
                if(grid[i][j] == 1)
                {
                    ct++ ;
                    if( j-1 >= 0  &&  grid[i][j-1] == 1 ) perimeter -= 1 ;
                    if( j+1 < c   &&  grid[i][j+1] == 1 ) perimeter -= 1 ;
                    if( i-1 >= 0  &&  grid[i-1][j] == 1 ) perimeter -= 1 ;
                    if( i+1 < r   &&  grid[i+1][j] == 1 ) perimeter -= 1 ;
                } 
            }
        }
        perimeter = ct*4 + perimeter  ;
        return perimeter ;
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























































