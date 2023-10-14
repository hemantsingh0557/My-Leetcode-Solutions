









// class Solution {
// public:
//     int paintWalls(vector<int>& cost, vector<int>& time) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )    TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
// // //   Also See Some Other Approaches at the last ( not accepted only TLE TLE TLE )
// // //   Also See Some Other Approaches at the last ( not accepted only TLE TLE TLE )
// // //   Also See Some Other Approaches at the last ( not accepted only TLE TLE TLE )
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion  ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion  ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Recursion  ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int n ;
//     int minAmount( int i , int walls , vector<int>& cost, vector<int>& time  )
//     {
//         if( walls <= 0  ) return 0 ;  
//         if( i == n ) return 1e9 ; 
//         int ans = cost[i] +  minAmount( i+1 , walls - time[i] - 1 , cost , time ) ; 
//         ans = min( ans ,  minAmount( i+1 , walls , cost , time ) ) ;  
//         return  ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int paintWalls(vector<int>& cost, vector<int>& time) 
//     {
//         n = cost.size() ;   
//         int ans =  minAmount( 0 , n , cost , time ) ; 
//         return ans ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>    DP Memoization    
// // //  2nd Method    ======>    DP Memoization    
// // //  2nd Method    ======>    DP Memoization    
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               


class Solution {
public:
    int n ;
    int dp[505][505] ; 
    int minAmount( int i , int walls , vector<int>& cost, vector<int>& time  )
    {
        if( walls <= 0  ) return 0 ;  
        if( i == n ) return 1e9 ; 
        if( dp[i][walls] != -1 ) return dp[i][walls] ; 
        int ans = cost[i] +  minAmount( i+1 , walls - time[i] - 1 , cost , time ) ; 
        ans = min( ans ,  minAmount( i+1 , walls , cost , time ) ) ;  
        return dp[i][walls] =  ans ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int paintWalls(vector<int>& cost, vector<int>& time) 
    {
        memset( dp , -1 , sizeof( dp) ) ; 
        n = cost.size() ;   
        int ans =  minAmount( 0 , n , cost , time ) ; 
        return ans ;
    }
};












// //                     
// //                     
// // //   Also See Some Other Approaches at the last   ===========>
// // //   Also See Some Other Approaches at the last   ===========>
// // //   Also See Some Other Approaches at the last   ===========>
// //
// //


// //   1st Approach  ===> only Reursion possible can't memoization due to constrainst 
// //   1st Approach  ===> only Reursion possible can't memoization due to constrainst 
// //   1st Approach  ===> only Reursion possible can't memoization due to constrainst 


// class Solution {
// public:
//     int n ;
//     int minAmount( int i , int t1 , int t2 , vector<int>& cost, vector<int>& time)
//     {
//         if( i == n && t1 >= t2 ) return 0 ;
//         else if( i == n && t1 < t2 ) return 1e9 ;
//         int ans = cost[i] +  minAmount( i+1 , t1 + time[i] , t2 , cost , time ) ; 
//         ans = min( ans ,  minAmount( i+1 , t1 , t2+1 , cost , time ) ) ;  
//         return  ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int paintWalls(vector<int>& cost, vector<int>& time) 
//     {
//         n = cost.size() ;
//         int ans =  minAmount( 0 , 0 , 0 , cost , time ) ; 
//         return ans ;
//     }
// };






// //   2nd  Approach  ===> only Reursion and memoization below both TLE TLE TLE
// //   2nd  Approach  ===> only Reursion and memoization below both TLE TLE TLE
// //   2nd  Approach  ===> only Reursion and memoization below both TLE TLE TLE


// class Solution {
// public:
//     int n ;
//     int minAmount( int i , int t , vector<int>& cost, vector<int>& time)
//     {
//         if( i == n && t >= 0 ) return 0 ;
//         else if( i == n && t < 0 ) return 1e9 ;
//         int ans = cost[i] +  minAmount( i+1 , t + time[i] , cost , time ) ; 
//         ans = min( ans ,  minAmount( i+1 , t-1 , cost , time ) ) ;  
//         return  ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int paintWalls(vector<int>& cost, vector<int>& time) 
//     {
//         n = cost.size() ;
//         int ans =  minAmount( 0 , 0 , cost , time ) ; 
//         return ans ;
//     }
// };





// //   3rd  Approach  ===> memoization 2nd approach still got  TLE TLE TLE  
// //   3rd  Approach  ===> memoization 2nd approach still got  TLE TLE TLE  
// //   3rd  Approach  ===> memoization 2nd approach still got  TLE TLE TLE  


// class Solution {
// public:
//     int n ;
//     map<pair<int,int> ,int> mp ;
//     int minAmount( int i , int t , vector<int>& cost, vector<int>& time)
//     {
//         if( i == n && t >= 0 ) return 0 ;
//         else if( i == n && t < 0 ) return 1e9 ;
//         if( mp[{i,t}] != 0 ) return mp[{i,t}] ;  
//         int ans = cost[i] +  minAmount( i+1 , t + time[i] , cost , time ) ; 
//         ans = min( ans ,  minAmount( i+1 , t-1 , cost , time ) ) ;  
//         return mp[{i,t}] = ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int paintWalls(vector<int>& cost, vector<int>& time) 
//     {
//         n = cost.size() ;
//         int ans =  minAmount( 0 , 0 , cost , time ) ; 
//         return ans ;
//     }
// };
























































