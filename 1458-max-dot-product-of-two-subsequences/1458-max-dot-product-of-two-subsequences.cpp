












// class Solution {
// public:
//     int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion(TLE TLE TLE)   TC = O(3^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n1*n2) , SC = O(n1*n2) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int n1 , n2  ;
//     int findMaxProduct(int i , int j , vector<int>& nums1, vector<int>& nums2 )
//     {
//         if( i==n1 || j==n2 ) return -1e9 ;  
//         int ans = findMaxProduct( i+1 , j , nums1 , nums2 ) ; 
//         ans = max( ans , findMaxProduct( i , j+1 , nums1 , nums2 ) ) ;
//         ans = max(ans, nums1[i] * nums2[j] + max(0, findMaxProduct(i+1, j+1, nums1, nums2)) ) ;
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxDotProduct(vector<int>& nums1, vector<int>& nums2) 
//     {
//         n1 = nums1.size()  , n2 = nums2.size() ; 
//         int ans = findMaxProduct( 0 , 0 , nums1 , nums2 ) ;  
//         return  ans <= -1e9 ? -1 : ans  ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n1*n2)   
// //                              
// // //   Space Complexity  = O(n1*n2)   
// //                               

class Solution {
public:
    int n1 , n2  ;
    int dp[505][505] ;
    int findMaxProduct(int i , int j , vector<int>& nums1, vector<int>& nums2 )
    {
        if( i==n1 || j==n2 ) return -1e9 ;  
        if( dp[i][j] != -1 ) return dp[i][j] ;
        int ans = findMaxProduct( i+1 , j , nums1 , nums2 ) ; 
        ans = max( ans , findMaxProduct( i , j+1 , nums1 , nums2 ) ) ;
        ans = max(ans, nums1[i] * nums2[j] + max(0, findMaxProduct(i+1, j+1, nums1, nums2)) ) ;
        return dp[i][j] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n1 = nums1.size()  , n2 = nums2.size() ; 
        int ans = findMaxProduct( 0 , 0 , nums1 , nums2 ) ;  
        return  ans <= -1e9 ? -1 : ans  ;
    }
};

















































