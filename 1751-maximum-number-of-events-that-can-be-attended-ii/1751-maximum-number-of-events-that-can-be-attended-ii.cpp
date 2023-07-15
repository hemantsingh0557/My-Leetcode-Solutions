





// // //  try to solve this by binary search or using upper_bound()     ====>
// // //  try to solve this by binary search or using upper_bound()     ====>
// // //  try to solve this by binary search or using upper_bound()     ====>
// // //  try to solve this by binary search or using upper_bound()     ====>
// // //  try to solve this by binary search or using upper_bound()     ====>





// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //      // //   n is size of events , t is no of prev states or prev index , k is no of max events
// //
// // //  1st Method (Two Ways)  ====>  Simple Recursion(TLE TLE TLE)   TC = O() , SC = O()  see below 
// //                      
// //                      
// // //  2nd Method (Two Ways) ====> DP Memoization    TC = O( ) , SC = O()  see below 
// //                     
// //                     
// // //  3rd Method  ====> 2- DP Memoization    TC = O(n*(k+log(n))) , SC = O(n*k) 
// //                     
// //     
// //
// // // //  Also see the wrong approach of 3rd method  at the last
// // // //  Also see the wrong approach of 3rd method  at the last
// // // //  Also see the wrong approach of 3rd method  at the last
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maxValue(vector<vector<int>>& events, int k) {
        
//     }
// };






/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)  
// //                           
                              



// // //  1st  Method   ====>      1st way   =====>    Simple Recursion with option take or not take                             
// // //  1st  Method   ====>      1st way   =====>    Simple Recursion with option take or not take                             
// // //  1st  Method   ====>      1st way   =====>    Simple Recursion with option take or not take                             
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) conatant  
// // 


// class Solution {
// public:
//     int n  ;
//     int calculateValue(int i , int prev , int k , vector<vector<int>>& events )
//     {
//         if(i==n) return 0 ;
//         if(k==0) return 0 ;
//         int ans = 0 ;
//         ans = max(ans ,  calculateValue(i+1 , prev , k , events) ) ;
//         int value = events[i][2] ;
//         if(prev==-1 || events[prev][1]<events[i][0])
//         ans = max(ans ,  value + calculateValue(i+1 , i , k-1 , events) ) ;
//         return ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxValue(vector<vector<int>>& events, int k) 
//     {
//         n = events.size() ;
//         sort(events.begin() , events.end()) ;
//         int ans = calculateValue(0 , -1 ,  k , events) ;  
//         return ans ;  
//     }
// };




// // //  1st  Method   ====>      2nd  way   =====>   Simple Recursion with linear search                               
// // //  1st  Method   ====>      2nd  way   =====>   Simple Recursion with linear search                               
// // //  1st  Method   ====>      2nd  way   =====>   Simple Recursion with linear search                               
// //                             
// // //   Time Complexity   = O(2^n * n)   
// //                              
// // //   Space Complexity  = O(1) constant   
// // 


// class Solution {
// public:
//     int n  ;
//     int calculateValue(int i , int k , vector<vector<int>>& events )
//     {
//         if(i==n) return 0 ;
//         if(k==0) return 0 ;
//         int ans = 0 ;
//         ans = max(ans ,  calculateValue(i+1 , k , events) ) ;
//         int j = i+1 ;
//         for( ; j<n; j++)  
//         if(events[j][0] > events[i][1]) break;
//         ans = max(ans ,  events[i][2] + calculateValue(j , k-1 , events) ) ;
//         return ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxValue(vector<vector<int>>& events, int k) 
//     {
//         n = events.size() ;
//         sort(events.begin() , events.end()) ;
//         int ans = calculateValue(0 , k , events) ;  
//         return ans ;  
//     }
// };













// //                           
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// // //  2nd Method    ======>   DP Memoization 
// //                           




// // //   2nd Method   ====>      1st way   =====>   3-DP Memoization with map                              
// // //   2nd Method   ====>      1st way   =====>   3-DP Memoization with map                              
// // //   2nd Method   ====>      1st way   =====>   3-DP Memoization with map                              
// //
// //      // //   n is size of events , t is no of prev states or prev index , k is no of max events
// //                             
// // //   Time Complexity   = O( n*k*log(n) )    (not confirmed)
// //                              
// // //   Space Complexity  = O(n*t*k)    
// //                               



// class Solution {
// public:
//     int n  ;
//     map<pair<int,pair<int,int>>, int> dp ;
//     int calculateValue(int i , int prev , int k , vector<vector<int>>& events )
//     {
//         if(i==n) return 0 ;
//         if(k==0) return 0 ;
//         if(dp[{i,{prev,k}}] != 0 ) return dp[{i,{prev,k}}] ;
//         // // if(dp.count({i,{prev,k}}) ) return dp[{i,{prev,k}}] ;
//         int ans = 0 ;
//         ans = max(ans ,  calculateValue(i+1 , prev , k , events) ) ;
//         int value = events[i][2] ;
//         if(prev==-1 || events[prev][1]<events[i][0])
//         ans = max(ans ,  value + calculateValue(i+1 , i , k-1 , events) ) ;
//         return dp[{i,{prev,k}}] = ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxValue(vector<vector<int>>& events, int k) 
//     {
//         n = events.size() ;
//         sort(events.begin() , events.end()) ;
//         int ans = calculateValue(0 , -1 ,  k , events) ;  
//         return ans ;  
//     }
// };







