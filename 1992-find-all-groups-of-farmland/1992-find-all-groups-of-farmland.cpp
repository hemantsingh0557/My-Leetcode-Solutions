








// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    20th   April   2024   -   Saturday    .    














// class Solution {
// public:
//     vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
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
// // //  2nd Method  ====> Try to solve => Using BFS(from editorial)   TC = O(m*n) , SC = O(m*n) 
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


class Solution {
public:
    int m , n  ;
    vector<vector<int>>  ans ;
    vector<vector<int>> vis ;
    vector<pair<int, int>> movements = { {-1 , 0} , {1 , 0} , {0 , 1} , {0 , -1} } ;
    bool isValid(int x , int y)
    {
        return x >=0 && y >= 0 && x < m && y < n ;
    }
    void dfs(int i , int j , vector<vector<int>> &land , vector<int>& group )
    {
        // group[0] = min( group[0], i ); //these will be optional if we already assign before function call 
        // group[1] = min( group[1], j ); //these will be optional if we already assign before function call 
        group[2] = max( group[2] , i ) ;
        group[3] = max( group[3] , j ) ;
        // cout<<i<<" "<<j<<endl;
        vis[i][j] = 1 ;
        for(auto [x ,y] : movements)
        {
            int newX = x + i ;
            int newY = y + j ;
            if( isValid(newX , newY) && vis[newX][newY] == 0 && land[newX][newY] == 1 )
            {
                dfs(newX , newY , land , group) ;
            }
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<int>> findFarmland(vector<vector<int>>& land)
    {
        m = land.size() , n = land[0].size() ;
        vis.resize( m , vector<int>(n, 0) ) ; 
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( land[i][j] == 1 && vis[i][j] == 0 )
                {
                    vector<int> group(4,0) ;
                    group[0] = i ;
                    group[1] = j ;
                    dfs(i , j , land , group ) ;
                    ans.push_back( group ) ;
                }
            }
        }
        return ans ;
    }
};













// //                           
// //                           
// // //  2nd Method    ======>    Try to solve => Using BFS(from editorial) 
// // //  2nd Method    ======>    Try to solve => Using BFS(from editorial) 
// // //  2nd Method    ======>    Try to solve => Using BFS(from editorial) 
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n + m*n ) = (m*n)  for visited and queue 
// //                               


// // //  // // // //  Copy from the editorial tab      =======>        
// // //  // // // //  Copy from the editorial tab      =======>        
// // //  // // // //  Copy from the editorial tab      =======>        
// // //  // // // //  Copy from the editorial tab      =======>        

// class Solution {
// public:
//     vector<vector<int>> findFarmland(vector<vector<int>>& land) {
//         vector<vector<bool>> visited(land.size(), vector<bool>(land[0].size(), false));
//         vector<vector<int>> ans;
        
//         for (int row1 = 0; row1 < land.size(); row1++) {
//             for (int col1 = 0; col1 < land[0].size(); col1++) {
//                 if (land[row1][col1] && !visited[row1][col1]) {
//                     queue<pair<int, int>> q;
//                     q.push({row1, col1});
//                     visited[row1][col1] = true;
                    
//                     pair<int, int> last = BFS(q, land, visited, row1, col1);
//                     ans.push_back({row1, col1, last.first, last.second});
//                 }
//             }
//         }
        
//         return ans;
//     }
// private:    
//     // The four directions in which traversal will be done.
//     int dirs[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

//     // Returns true if the coordinate is within the boundary of the matrix.
//     bool isWithinFarm(int x, int y, int N, int M) {
//         return x >= 0 && x < N && y >= 0 && y < M;
//     }
    
//     pair<int, int> BFS(queue<pair<int, int>> q, vector<vector<int>>& land,
//         vector<vector<bool>>& visited, int x, int y) {
//         pair<int, int> curr;
        
//         while (!q.empty()) {
//             curr = q.front();
//             q.pop();

//             int x = curr.first;
//             int y = curr.second;
            
//             for (auto dir : dirs) {
//                 // Neighbor cell coordinates.
//                 int newX = x + dir[0], newY = y + dir[1];

//                 // If the neighbor is within the matrix and is a farmland cell and not visited yet.
//                 if (isWithinFarm(newX, newY, land.size(), land[0].size()) && !visited[newX][newY]
//                         && land[newX][newY]) {
//                     visited[newX][newY] = true;
//                     q.push({newX, newY});
//                 }
//             }
//         }
        
//         return curr;
//     }
// };



















































