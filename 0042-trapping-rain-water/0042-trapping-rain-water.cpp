











// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    12th   April   2024   -   Friday    .    













// class Solution {
// public:
//     int trap(vector<int>& height) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two loops(TLE TLE TLE)     TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Pre-Compute    TC = O(3n) , SC = O(2n) 
// //                     
// //                     
// // //  3rd Method  ====>  Two Pointer     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// //                           
// //                           
// // //  1st Method    ======>     Two loops(TLE TLE TLE)
// // //  1st Method    ======>     Two loops(TLE TLE TLE)
// // //  1st Method    ======>     Two loops(TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int trap(vector<int>& height) 
//     {
//         int n = height.size() ;
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             int left = INT_MIN , right = INT_MIN ;
//             for(int j=0; j<n; j++)
//             {
//                 if(j<=i) left = max(left, height[j]);
//                 if(j>=i) right = max(right, height[j]);
//             }
//             ans += min(left , right) - height[i] ;
//         }
//         return ans  ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>      Pre-Compute    
// // //  2nd Method    ======>      Pre-Compute    
// // //  2nd Method    ======>      Pre-Compute    
// //                             
// // //   Time Complexity   = O(3n)   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               

// class Solution {
// public:
//     int trap(vector<int>& height) 
//     {
//         int n = height.size() ; 
//         vector<int> leftMax(n+1,0) , rightMax(n+1,0) ;
//         for(int i=0; i<n; i++)
//         {
//             leftMax[i+1] = max( leftMax[i] , height[i] ) ;
//             rightMax[n-1-i] = max( rightMax[n-i] , height[n-1-i] ) ;
//         }
//         int ans = 0 ; 
//         for(int i=1; i<=n; i++)
//         {
//             ans += min( leftMax[i] , rightMax[i-1] ) - height[i-1] ; 
//         }
//         return ans ; 
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>     Two Pointer 
// // //  3rd Method    ======>     Two Pointer 
// // //  3rd Method    ======>     Two Pointer 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size() ; 
        int ans = 0 ; 
        int left = 0 , right = n-1 ; 
        int leftMx = height[left] , rightMx = height[right] ; 
        // int leftMx = INT_MIN , rightMx = INT_MIN ; 
        while( left < right )
        {
            if(height[left] <= height[right])
            {
                if( height[left] >=  leftMx ) leftMx = height[left] ; 
                else  ans += leftMx - height[left] ; 
                left++ ;
            }
            else
            {
                if( height[right] >=  rightMx ) rightMx = height[right] ; 
                else  ans += rightMx - height[right] ; 
                right -- ;
            }
        }
        return ans ; 
    }
};






















































