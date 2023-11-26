















// class Solution {
// public:
//     int largestSubmatrix(vector<vector<int>>& matrix) 
//     {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple iteration and math    TC = O(m*n*log(n))  , SC = O(m*n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple iteration and math 
// // //  1st Method    ======>   Simple iteration and math 
// // //  1st Method    ======>   Simple iteration and math 
// //                             
// // //   Time Complexity   = O(m*n*log(n))   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size()  , n = matrix[0].size() ;
        int ans = 0 ;  
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( i > 0 && matrix[i][j] != 0) matrix[i][j] += matrix[i-1][j] ; 
            }
            vector<int> temp = matrix[i]  ;
            //
            // sort(temp.begin() , temp.end() , greater() ) ;
            //
            sort(temp.begin() , temp.end() ) ;
            reverse(temp.begin() , temp.end() ) ;
            //
            for(int j=0; j<n; j++)
            {
                ans = max( ans , temp[j] * (j+1) ) ;
            }
        }
        return ans ;
    }
};







































