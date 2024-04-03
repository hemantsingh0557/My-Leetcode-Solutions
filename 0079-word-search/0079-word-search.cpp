























// class Solution {
// public:
//     bool exist(vector<vector<char>>& board, string word) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method ==> DFS , visited array and backtracking  TC = O(m*n*(4^sz)) , SC = O(sz + m*n)  
// //                      
// //                      
// // //  2nd Method  ====> DFS and BackTracking    TC = O(m*n*(4^sz)) , SC = O( sz )  
// //                     
// //                     
// // //  3rd Method  ====> Better Code Quality    TC = O(m*n*(4^sz)) , SC = O(sz )  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  DFS , visited array and backtracking  
// // //  1st Method    ======>  DFS , visited array and backtracking  
// // //  1st Method    ======>  DFS , visited array and backtracking  
// //                             
// // //   Time Complexity   = O(m*n*(4^sz))   
// //                              
// // //   Space Complexity  = O( sz + n*m  )   
// //                               

// class Solution {
// public:
//     int m , n  , sz ;
//     vector<pair<int , int>> movement =  { {-1 , 0 } , {1 , 0 } , {0 , -1 } , {0 , 1 } } ; 
//     int vis[7][7] ;
//     bool isValid(int x , int y)
//     {
//         return x >= 0 && y >= 0 && x < m && y < n ; 
//     }
//     bool checkWord( int i , int j , int k ,  vector<vector<char>>& board, string word )
//     {
//         if( k == sz ) return true ; 
//         int res = false ; 
//         vis[i][j] = 1 ;
//         for(auto [p, q] : movement)
//         {
//             int x =  i + p ,   y = j + q ; 
//             if ( isValid(x , y) && vis[x][y] == 0 && board[x][y] == word[k] )
//             {
//                 res |= checkWord( x , y , k+1 , board , word) ; 
//                 vis[x][y] = 0 ; 
//             }
//         }
//         return  res ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool exist(vector<vector<char>>& board, string word) 
//     {
//         m = board.size() , n = board[0].size() , sz = word.size() ; 
//         char st = word[0] ;
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if( board[i][j] == st )
//                 {
//                     memset( vis , 0 , sizeof(vis) ) ; 
//                     if( checkWord( i , j , 1 , board , word) ) return true  ; 
//                 }
//             }
//         }
//         return false  ; 
//     } 
// };






// //                           
// //                           
// // //  2nd Method    ======>   DFS and BackTracking 
// // //  2nd Method    ======>   DFS and BackTracking 
// // //  2nd Method    ======>   DFS and BackTracking 
// //                             
// // //   Time Complexity   = O(m*n*(4^sz))   
// //                              
// // //   Space Complexity  = O(sz)   
// //                             



// class Solution {
// public:
//     int m , n  , sz ;
//     vector<pair<int , int>> movement =  { {-1 , 0 } , {1 , 0 } , {0 , -1 } , {0 , 1 } } ; 
//     bool isValid(int x , int y)
//     {
//         return x >= 0 && y >= 0 && x < m && y < n ; 
//     }
//     bool checkWord( int i , int j , int k ,  vector<vector<char>>& board, string word )
//     {
//         if( k == sz ) return true ; 
//         // cout<<k<<endl;
//         // cout<<i<<" "<<j<<endl;
//         int res = false ; 
//         for(auto [p, q] : movement)
//         {
//             int x =  i + p ,   y = j + q ; 
//             if ( isValid(x , y) && board[x][y] == word[k] )
//             {
//                 char c = board[x][y] ; 
//                 board[x][y] =  '@' ; 
//                 res |= checkWord( x , y , k+1 , board , word) ; 
//                 board[x][y] =  c ; 
//             }
//         }
//         return  res ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool exist(vector<vector<char>>& board, string word) 
//     {
//         m = board.size() , n = board[0].size() , sz = word.size() ; 
//         char st = word[0] ;
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if( board[i][j] == st )
//                 {
//                     char c = board[i][j] ; 
//                     board[i][j] =  '@' ;  
//                     if( checkWord( i , j , 1 , board , word) ) return true  ; 
//                     board[i][j] =  c ;  
//                 }
//             }
//         }
//         return false  ; 
//     } 
// };






// //                           
// //                           
// // //  3rd Method    ======>   Better Code Quality
// // //  3rd Method    ======>   Better Code Quality
// // //  3rd Method    ======>   Better Code Quality
// //                             
// // //   Time Complexity   = O(m*n*(4^sz))   
// //                              
// // //   Space Complexity  = O(sz)   
// //                               



class Solution {
public:
    int m , n  , sz ;
    vector<pair<int , int>> movement =  { {-1 , 0 } , {1 , 0 } , {0 , -1 } , {0 , 1 } } ; 
    bool checkWord( int i , int j , int k ,  vector<vector<char>>& board, string word )
    {
        if( i < 0 || j < 0 || i >= m || j >= n  ) return false ; 
        if( board[i][j] != word[k]  ) return false ; 
        if( k == sz-1 ) return true ; 
        char c = board[i][j] ; 
        board[i][j] =  '@' ; 
        int res = false ; 
        for(auto [p, q] : movement)
        {
            int x =  i + p ,   y = j + q ; 
            res |= checkWord( x , y , k+1 , board , word) ; 
        }
        board[i][j] =  c ; 
        return  res ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool exist(vector<vector<char>>& board, string word) 
    {
        m = board.size() , n = board[0].size() , sz = word.size() ; 
        char st = word[0] ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( checkWord( i , j , 0 , board , word) ) return true  ; 
            }
        }
        return false  ; 
    } 
};
































