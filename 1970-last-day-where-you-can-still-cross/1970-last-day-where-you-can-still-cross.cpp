






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method ==> Simple Iteration and DFS (TLE TLE TLE)  TC = O(row * col * (row*col) ) , SC = O(row * col)
// //                      
// //                      
// // 2nd Method ==> Binary Search and DFS     TC = O(row * col * log(row*col) ) , SC = O(row * col)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method ( Two Ways )   ======>    Simple Iteration and DFS (TLE TLE TLE)  
// // //  1st Method ( Two Ways )   ======>    Simple Iteration and DFS (TLE TLE TLE)  
// // //  1st Method ( Two Ways )   ======>    Simple Iteration and DFS (TLE TLE TLE)  
// //            
// //                 
// // //   Time Complexity   = O(row * col * (row*col))  
// //                              
// // //   Space Complexity  = O(row * col)
// //                               





// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     bool dfs(int i , int j , vector<vector<int>> mat)
//     {
//         int row = mat.size() , col = mat[0].size() ; 
//         if(i>=row || j>=col || i<0 || j<0) return false ;
//         if(mat[i][j] != 0) return false ;
//         if(i==row-1 && mat[i][j]==0) return true ; 
//         mat[i][j] = 2 ;
//         bool ans = false ;
//         ans |= dfs(i-1 , j , mat) ;
//         ans |= dfs(i+1 , j , mat) ;
//         ans |= dfs(i , j-1 , mat) ;
//         ans |= dfs(i , j+1 , mat) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int latestDayToCross(int row, int col, vector<vector<int>>& cells) 
//     {
//         vector<vector<int>> mat(row , vector<int>(col ,0)) ;
//         int i ;   
//         for( i=0; i<row*col; i++)
//         {
//             int ithDayRow = cells[i][0] ;
//             int ithDayCol = cells[i][1] ;
//             mat[ithDayRow-1][ithDayCol-1] = 1 ;
//             bool temp = false ;
//             for(int j=0; j<col; j++)
//             {
//                 if(mat[0][j]==0)  temp = dfs(0 , j ,mat) ;
//                 if(temp) break ;
//             }
//             if(temp==false) return i ;
//         }
//         return  i ;
//     }
// };





// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 



// class Solution {
// public:
//     bool dfs(int i , int j , vector<vector<int>> mat)
//     {
//         int row = mat.size() , col = mat[0].size() ; 
//         if(i>=row || j>=col || i<0 || j<0) return false ;
//         if(mat[i][j] != 0) return false ;
//         if(i==row-1 && mat[i][j]==0) return true ; 
//         mat[i][j] = 2 ;
//         bool ans = false ;
//         ans |= dfs(i-1 , j , mat) ;
//         if(ans) return true  ;
//         ans |= dfs(i+1 , j , mat) ;
//         if(ans) return true  ;
//         ans |= dfs(i , j-1 , mat) ;
//         if(ans) return true  ;
//         ans |= dfs(i , j+1 , mat) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int latestDayToCross(int row, int col, vector<vector<int>>& cells) 
//     {
//         vector<vector<int>> mat(row , vector<int>(col ,0)) ;
//         int i ;   
//         for( i=0; i<row*col; i++)
//         {
//             int ithDayRow = cells[i][0] ;
//             int ithDayCol = cells[i][1] ;
//             mat[ithDayRow-1][ithDayCol-1] = 1 ;
//             bool temp = false ;
//             for(int j=0; j<col; j++)
//             {
//                 if(mat[0][j]==0)  temp = dfs(0 , j ,mat) ;
//                 if(temp) break ;
//             }
//             if(temp==false) return i ;
//         }
//         return  i ;
//     }
// };















// //                           
// //                           
// // //  2nd Method  ( Two Ways )  ======>   Binary Search and DFS  
// // //  2nd Method  ( Two Ways )  ======>   Binary Search and DFS  
// // //  2nd Method  ( Two Ways )  ======>   Binary Search and DFS  
// //                             
// // //   Time Complexity   = O(row * col * log(row*col))    
// //                              
// // //   Space Complexity  = O(row * col) 
// //                               





// // //   2nd   Method   ====>      1st   way   =====>                                 
// // //   2nd   Method   ====>      1st   way   =====>                                 
// // //   2nd   Method   ====>      1st   way   =====>                                 



// class Solution {
// public:
//     bool dfs(int i , int j , vector<vector<int>>& mat)
//     {
//         int row = mat.size() , col = mat[0].size() ; 
//         if(i>=row || j>=col || i<0 || j<0) return false ;
//         if(i==row-1 && mat[i][j]==0) return true ; 
//         if(mat[i][j]==1) return false ;
//         if(mat[i][j]==2) return false ;
//         mat[i][j] = 2 ;
//         bool ans = false ;
//         ans |= dfs(i-1 , j , mat) ;
//         if(ans) return true ;
//         ans |= dfs(i+1 , j , mat) ;
//         if(ans) return true ;
//         ans |= dfs(i , j-1 , mat) ;
//         if(ans) return true ;
//         ans |= dfs(i , j+1 , mat) ;
//         return ans ;
//     }
//     bool isPossible(int day , int row , int col , vector<vector<int>>& cells )
//     {
//         vector<vector<int>> mat(row , vector<int>(col ,0)) ;
//         for(int i=0; i<day; i++) mat[cells[i][0]-1][cells[i][1]-1] = 1 ;
//         for(int j=0; j<col; j++)
//         {
//             if(mat[0][j]==0 && dfs(0,j , mat)) return true ;
//         }
//         return false ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int latestDayToCross(int row, int col, vector<vector<int>>& cells) 
//     {
//         int lo=1 , hi = row*col ;
//         while(hi-lo>1)
//         {
//             int mid = (hi+lo)/2 ;
//             if(isPossible( mid , row , col , cells )) lo =  mid ;
//             else hi = mid-1 ;
//         }
//         if(isPossible( hi , row , col , cells))return hi ;
//         return  lo ;
//     }
// };








// // //   2nd   Method   ====>      2nd    way   =====>                                 
// // //   2nd   Method   ====>      2nd    way   =====>                                 
// // //   2nd   Method   ====>      2nd    way   =====>                                 



class Solution {
public:
    vector<pair<int,int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool dfs(int i , int j , int row , int col , vector<vector<int>>& mat)
    {
        if(i>=row || j>=col || i<0 || j<0) return false ;
        if(mat[i][j] != 0) return false ;
        if(i==row-1 ) return true ; 
        mat[i][j] = -1 ;
        for(auto move :movements)
        {
            int x = i + move.first ;
            int y = j + move.second ;
            if(dfs(x,y , row , col , mat)) return true ;
        }
        return false ;
    }
    bool isPossible(int day , int row , int col , vector<vector<int>>& cells )
    {
        vector<vector<int>> mat(row , vector<int>(col ,0)) ;
        for(int i=0; i<day; i++) mat[cells[i][0]-1][cells[i][1]-1] = 1 ;
        for(int j=0; j<col; j++)
        {
            if(mat[0][j]==0 && dfs(0,j , row , col , mat)) return true ;
        }
        return false ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) 
    {
        int lo=1 , hi = row*col ;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2 ;
            if(isPossible( mid , row , col , cells )) lo =  mid ;
            else hi = mid-1 ;
        }
        if(isPossible( hi , row , col , cells))return hi ;
        return  lo ;
    }
};































