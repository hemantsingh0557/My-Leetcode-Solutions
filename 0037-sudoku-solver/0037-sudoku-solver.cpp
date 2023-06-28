




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> (very Bad) vector map and Backtracking    TC = O() , SC = O() 
// //                      
// // // // // logic is same for both
// //                      
// //
// //                      //  here is m is no of empty cell
// // //  2nd Method  ====> Simple Recursion and Backtracking    TC = O(9^m)  , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     void solveSudoku(vector<vector<char>>& board)   {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    (very Bad) vector map and Backtracking  
// // //  1st Method    ======>    (very Bad) vector map and Backtracking  
// // //  1st Method    ======>    (very Bad) vector map and Backtracking  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


// class Solution {
// public:
//     int n ;
//     vector<vector<char>> ans ;
//     bool solve(vector<vector<char>>& board , vector<set<char>>& row , vector<set<char>> &col , vector<set<char>>& grid)
//     {
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 int val ;
//                 for( val=1 ; val<=9 ; val++)
//                 {
//                     if(board[i][j] == '.' ) 
//                     {
//                         if(!row[i].count(val+'0') && !col[j].count(val+'0') )
//                         {
//                             int temp ;
//                             if(i<3 )
//                             {
//                                 if(j<3) temp =1 ;
//                                 if(j>=3 && j<6)  temp =2 ;  
//                                 if(j>=6)  temp =3 ;
//                             }
//                             else if(i>=3 && i<6 )
//                             {
//                                 if(j<3) temp =4 ;  
//                                 if(j>=3 && j<6)  temp =5 ;
//                                 if(j>=6)   temp =6 ;
//                             }
//                             else if(i>=6 )
//                             {
//                                 if(j<3) temp =7 ;  
//                                 if(j>=3 && j<6)  temp =8 ; 
//                                 if(j>=6)  temp =9 ;
//                             }
//                             if(! grid[temp].count(val+'0')) 
//                             {
//                                 board[i][j] = val + '0' ;
//                                 row[i].insert(val+'0') ;
//                                 col[j].insert(val+'0') ;
//                                 grid[temp].insert(val+'0') ; 
//                                 if( !solve(board , row , col , grid ) ) 
//                                 {
//                                     row[i].erase(val+'0') ;
//                                     col[j].erase(val+'0') ;
//                                     grid[temp].erase(val+'0') ; 
//                                     board[i][j] ='.' ;
//                                 }
//                             }
//                         }
//                     }
//                 }
//                 if(board[i][j]=='.' && val==10) return  false ;
//             }
//         }
//         return true ;
//     }
//     void solveSudoku(vector<vector<char>>& board) 
//     {
//         n = board.size() ;
//         vector<set<char>> row(10) ;
//         vector<set<char>> col(10) ;
//         vector<set<char>> grid(10) ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 row[i].insert(board[i][j]) ;
//                 col[j].insert(board[i][j]) ;
//                 if(i<3 && board[i][j] != '.'  )
//                 {
//                     if(j<3) grid[1].insert(board[i][j]) ;   
//                     else if(j>=3 && j<6)  grid[2].insert(board[i][j]) ;  
//                     else if(j>=6)   grid[3].insert(board[i][j]) ; 
//                 }
//                 else if(i>=3 && i<6  && board[i][j] != '.' )
//                 {
//                     if(j<3) grid[4].insert(board[i][j]) ;   
//                     else if(j>=3 && j<6)  grid[5].insert(board[i][j]) ;  
//                     else if(j>=6)   grid[6].insert(board[i][j]) ; 
//                 }
//                 else if(i>=6  && board[i][j] != '.'  )
//                 {
//                     if(j<3) grid[7].insert(board[i][j]) ;   
//                     else if(j>=3 && j<6)  grid[8].insert(board[i][j]) ;  
//                     else if(j>=6)   grid[9].insert(board[i][j]) ; 
//                 }
//             }
//         }
//         int check = solve( board , row , col , grid ) ;
//     }
// };


















// //                           
// //                           
// // //  2nd Method    ======>   Simple Recursion and Backtracking   
// // //  2nd Method    ======>   Simple Recursion and Backtracking   
// // //  2nd Method    ======>   Simple Recursion and Backtracking   
// //                             
// // //   Time Complexity   = O(9^m)    here is m is no of empty cell
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int n ;
    bool isValid(int row , int col , char c , vector<vector<char>>& board )
    {
        for(int i=0; i<9; i++)
        {
            if(board[i][col]==c) return false ;
            if(board[row][i]==c) return false ;
            if(board[3*(row/3) + i/3][3* (col/3) + i%3]==c) return false ;
        }
        return true ;
    }
    bool solve(vector<vector<char>>& board )
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j]=='.')
                {
                    for( char val='1' ; val<='9' ; val++)
                    {
                        if(isValid( i , j , val  , board) ) 
                        {
                            board[i][j] = val ; 
                            if( solve(board)==true ) return true ;
                            else board[i][j] = '.'  ;
                        }
                    }
                    return  false ;
                }
            }
        }
        return true ;
    }
    void solveSudoku(vector<vector<char>>& board) 
    {
        n = board.size() ;
        // int check = solve( board ) ;
        solve( board ) ;
    }
};

































