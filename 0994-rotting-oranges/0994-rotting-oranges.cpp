




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  BFS with visited and level array    TC = O(n*m)  , SC = O(n*m)
// //                      
// //                      
// // //  2nd Method  ====>  BFS without visited and level array  TC = O(n*m)  , SC = O(n*m)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  BFS with visited and level array
// // //  1st Method    ======>  BFS with visited and level array
// // //  1st Method    ======>  BFS with visited and level array
// //                            
// // 
// // //   Time Complexity   = O(n*m + n*m*4 + n*m)   == O(n*m)
// //                          in while loop => n*m*4    
// //                              
// // //   Space Complexity  = O(n*m + n*m + n*m)    == O(n*m)
// //                        in vis   => n*m  
// //                        in lev   => n*m  
// //                        in queu  => n*m  
// //                               



// class Solution {
// public:
//     int m , n ;
//     int vis[20][20] = {0};
//     int lev[20][20];
//     vector<pair<int,int>> movements = {{-1,0},{1,0},{0,-1},{0,1}};
//     bool isvalid(int a , int b)
//     {
//         return a>=0 && a<m && b>=0 && b<n ;
//     }
//     int bfs(vector<vector<int>>& grid)
//     {
//         queue<pair<int,int>> q ;
//         for(int i=0; i<m ; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if(grid[i][j]==2) 
//                 {
//                     q.push({i,j}) ;
//                     lev[i][j] = 0 ;
//                     vis[i][j]= 1 ;
//                 }
//                 // else lev[i][j] = INT_MAX ;
//             }
//         }
//         int ans = 0 ;
//         while(q.size())
//         {
//             int x = q.front().first ;
//             int y = q.front().second ;
//             q.pop();
//             for(auto move : movements)
//             {
//                 int childX  = x + move.first ;
//                 int childY  = y + move.second ;
//                 if(!isvalid( childX ,  childY )) continue ;
//                 if(grid[childX][childY]==0 ) continue ;
//                 if(vis[childX][childY] ) continue ;
//                 q.push({childX , childY}) ;
//                 lev[childX][childY] = lev[x][y] +1 ;
//                 vis[childX][childY] = 1 ;
//                 ans = max(ans , lev[childX][childY]) ;
//             }
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int orangesRotting(vector<vector<int>>& grid) 
//     {
//         m = grid.size() , n = grid[0].size() ;
//         int ans = bfs(grid) ; 
//         for(int i=0; i<m ; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if(grid[i][j]==1 && vis[i][j] != 1 ) return -1 ; 
//             }
//         }
//         return ans ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>  BFS without visited and level array
// // //  2nd Method    ======>  BFS without visited and level array
// // //  2nd Method    ======>  BFS without visited and level array
// //                             
// // //   Time Complexity   = O(n*m + n*m*4)    == O(n*m)
// //                          in while loop => n*m*4    
// //                              
// // //   Space Complexity  = O(n*m + n*m*4) == O(n*m)  
// //                               



class Solution {
public:
    int m , n ;
    vector<pair<int,int>> movements = {{-1,0},{1,0},{0,-1},{0,1}};
    bool isvalid(int a , int b)
    {
        return a>=0 && a<m && b>=0 && b<n ;
    }
    int bfs(vector<vector<int>>& grid)
    {
        queue<pair<int,int>> q ;
        int fresh =0 ;
        for(int i=0; i<m ; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==2) q.push({i,j}) ;
                else if(grid[i][j]==1) fresh ++  ;
            }
        }
        int ans = -1 ;
        while(q.size())
        {
            int sz = q.size() ;
            while(sz--)
            {
                int x = q.front().first ;
                int y = q.front().second ;
                q.pop() ; 
                for(auto move : movements)
                {
                    int childX  = x + move.first ;
                    int childY  = y + move.second ;
                    if(!isvalid( childX ,  childY )) continue ;
                    if(grid[childX][childY] !=1 ) continue ;
                    grid[childX][childY] =2 ;
                    fresh-- ;
                    q.push({childX , childY}) ;
                }
            }
            ans ++ ;
        }
        if(fresh>0) return -1 ;
        if(ans==-1) return 0 ;  
        return ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int orangesRotting(vector<vector<int>>& grid) 
    {
        m = grid.size() , n = grid[0].size() ;
        int ans = bfs(grid) ; 
        return ans ;
    }
};





















