











// class Solution {
// public:
//     vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
//     }
// };







// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Array Counter   TC = O(m*n) , SC = O(m+n) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Array Counter
// // //  1st Method    ======>    Simple Array Counter
// // //  1st Method    ======>    Simple Array Counter
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m+n)   
// //                               

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int m = grid.size() , n = grid[0].size() ; 
        vector<int> row(m,0) ;
        vector<int> col(n,0) ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( grid[i][j] ) row[i]++ , col[j]++ ; 
            }
        }
        vector<vector<int>> diff( m , vector<int>(n,0)) ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int onesRow = row[i] ;  
                int onesCol = col[j] ;  
                int zerosRow = m - row[i] ;  
                int zerosCol = n - col[j] ;  
                diff[i][j] = onesRow + onesCol - zerosRow - zerosCol  ; 
            }
        }
        return diff ;  
    }
};





























