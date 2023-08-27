








// class Solution {
// public:
//     bool canCross(vector<int>& stones) {
        
//     }
// };



























// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Wrong Wrong Wrong Wrong Wrong Wrong Wrong  Wrong Wrong   
// //                      
// //                      
// // //  2nd Method  ====>  Simple Recursion ( TLE  TLE  TLE )     TC = O(3^n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  DP  Memoization   TC = O(n^2) , SC = O(n^2)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// // //  1st Method    ======>      Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong
// // //  1st Method    ======>      Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong
// // //  1st Method    ======>      Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong
// // //  1st Method    ======>      Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong
// // //  1st Method    ======>      Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong Wrong
// //                           


// class Solution {
// public:
//     int n ; 
//     bool isPossible(int i , int k , vector<int>& stones )
//     {
//         if(i>=n-1) 
//         {
//             cout<<i<< " Hello  "<<k<<endl;
//             return true ; 
//         }
//         // cout<<i<<"   k-1   "<<k-1<<endl;
//         if(k-1 >= stones[i+1] - stones[i] && isPossible( i+1 , k-1 , stones) ) return true ;   
//         if(k   >= stones[i+1] - stones[i] && isPossible( i+1 , k   , stones) ) return true ;   
//         if(k+1 >= stones[i+1] - stones[i] && isPossible( i+1 , k+1 , stones) ) return true ;   
//         return false ;
//     }
//     bool canCross(vector<int>& stones) 
//     {
//         if( stones[1]-stones[0] != 1  ) return false ;
//         n = stones.size() ; 
//         int ans =  isPossible(1 , 1 , stones) ;
//         return ans ;   
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>    Simple Recursion ( TLE  TLE  TLE )
// // //  2nd Method    ======>    Simple Recursion ( TLE  TLE  TLE )
// // //  2nd Method    ======>    Simple Recursion ( TLE  TLE  TLE )
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int n ; 
//     unordered_map<int ,int> mp ;
//     bool isPossible(int i , int k , vector<int>& stones )
//     {
//         if(i>=n-1)    return true ; 
//         int ans = false ;
//         if( k>1 && mp.count(stones[i] + k-1 ) && isPossible( mp[stones[i] + k-1 ] , k-1 , stones) ) ans = true ;   
//         if( mp.count(stones[i] + k   ) && isPossible( mp[stones[i] + k   ] , k , stones) )  ans = true  ;   
//         if( mp.count(stones[i] + k+1 ) && isPossible( mp[stones[i] + k+1 ] , k+1 , stones) )  ans = true  ; 
//         ans |= false ;  
//         return ans ;
//     }
//     bool canCross(vector<int>& stones) 
//     {
//         if( stones[1]-stones[0] != 1  ) return false ;
//         n = stones.size() ; 
//         for(int i=0; i<n; i++) mp[stones[i]] = i ;
//         int ans =  isPossible(1 , 1 , stones) ;
//         return ans ;   
//     }
// };















// //                           
// //                           
// // //  3rd Method    ======>   DP  Memoization
// // //  3rd Method    ======>   DP  Memoization
// // //  3rd Method    ======>   DP  Memoization
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               


class Solution {
public:
    int n ; 
    unordered_map<int ,int> mp ;
    int dp[2005][2005] ;
    bool isPossible(int i , int k , vector<int>& stones )
    {
        if(i>=n-1)    return true ; 
        if( dp[i][k] != -1 ) return dp[i][k] ;
        int ans = false ;
        if( k>1 && mp.count(stones[i] + k-1 ) && isPossible( mp[stones[i] + k-1 ] , k-1 , stones) ) ans = true ;   
        if( mp.count(stones[i] + k   ) && isPossible( mp[stones[i] + k   ] , k , stones) )  ans = true  ;   
        if( mp.count(stones[i] + k+1 ) && isPossible( mp[stones[i] + k+1 ] , k+1 , stones) )  ans = true  ; 
        ans |= false ;  
        return dp[i][k] = ans ;
    }
    bool canCross(vector<int>& stones) 
    {
        memset(dp , - 1 , sizeof(dp) ) ;  
        if( stones[1]-stones[0] != 1  ) return false ;
        n = stones.size() ; 
        for(int i=0; i<n; i++) mp[stones[i]] = i ;
        int ans =  isPossible(1 , 1 , stones) ;
        return ans ;   
    }
};




