//
// // //  We an also do this by DP Memoization with Binary Search
// // //  We an also do this by DP Memoization with Binary Search
// // //  We an also do this by DP Memoization with Binary Search
//
//
// // //   2nd Method   ====>     2nd  way   =====>  2-DP Memoization with linera search                            
// // //   2nd Method   ====>     2nd  way   =====>  2-DP Memoization with linera search                            
// // //   2nd Method   ====>     2nd  way   =====>  2-DP Memoization with linera search                            
// //
// //      // //   n is size of events , t is no of prev states or prev index , k is no of max events
// //                             
// // //   Time Complexity   = O( n * k  * n )    
// //                              
// // //   Space Complexity  = O(n*k)    
// //                               


// class Solution {
// public:
//     int n  ;
//     vector<vector<int>> dp ;
//     int calculateValue(int i , int k , vector<vector<int>>& events )
//     {
//         if(i==n) return 0 ;
//         if(k==0) return 0 ;
//         if(dp[i][k] != -1) return dp[i][k] ;
//         int ans = 0 ;
//         ans = max(ans ,  calculateValue(i+1 , k , events) ) ;
//         int j = i+1 ;
//         for( ; j<n; j++)  
//         if(events[j][0] > events[i][1]) break;
//         ans = max(ans ,  events[i][2] + calculateValue(j , k-1 , events) ) ;
//         return dp[i][k] = ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxValue(vector<vector<int>>& events, int k) 
//     {
//         n = events.size() ;
//         dp.resize(n+5 , vector<int>(k+5,-1)) ;
//         sort(events.begin() , events.end()) ;
//         int ans = calculateValue(0 , k , events) ;  
//         return ans ;  
//     }
// };

















// //                           
// //                           
// // //  3rd Method    ======>   2- DP Memoization
// // //  3rd Method    ======>   2- DP Memoization
// // //  3rd Method    ======>   2- DP Memoization
// //                             
// // //   Time Complexity   = O( nlog(n) + n*k ) == O(n*(k+log(n)))   
// //                              
// // //   Space Complexity  = O(n*k)   
// //                               


// // // //  Also see the wrong approach of 3rd method  after this
// // // //  Also see the wrong approach of 3rd method  after this
// // // //  Also see the wrong approach of 3rd method  after this


class Solution {
public:
    int n  ;
    int calculateValue(int i , int prev , int ct , int k , vector<vector<int>>& events  , vector<vector<int>>& dp)
    {
        if(i==n) return 0 ;
        if(k==ct) return 0 ;
        if(prev !=-1 && events[prev][1]>=events[i][0])  return  calculateValue(i+1 , prev , ct , k , events , dp) ;
        if(dp[i][ct] != -1 ) return dp[i][ct] ;
        int ans = 0 ;
        ans = max(ans ,  calculateValue(i+1 , prev , ct ,  k , events, dp) ) ;
        int value = events[i][2] ;
        ans = max(ans ,  value + calculateValue(i+1 , i , ct+1 , k , events , dp) ) ;
        return dp[i][ct] = ans ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maxValue(vector<vector<int>>& events, int k) 
    {
        n = events.size() ;
        sort(events.begin() , events.end()) ;
        vector<vector<int>> dp(n+5 , vector<int>(k+5,-1)) ;
        int ans = calculateValue(0 , -1 , 0 ,  k , events , dp ) ;  
        return ans ;  
    }
};








//
//
// // // // // // // // wrong approach for 3rd method  ====>
// // // // // // // // wrong approach for 3rd method  ====>
// // // // // // // // wrong approach for 3rd method  ====>
//
//
// class Solution {
// public:
//     int n  ;
//     int calculateValue(int i , int prev , int ct , int k , vector<vector<int>>& events  , vector<vector<int>>& dp)
//     {
//         if(i==n) return 0 ;
//         if(k==ct) return 0 ;
//         if(dp[i][ct] != -1 ) return dp[i][ct] ;
//         //  here we return dp[i][ct] if it is not -1 but there is a case 
//         // where dp[i][ct] is not -1  but but but  events[prev][1]>=events[i][0] when prev != -1
//         // then in this case answer will be wrong so we need to check before it as in the above corrected code
//         //
//         //
//         int ans = 0 ;
//         ans = max(ans ,  calculateValue(i+1 , prev , ct ,  k , events, dp) ) ;
//         int value = events[i][2] ;
//         if(prev ==-1 || events[prev][1]<events[i][0]) 
//         ans = max(ans ,  value + calculateValue(i+1 , i , ct+1 , k , events , dp) ) ;
//         return dp[i][ct] = ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxValue(vector<vector<int>>& events, int k) 
//     {
//         n = events.size() ;
//         sort(events.begin() , events.end()) ;
//         vector<vector<int>> dp(n+5 , vector<int>(k+5,-1)) ;
//         int ans = calculateValue(0 , -1 , 0 ,  k , events , dp ) ;  
//         return ans ;  
//     }
// };






































