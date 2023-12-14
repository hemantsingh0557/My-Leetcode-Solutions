



















// class Solution {
// public:
//     int numSpecial(vector<vector<int>>& mat) {
        
//     }
// };








// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Precompute ones   TC = O(m*n) , SC = O(m+n) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Precompute ones 
// // //  1st Method    ======>    Simple Precompute ones 
// // //  1st Method    ======>    Simple Precompute ones 
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m+n)   
// //                               




class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int m = mat.size()  , n = mat[0].size() ;
        vector<int> row(m,0) ;
        vector<int> col(n,0) ;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( mat[i][j] ) row[i]++ , col[j]++ ;
            }
        }
        int ans  = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( mat[i][j] && row[i] ==1 && col[j] ==1 ) ans ++ ;  
            }
        }
        return ans ;
    }
};





























