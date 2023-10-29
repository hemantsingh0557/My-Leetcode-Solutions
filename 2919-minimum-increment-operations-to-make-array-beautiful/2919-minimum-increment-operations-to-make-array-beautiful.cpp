












// class Solution {
// public:
//     long long minIncrementOperations(vector<int>& nums, int k) 
//     {
//         
//     }
// };
    















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion( TLE TLE TLE )   TC = O(3^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(3*n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> (Try to Solve ) Space Optimized DP    TC = O(n) , SC = O(1) constant 
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
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int n ; 
//     long long minOperation( int i , vector<int>& nums, int k )
//     {
//         if( i > n-3 ) return 0 ;
//         long long ans = max(0, k - nums[i]) + minOperation( i+1 , nums , k ) ;
//         ans = min( ans ,  max(0, k - nums[i+1]) + minOperation( i+2 , nums , k ) ) ; 
//         ans = min( ans ,  max(0, k - nums[i+2]) + minOperation( i+3 , nums , k ) ) ; 
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     long long minIncrementOperations(vector<int>& nums, int k) 
//     {
//         n = nums.size() ; 
//         long long ans = minOperation( 0 , nums , k ) ;
//         return ans ; 
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// //                             
// // //   Time Complexity   = O(3*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    int n ; 
    long long dp[100005] ; 
    long long minOperation( int i , vector<int>& nums, int k )
    {
        if( i > n-3 ) return 0 ;
        if( dp[i] != -1 ) return dp[i] ; 
        long long ans = max(0, k - nums[i]) + minOperation( i+1 , nums , k ) ;
        ans = min( ans ,  max(0, k - nums[i+1]) + minOperation( i+2 , nums , k ) ) ; 
        ans = min( ans ,  max(0, k - nums[i+2]) + minOperation( i+3 , nums , k ) ) ; 
        return dp[i] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    long long minIncrementOperations(vector<int>& nums, int k) 
    {
        memset(dp , -1 , sizeof(dp) ) ; 
        n = nums.size() ; 
        long long ans = minOperation( 0 , nums , k ) ;
        return ans ; 
    }
};

















// //                           
// //                           
// // //  3rd Method    ======>   (Try to Solve ) Space Optimized DP  
// // //  3rd Method    ======>   (Try to Solve ) Space Optimized DP  
// // //  3rd Method    ======>   (Try to Solve ) Space Optimized DP  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     long long minIncrementOperations(vector<int>& nums, int k) 
//     {
//         
//     }
// };
    





































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    













