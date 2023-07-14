






// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Two Ways)  ====>  Simple Recursion(TLE TLE TLE)      TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method (Two Ways)  ====>  DP Memoization(TLE TLE TLE)   TC = O(n^2) , SC = O(n^2) or O(n) 
// //                     
// //                     
// // //  3rd Method  ====> DP Tabulation    TC = O(n) , SC = O(n)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int longestSubsequence(vector<int>& arr, int difference) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion(TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion(TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// // //   1st   Method   ====>      1st way   =====>                                 
// // //   1st   Method   ====>      1st way   =====>                                 
// // //   1st   Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n  ;
//     int length(int i , int prev , int d , vector<int>& arr )
//     {
//         if(i==n) return 0 ;
//         int ans = length(i+1 , prev , d , arr) ;
//         if(prev==-1) ans = max(ans , 1+ length(i+1 , i , d , arr)) ;  
//         else if(arr[i]-arr[prev]==d) ans = max(ans , 1+ length(i+1 , i , d , arr)) ;  
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestSubsequence(vector<int>& arr, int difference) 
//     {
//         n = arr.size() ;
//         int ans = length(0 , -1 , difference , arr) ;
//         return ans ;
//     }
// };




// // //   1st   Method   ====>     2nd  way   =====>                                 
// // //   1st   Method   ====>     2nd  way   =====>                                 
// // //   1st   Method   ====>     2nd  way   =====>                                 


// class Solution {
// public:
//     int n  ;
//     int length(int i , int difference , vector<int>& arr )
//     {                                                                
//         int ans = 0 ;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[j]-arr[i]==difference)
//             ans =  max(ans , 1 + length(j , difference , arr) ) ;
//         }      
//         return ans ;                                     
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestSubsequence(vector<int>& arr, int difference) 
//     {
//         n = arr.size() ;
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             ans =  max(ans , 1 + length(i , difference , arr) ) ;
//         }
//         return ans ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>     DP Memoization(TLE TLE TLE) 
// // //  2nd Method    ======>     DP Memoization(TLE TLE TLE) 
// // //  2nd Method    ======>     DP Memoization(TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   and O(n)  
// //                               




// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n  ;
//     // map<pair<int,int> , int>>  dp[100005] ;
//     map<pair<int,int> , int>  dp ;
//     int length(int i , int prev , int d , vector<int>& arr )
//     {                                                                
//         if(i==n) return 0 ;                                            
//         if(dp.count({i,prev})) return dp[{i,prev}] ;                             
//         int ans = length(i+1 , prev , d , arr) ;                        
//         if(prev==-1) ans = max(ans , 1+ length(i+1 , i , d , arr)) ;  
//         else if(arr[i]-arr[prev]==d) ans = max(ans , 1+ length(i+1 , i , d , arr)) ;  
//         return dp[{i,prev}] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestSubsequence(vector<int>& arr, int difference) 
//     {
//         n = arr.size() ;
//         int ans = length(0 , -1 , difference , arr) ;
//         return ans ;
//     }
// };




// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 


// class Solution {
// public:
//     int n  ;
//     int dp[100005]; 
//     int length(int i , int difference , vector<int>& arr )
//     {              
//         if(dp[i] != -1) return dp[i] ;                                                  
//         int ans = 0 ;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[j]-arr[i]==difference)
//             ans =  max(ans , 1 + length(j , difference , arr) ) ;
//         }      
//         return dp[i] = ans ;                                     
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int longestSubsequence(vector<int>& arr, int difference) 
//     {
//         n = arr.size() ;
//         memset(dp, -1, sizeof(dp)) ; 
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             ans =  max(ans , 1 + length(i , difference , arr) ) ;
//         }
//         return ans ;
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>  Dp  Tabulation
// // //  3rd Method    ======>  Dp  Tabulation
// // //  3rd Method    ======>  Dp  Tabulation
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) 
    {
        int n = arr.size() ;
        int ans = 0 ;
        unordered_map<int,int> mp ;
        for(int i=0; i<n; i++)
        {
            int prev = arr[i] - difference ;
            // if(mp.count(prev)) mp[arr[i]] = 1 + mp[prev] ;
            // else mp[arr[i]] = 1 ;
            // ans = max(ans , mp[arr[i]]) ;
            //
            //
            // mp[arr[i]] = 1 + mp[prev] ; 
            // ans = max(ans , mp[arr[i]]) ;
            //
            //
            ans = max(ans , mp[arr[i]] = 1 + mp[prev] ) ;
        }
        return ans ;
    }
};
















































