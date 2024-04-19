










// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    19th   April   2024   -   Friday    .    











// class Solution {
// public:
//     int numIslands(vector<vector<char>>& grid) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using DFS   TC = O(m*n) , SC = O(m*n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using BFS   TC = O(m*n) , SC = O(m*n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// //                           
// //                           
// // //  1st Method    ======>     Using   DFS
// // //  1st Method    ======>     Using   DFS
// // //  1st Method    ======>     Using   DFS
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)  
// //                               


// class Solution {
// public:
//     int m , n  ;
//     vector<vector<int>> vis ;
//     vector<pair<int, int>> movements = { {-1 , 0} , {1 , 0} , {0 , 1} , {0 , -1} } ;
//     bool isValid(int x , int y)
//     {
//         return x >=0 && y >= 0 && x < m && y < n ;
//     }
//     void dfs(int i , int j , vector<vector<char>> &grid)
//     {
//         vis[i][j] = 1 ;
//         for(auto [x ,y] : movements)
//         {
//             int newX = x + i ;
//             int newY = y + j ;
//             if( isValid(newX , newY) && vis[newX][newY] == 0 && grid[newX][newY]-'0' == 1 )
//             {
//                 dfs(newX , newY , grid) ;
//             }
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numIslands(vector<vector<char>>& grid) 
//     {
//         m = grid.size() , n = grid[0].size() ;
//         vis.resize( m , vector<int>(n, 0) ) ; 
//         int ans = 0 ; 
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if( grid[i][j] - '0' == 1 && vis[i][j] == 0 )
//                 {
//                     ans ++ ;
//                     dfs(i , j , grid) ;
//                 }
//             }
//         }
//         return ans ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>    Using  BFS
// // //  2nd Method    ======>    Using  BFS
// // //  2nd Method    ======>    Using  BFS
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n + m*n ) = (m*n)  for visited and queue 
// //                               





class Solution {
public:
    int m , n ; 
    vector<vector<int>> vis ;
    vector<pair<int,int>> movements = {{-1,0} , {1,0} , {0,-1} , {0,1}} ;
    bool isvalid(int x , int y)
    {
        return x>=0 && y>=0 && x<m && y<n ;
    }
    void bfs(int i , int j , vector<vector<char>>& grid )
    {
        queue<pair<int,int>> q ;
        q.push({i,j})  ;
        while(q.size())
        {
            pair<int,int> temp = q.front() ;
            q.pop() ;
            int tx = temp.first ;
            int ty = temp.second ;
            for(auto move : movements)
            {
                int x = tx + move.first ;
                int y = ty + move.second ;
                if(isvalid(x,y) && !vis[x][y] && grid[x][y] =='1') vis[x][y] = 1 , q.push({x,y}) ;
            }
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numIslands(vector<vector<char>>& grid)  
    {
        m = grid.size()  , n = grid[0].size() ;
        vis.resize( m , vector<int>(n, 0) ) ;
        int ans = 0 ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)  
            {
                if(grid[i][j]=='1' && vis[i][j] ==0 ) 
                {
                    bfs(i,j, grid) ;
                    ans++; 
                }
            }
        }
        return ans ;
    }
};



























































