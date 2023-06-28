




// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Recursion and Backtracking    TC = O(n*n*3n) , SC = O(n*n) for  board
// //                 
// //     
// // //  2nd Method  ====> Hash and Recursion and Backtracking  TC = O(n*n) , SC = (n^2 + 5n) 
// //     
// //                 
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<vector<string>> solveNQueens(int n) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Recursion and Backtracking
// // //  1st Method    ======>     Recursion and Backtracking
// // //  1st Method    ======>     Recursion and Backtracking
// //                             
// // //   Time Complexity   = O(n*n*3n)  // n for col , n for row ans 3n for checking isPossible   
// //                              
// // //   Space Complexity  = O(n*n)   
// //                               




// class Solution {
// public:
//     vector<vector<string>>ans ;
//     vector<string> board ;
//     bool isPossible(int row , int col , int n)
//     {
//         int i = row ;   
//         int j = col ; 
//         // for the same row
//         while(j>=0)   if(board[i][j--]=='Q') return false ;
//         i = row ;
//         j = col ;
//         while(i>=0 && j>=0) if(board[i--][j--]=='Q') return false ;
//         i = row ;
//         j = col ;
//         while(i<n && j>=0) if(board[i++][j--]=='Q') return false ;
//         return true ;
//     }
//     void solve(int col , int n )
//     {
//         if(col==n)
//         {
//             ans.push_back(board) ;
//             return  ;
//         }
//         for(int row= 0; row<n; row++)
//         {
//             if(isPossible(row,col,n))
//             {
//                 board[row][col] = 'Q' ;
//                 solve(col+1 , n) ;
//                 board[row][col] = '.' ;
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) 
//     {
//         board.resize(n) ;
//         string s( n , '.');
//         for(int i=0; i<n; i++) board[i] = s ;
//         solve(0 , n ) ;    
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  2nd  Method    ======>  Hash and Recursion and Backtracking
// // //  2nd  Method    ======>  Hash and Recursion and Backtracking
// // //  2nd  Method    ======>  Hash and Recursion and Backtracking
// //                             
// // //   Time Complexity   = O(n*n) // n for col and n for row and o(1) for checking use hashing   
// //                              
// // //   Space Complexity  = O(n*n + n + 2n-1 + 2n-1) = (n^2 + 5n)    
// //                               




class Solution {
public:
    vector<vector<string>>ans ;
    vector<string> board ;
    vector<int> sameRow ;
    vector<int> upperDiagonal ;
    vector<int> lowerDiagonal ;
    void solve(int col , int n )
    {
        if(col==n)
        {
            ans.push_back(board) ;
            return  ;
        }
        cout<<col<<endl;
        for(int row= 0; row<n; row++)
        {
            if(sameRow[row]==0 && lowerDiagonal[row + col]==0 && upperDiagonal[n-1 + col - row]==0 )
            {
                board[row][col] = 'Q' ;
                sameRow[row] = 1  ;
                lowerDiagonal[row + col] = 1  ;
                upperDiagonal[n-1 + col - row] = 1  ;
                cout<<row<<" ok"<<endl;
                solve(col+1 , n) ;
                cout<<row<<" no"<<endl;
                board[row][col] = '.' ;
                sameRow[row] = 0  ;
                lowerDiagonal[row + col] = 0  ;
                upperDiagonal[n-1 + col - row] = 0  ;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        board.resize(n) ;
        sameRow.resize(n,0) ;
        upperDiagonal.resize(2*n-1 ,0) ;    lowerDiagonal.resize(2*n-1 ,0) ;
        string s( n , '.');
        for(int i=0; i<n; i++) board[i] = s ;
        solve(0 , n ) ;    
        return ans ;
    }
};






































