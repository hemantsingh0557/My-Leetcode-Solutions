









// class Solution {
// public:
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE) TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization (TLE TLE TLE)   TC = O(n^2) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Linear Search with DP Memoization (TLE TLE TLE)    TC = O(n^2) , SC = O(n)  
// //                     
// //                     
// // //  4th Method  ====> Binary Search with DP Memoization (Accepted)  TC = O(n*log(n)) , SC = O(n)  
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int n ;
//     int calculateProfit(int i , vector<pair<int,pair<int,int>>>&vp  )
//     {
//         int prof = 0 ;
//         for(int j=i+1; j<n; j++)
//         {
//             if( vp[i].second.first <= vp[j].first )
//             prof = max( prof , vp[j].second.second + calculateProfit( j , vp ) )  ;  
//         }
//         return prof ;  
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
//     {
//         n = startTime.size() ; 
//         vector<pair<int,pair<int,int>>> vp ;
//         for(int i=0; i<n; i++) vp.push_back( {startTime[i] , {endTime[i] , profit[i]} } ) ;  
//         sort(vp.begin() , vp.end() ) ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++ )
//         {
//             ans = max( ans ,  vp[i].second.second + calculateProfit( i , vp ) )  ; 
//         }  
//         return ans ;  
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization (TLE TLE TLE)  
// // //  2nd Method    ======>   DP Memoization (TLE TLE TLE)  
// // //  2nd Method    ======>   DP Memoization (TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int n ;
//     int dp[100005] ;
//     int calculateProfit(int i , vector<pair<int,pair<int,int>>> &vp  )
//     {
//         int prof = 0 ;
//         if( dp[i] != -1 ) return dp[i] ; 
//         for(int j=i+1; j<n; j++)
//         {
//             if( vp[i].second.first <= vp[j].first )
//             prof = max( prof , vp[j].second.second + calculateProfit( j , vp ) )  ;  
//         }
//         return  dp[i] = prof ;  
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
//     {
//         memset(dp , -1 , sizeof(dp) ) ;  
//         n = startTime.size() ; 
//         vector<pair<int,pair<int,int>>> vp ;
//         for(int i=0; i<n; i++) vp.push_back( {startTime[i] , {endTime[i] , profit[i]} } ) ;  
//         sort(vp.begin() , vp.end() ) ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++ )
//         {
//             ans = max( ans ,  vp[i].second.second + calculateProfit( i , vp ) )  ; 
//         }  
//         return ans ;  
//     }
// };








// //                           
// //                           
// // //  3rd Method    ======>     Linear Search with DP Memoization (TLE TLE TLE)   
// // //  3rd Method    ======>     Linear Search with DP Memoization (TLE TLE TLE)   
// // //  3rd Method    ======>     Linear Search with DP Memoization (TLE TLE TLE)   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int n ;
//     unordered_map<int,int> dp ;
//     int findnextjob( int i , vector<pair<int,pair<int,int>>> &vp  )
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if( vp[i].second.first <= vp[j].first )  return j ; 
//         }
//         return n ; 
//     }
//     int calculateProfit(int i , vector<pair<int,pair<int,int>>> &vp  )
//     {
//         if( i == n ) return  0 ; 
//         if( dp.count(i) ) return dp[i] ; 
//         int prof = calculateProfit( i+1 , vp ) ;  
//         int nextjob = findnextjob(i , vp) ;
//         prof = max( prof , vp[i].second.second + calculateProfit( nextjob , vp ) )  ;  
//         return  dp[i] = prof ;  
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
//     {
//         n = startTime.size() ; 
//         vector<pair<int,pair<int,int>>> vp ;
//         for(int i=0; i<n; i++) vp.push_back( {startTime[i] , {endTime[i] , profit[i]} } ) ;  
//         sort(vp.begin() , vp.end() ) ; 
//         int ans =  calculateProfit( 0 , vp ) ;   
//         return ans ;  
//     }
// };







// //                           
// //                           
// // //  4th Method    ======>     Binary Search with DP Memoization (Accepted) 
// // //  4th Method    ======>     Binary Search with DP Memoization (Accepted) 
// // //  4th Method    ======>     Binary Search with DP Memoization (Accepted)   
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    int n ;
    unordered_map<int,int> dp ;
    int findnextjob( int i , vector<pair<int,pair<int,int>>> &vp  )
    {
        int lo = i , hi = n-1 ;
        while(hi-lo > 1)
        {
            int mid = (lo+hi)/2 ;
            if( vp[i].second.first <= vp[mid].first ) hi = mid ;
            else lo = mid+1 ; 
        }
        if( vp[i].second.first <= vp[lo].first ) return lo ;  
        else if( vp[i].second.first <= vp[hi].first ) return hi ;  
        return n ; 
    }
    int calculateProfit(int i , vector<pair<int,pair<int,int>>> &vp  )
    {
        if( i == n ) return  0 ; 
        if( dp.count(i) ) return dp[i] ; 
        int prof = calculateProfit( i+1 , vp ) ;  
        int nextjob = findnextjob(i , vp) ;
        prof = max( prof , vp[i].second.second + calculateProfit( nextjob , vp ) )  ;  
        return  dp[i] = prof ;  
    } 
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
    {
        n = startTime.size() ; 
        vector<pair<int,pair<int,int>>> vp ;
        for(int i=0; i<n; i++) vp.push_back( {startTime[i] , {endTime[i] , profit[i]} } ) ;  
        sort(vp.begin() , vp.end() ) ; 
        int ans =  calculateProfit( 0 , vp ) ;   
        return ans ;  
    }
};

































