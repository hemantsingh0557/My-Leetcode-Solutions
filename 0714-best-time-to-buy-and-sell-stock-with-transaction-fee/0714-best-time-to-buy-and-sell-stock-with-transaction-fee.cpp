

// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // //  1st Method(Two way)  ====> (Very Very Bad) Both(TLE TLE TLE)   See below TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method  ====> Simple Recursion(TLE TLE TLE)    TC = O(2^n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> DP Memoization    TC = O(2*n) , SC = O(2*n)  
// //                     
// //                     
// // //  4th Method  ====> Simple Iteration(Not understood properly)   TC = O(n) , SC = O(1) constant 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maxProfit(vector<int>& prices, int fee) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
// // //  1st Method    ======>   (Very Very Bad due to for loop ) Both(TLE TLE TLE)   
                              


// // //  1st  Method   ====>      1st way   =====>                                 
// // //  1st  Method   ====>      1st way   =====>                                 
// // //  1st  Method   ====>      1st way   =====>                                 
// //                             
// // //   Time Complexity   = O((n^2)  * (2^n) )   Too High Too High  Too High  Too High
// //                              
// // //   Space Complexity  = O(1)  constant   
// // 


// class Solution {
// public:
//     int n ;
//     int CalculateProfit(int i , vector<int>& prices, int fee)
//     {
//         int ans = 0 ;
//         int buy = INT_MAX ;    
//         for(int j=i; j<n; j++)
//         {
//             buy = min(buy , prices[j])  ;
//             int sell = prices[j] ;
//             if(sell>buy) ans = max(ans , (sell-buy-fee) + CalculateProfit(j , prices , fee) ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxProfit(vector<int>& prices, int fee) 
//     {
//         n = prices.size() ;
//         return CalculateProfit(0 , prices , fee) ;
//     }
// };





// // //  1st  Method   ====>     2nd  way   =====>                                 
// // //  1st  Method   ====>     2nd  way   =====>                                 
// // //  1st  Method   ====>     2nd  way   =====>                                 
// //                             
// // //   Time Complexity   = O((n^2 ) * (2*n) ) == O(n^3)  very High  very High  very High
// //                              
// // //   Space Complexity  = O(1)  constant   
// // 


// class Solution {
// public:
//     int n ;
//     int dp[60000] ;
//     int CalculateProfit(int i , vector<int>& prices, int fee)
//     {
//         if(i>=n ) return 0 ;
//         if(dp[i] != -1) return dp[i] ;
//         int ans = 0 ;
//         int buy = INT_MAX ;    
//         for(int j=i; j<n; j++)
//         {
//             buy = min(buy , prices[j])  ;
//             int sell = prices[j] ;
//             if(sell>buy) 
//             {
//                 dp[j] =  CalculateProfit(j , prices , fee)  ;   
//                 ans = max(ans , (sell-buy-fee) + dp[j] ) ;
//             }
//         }
//         return dp[i] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxProfit(vector<int>& prices, int fee) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         n = prices.size() ;
//         return CalculateProfit(0 , prices , fee) ;
//     }
// };
















// //                           
// //                           
// // //  2nd Method    ======>    Simple Recursion(TLE TLE TLE)  
// // //  2nd Method    ======>    Simple Recursion(TLE TLE TLE)  
// // //  2nd Method    ======>    Simple Recursion(TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int n ;
//     int dp[60000][2] ;
//     int CalculateProfit(int i , int buy , vector<int>& prices, int fee)
//     {
//         if(i>=n) return 0 ;
//         int ans = 0 ;
//         if(buy)
//         {
//             ans =  CalculateProfit(i+1 , 1 , prices , fee)  ;         // not buy 
//             ans = max(ans ,  -prices[i] + CalculateProfit(i+1 , 0 , prices , fee) ) ;   // buy
//         }
//         else
//         {
//             ans =  CalculateProfit(i+1 , 0 , prices , fee)  ;       // not sell
//             ans = max(ans ,  prices[i]-fee + CalculateProfit(i+1 , 1 , prices , fee) ) ;  // sell
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxProfit(vector<int>& prices, int fee) 
//     {
//         n = prices.size() ;
//         return CalculateProfit(0 , 1 , prices , fee) ;
//     }
// };











// //                           
// //                           
// // //  3rd Method    ======>   DP Memoization  
// // //  3rd Method    ======>   DP Memoization  
// // //  3rd Method    ======>   DP Memoization  
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               





// class Solution {
// public:
//     int n ;
//     int dp[60000][2] ;
//     int CalculateProfit(int i , int buy , vector<int>& prices, int fee)
//     {
//         if(i>=n) return 0 ;
//         if(dp[i][buy] != -1 ) return dp[i][buy] ;
//         int ans = 0 ;
//         if(buy)
//         {
//             ans =  CalculateProfit(i+1 , 1 , prices , fee)  ;         // not buy 
//             ans = max(ans ,  -prices[i] + CalculateProfit(i+1 , 0 , prices , fee) ) ;   // buy
//         }
//         else
//         {
//             ans =  CalculateProfit(i+1 , 0 , prices , fee)  ;       // not sell
//             ans = max(ans ,  prices[i]-fee + CalculateProfit(i+1 , 1 , prices , fee) ) ;  // sell
//         }
//         return dp[i][buy] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxProfit(vector<int>& prices, int fee) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         n = prices.size() ;
//         return CalculateProfit(0 , 1 , prices , fee) ;
//     }
// };











// //                           
// //                           
// // //  4th  Method    ======>   Simple Iteration(Not understood properly)  
// // //  4th  Method    ======>   Simple Iteration(Not understood properly)  
// // //  4th  Method    ======>   Simple Iteration(Not understood properly)  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy = INT_MIN;
        int sell = 0;

        for (int price : prices) {
            buy = max(buy, sell - price);
            sell = max(sell, buy + price - fee);
        }

        return sell;
    }
};














































