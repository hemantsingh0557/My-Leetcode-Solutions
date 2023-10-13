












// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
        
//     }
// };





















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion    TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method ( Two Ways ) ====> Simple Iteration    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion
// // //  1st Method    ======>   Simple Recursion
// // //  1st Method    ======>   Simple Recursion
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int n ; 
//     int minCost( int i , vector<int> & cost)
//     {
//         if( i >= n ) return  0 ;
//         int ans = cost[i] + minCost( i+1 , cost ) ;   
//         ans = min( ans , cost[i] + minCost( i+2 , cost )  ) ; 
//         return ans ;
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minCostClimbingStairs(vector<int>& cost) 
//     {
//         n = cost.size() ;
//         int ans = minCost( 0 , cost ) ;
//         ans = min( ans ,  minCost( 1  , cost )  ) ;
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int n ; 
//     int dp[1005] ;
//     int minCost( int i , vector<int> & cost)
//     {
//         if( i >= n ) return  0 ;
//         if( dp[i] != -1 ) return dp[i] ;  
//         int ans = cost[i] + minCost( i+1 , cost ) ;   
//         ans = min( ans , cost[i] + minCost( i+2 , cost )  ) ; 
//         return dp[i] = ans ;
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minCostClimbingStairs(vector<int>& cost) 
//     {
//         memset( dp , -1 , sizeof(dp) ) ;  
//         n = cost.size() ;
//         int ans = minCost( 0 , cost ) ;
//         ans = min( ans ,  minCost( 1  , cost )  ) ;
//         return ans ;
//     }
// };













// //                           
// //                           
// // //  3rd Method  ( Two Ways )  ======>      Simple Iteration 
// // //  3rd Method  ( Two Ways )  ======>      Simple Iteration 
// // //  3rd Method  ( Two Ways )  ======>      Simple Iteration 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// // // 3rd Method  ===>  1st way ==>  not good because we are modifying the array cost data    
// // // 3rd Method  ===>  1st way ==>  not good because we are modifying the array cost data    
// // // 3rd Method  ===>  1st way ==>  not good because we are modifying the array cost data    

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) 
//     {
//         int n = cost.size() ;   
//         for(int i=2; i<n; i++)
//         {
//             cost[i] = cost[i] + min( cost[i-1] , cost[i-2] ) ;  
//         }
//         return min( cost[n-1] , cost[n-2] ) ;    
//     }
// };





// // //  3rd Method   ====>   2nd way  ====>   without  modifying  the  array  cost  data    
// // //  3rd Method   ====>   2nd way  ====>   without  modifying  the  array  cost  data    
// // //  3rd Method   ====>   2nd way  ====>   without  modifying  the  array  cost  data    

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ; 
        int oneStep = cost[0] ;  
        int twoStep = cost[1] ;  
        for(int i=2; i<n; i++)
        {
            int minCost = cost[i] + min( oneStep , twoStep ) ; 
            oneStep = twoStep ;
            twoStep = minCost ;
        }
        return min( oneStep , twoStep ) ; 
    }
};


































