








// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//     }
// };








































//
// // // // // // //  Solve Using  Three  Method  ===>
// 
//
// // // //    1st Method    ======> (Not Recommended) Noraml     TC = O(m*n)  ,  SC = O(1) constant 
// // 
// //
// // // //    2nd Method    ======>   Binary Search     TC = O(log(m)) + O(log(n)) , SC = O(1) constant 
// //
// //
// // // //    3rd Method    ======>   Binary Search     TC = O(log(m*n)) , SC = O(1) constant 
// //
// //
// // // Don't know 2nd and 3rd method have same time compplexity or not ??   (not confirmed)
// // // Don't know 2nd and 3rd method have same time compplexity or not ??   (not confirmed)
// // // Don't know 2nd and 3rd method have same time compplexity or not ??   (not confirmed)
// //
// //

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// // // //    1st Method    ======>    (Not Recommended)        Noraml    
// // // //    1st Method    ======>    (Not Recommended)        Noraml    
// // // //    1st Method    ======>    (Not Recommended)        Noraml    
// // // //    1st Method    ======>    (Not Recommended)        Noraml    
// //
// //
// // //   Time Complexity   = O(m*n)
// //
// //
// // //   Space Complexity  = O(1)
// // 

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) 
//     {
//         int m = matrix.size()    ,   n = matrix[0].size() ;
//         for(int i=0; i<m; i++)
//         {
//             if(matrix[i][n-1]==target) return true ;
//             else if(matrix[i][n-1]>target)
//             {
//                 for(int j=0; j<n; j++)
//                 {
//                     if(matrix[i][j]==target) return true  ;
//                 }
//             }
//         }
//         return false ;
//     }
// };



//////////////////      or      or      or      or       or       or      ////////////////////////
//////////////////      or      or      or      or       or       or      ////////////////////////
//////////////////      or      or      or      or       or       or      ////////////////////////



// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) 
//     {
//         int m = matrix.size()    ,   n = matrix[0].size() ;
//         int ind = 0 ;
//         for(int i=0; i<m; i++)
//         {
//             if(matrix[i][n-1]>=target) 
//             {
//                 ind = i ; 
//                 break;
//             } 
//         }
//         for(int j=0; j<n; j++)
//         {
//             if(matrix[ind][j]==target)  return true  ;
//         }
//         return false ;
//     }
// };













// // // //    2nd  Method    ======>    Binary Search      
// // // //    2nd  Method    ======>    Binary Search      
// // // //    2nd  Method    ======>    Binary Search      
// // // //    2nd  Method    ======>    Binary Search      
// //
// //
// // //   Time Complexity   = O(log(m)) + O(log(n)) 
// //
// //
// // //   Space Complexity  = O(1)
// // 




// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) 
//     {
//         int m = matrix.size()    ,   n = matrix[0].size() ;
//         int ind = -1 ;
//         int low = 0 , mid , high = m-1 ;
//         while(high-low>1)
//         {
//             mid = (low + high)/2  ;
//             if(matrix[mid][n-1] < target) low = mid+1 ;
//             else high = mid ;
//         }
//         if(matrix[low][n-1]>=target) ind = low ;
//         else if(matrix[high][n-1]>=target) ind = high ;
//         if(ind==-1) return false  ;  // // check if any row last element which is >= target found or not
//         low = 0 , mid , high = n-1 ;
//         while(high-low>1)
//         {
//             mid = (low + high)/2  ;
//             if(matrix[ind][mid]<target) low = mid+1 ;
//             else high = mid ;
//         }
//         if(matrix[ind][low]==target) return true ;
//         else if(matrix[ind][high]==target) return true ;
//         return false ;
//     }
// };













// // // //    3rd  Method    ======>    Binary Search      
// // // //    3rd  Method    ======>    Binary Search      
// // // //    3rd  Method    ======>    Binary Search      
// // // //    3rd  Method    ======>    Binary Search      
// //
// //
// // //   Time Complexity   = O(log(m*n)) 
// //
// //
// // //   Space Complexity  = O(1)
// // 





class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size()    ,   n = matrix[0].size() ;
        int ind = -1 ;
        int low = 0 , mid , high = (m*n )-1 ;
        while(high-low>1)
        {
            mid = (low + high)/2  ;
            if(matrix[mid/n][mid%n] < target) low = mid+1 ;
            else high = mid ;
        }
        if(matrix[low/n][low%n]==target) return true ;
        else if(matrix[high/n][high%n]==target) return true ;    
        return false ;
    }
};



















































