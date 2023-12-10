






// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
//     }
// };










// //
// // // // // // //  Solve Using Only One  Method  ===>     
// // // // // // //  Solve Using Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Transpose by Iteration    TC = O(n*m) , SC = O(1) constant
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Transpose by Iteration 
// // //  1st Method    ======>   Simple Transpose by Iteration 
// // //  1st Method    ======>   Simple Transpose by Iteration 
// //                             
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int n = matrix.size()  , m = matrix[0].size() ; 
        vector<vector<int>> ans(m , vector<int>(n,0)) ;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans[j][i] = matrix[i][j] ;
            }
        }
        return ans  ; 
    }
};

























