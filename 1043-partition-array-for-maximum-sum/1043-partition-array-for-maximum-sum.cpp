












// class Solution {
// public:
//     int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion( TLE TLE TLE )   TC = O() , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n*k) , SC = O(n) 
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE )
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE )
// // //  1st Method    ======>   Simple Recursion( TLE TLE TLE )
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int n ;
//     int sumAfterPartition( int i , int k , vector<int>& arr)
//     {
//         if( i >= n ) return 0 ;
//         int ans = 0 ,  mx = 0 ;
//         for(int j=1; j<=min(k , n-i); j++)
//         {
//             mx = max( mx , arr[i+j-1] ) ;
//             int sum = mx * j + sumAfterPartition( i+j , k , arr ) ; 
//             ans = max( ans , sum ) ;
//         }
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxSumAfterPartitioning(vector<int>& arr, int k) 
//     {
//         n = arr.size() ; 
//         int ans = sumAfterPartition( 0 , k , arr ) ; 
//         cout<<ans<<endl;
//         return ans ; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization   
// // //  2nd Method    ======>   DP Memoization   
// // //  2nd Method    ======>   DP Memoization   
// //                             
// // //   Time Complexity   = O(n*k)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int n ;
    int dp[505][505] ; 
    int sumAfterPartition( int i , int k , vector<int>& arr)
    {
        if( i >= n ) return 0 ;
        if( dp[i][k] != -1 ) return dp[i][k]  ;  
        int ans = 0 ,  mx = 0 ;
        for(int j=1; j<=min(k , n-i); j++)
        {
            mx = max( mx , arr[i+j-1] ) ;
            int sum = mx * j + sumAfterPartition( i+j , k , arr ) ; 
            ans = max( ans , sum ) ;
        }
        return dp[i][k] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        memset(dp , -1 , sizeof(dp) ) ; 
        n = arr.size() ; 
        int ans = sumAfterPartition( 0 , k , arr ) ; 
        cout<<ans<<endl;
        return ans ; 
    }
};

































