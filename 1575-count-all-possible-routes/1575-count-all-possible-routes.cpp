



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method(Two way) ==> Simple Recursion(TLE TLE TLE)   TC = O(n^n)(Probably) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method(Two way) ==> DP Memoization    TC = O(n*fuel * n)  , SC = O(n*fuel)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE)    
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE)    
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE)    
// //                             
// // //   Time Complexity   = O(n^n)(Probably)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int M = 1000000007 ;
//     int n ;
//     long long routes( int start, int finish, int fuel , vector<int>& locations )
//     {
//         if(start<0 || start>=n ) return  0 ;
//         if(fuel<0) return  0 ; 
//         if(fuel==0 && start!=finish) return  0 ; 
//         long long ans = 0 ;
//         if(start==finish) ans++ ; 
//         ans = ans % M ;
//         for(int i=1; i<n; i++)
//         {
//             int reduced_fuel = 0 ;
//             if(start+i<n) 
//             {
//                 reduced_fuel = abs(locations[start]- locations[start+i] ) ;  
//                 if(fuel-reduced_fuel >=0) 
//                 ans += routes( start+i, finish, fuel-reduced_fuel , locations ) ;
//                 ans = ans % M ;
//             }
//             if(start-i>=0) 
//             {
//                 reduced_fuel = abs(locations[start]- locations[start-i] ) ;
//                 if(fuel-reduced_fuel >=0)    
//                 ans += routes( start-i, finish, fuel-reduced_fuel , locations ) ;
//                 ans = ans % M ;
//             }
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
//     {
//         n = locations.size() ;
//         int ans = routes( start, finish, fuel , locations ) ;  
//         return ans ;
//     }
// };








// // //   1st  Method   ====>     2nd  way   =====>                                 
// // //   1st  Method   ====>     2nd  way   =====>                                 
// // //   1st  Method   ====>     2nd  way   =====>                                 


// class Solution {
// public:
//     int M = 1000000007 ;
//     int n ;
//     int routes( int start, int finish, int fuel , vector<int>& locations  )
//     {
//         if(fuel<0) return  0 ; 
//         int ans = 0 ;
//         if(start==finish) ans++ ; 
//         for(int i=0; i<n; i++)
//         {
//             if(i==start) continue  ;
//             int reduced_fuel = abs(locations[start]- locations[i] ) ;  
//             ans = ans%M + routes(i, finish, fuel-reduced_fuel , locations )%M ;
//             ans = ans % M ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
//     {
//         n = locations.size() ;
//         int ans = routes( start, finish, fuel , locations ) ;  
//         return ans ;
//     }
// };























// //                           
// //                           
// // //  2nd Method    ======> DP Memoization
// // //  2nd Method    ======> DP Memoization
// // //  2nd Method    ======> DP Memoization
// //                             
// //  Time Complexity = O(n*fuel * n)  here n*fuel is of dp and next n is of every possible location
// //                              
// //  Space Complexit = O(n*fuel)   
// //                               





// // //   2nd  Method   ====>      1st way   =====>                                 
// // //   2nd  Method   ====>      1st way   =====>                                 
// // //   2nd  Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int M = 1000000007 ;
//     int n ;
//     int dp[105][205] ;
//     long long routes( int start, int finish, int fuel , vector<int>& locations  )
//     {
//         if(start<0 || start>=n ) return  0 ;
//         if(fuel<0) return  0 ; 
//         if(fuel==0 && start!=finish) return  0 ; 
//         if(dp[start][fuel] != -1) return  dp[start][fuel]  ; 
//         long long ans = 0 ;
//         if(start==finish) ans++ ; 
//         ans = ans % M ;
//         for(int i=1; i<n; i++)
//         {
//             int reduced_fuel = 0 ;
//             if(start+i<n) 
//             {
//                 reduced_fuel = abs(locations[start]- locations[start+i] ) ;  
//                 if(fuel-reduced_fuel >=0) 
//                 ans += routes( start+i, finish, fuel-reduced_fuel , locations ) ;
//                 ans = ans % M ;
//             }
//             if(start-i>=0) 
//             {
//                 reduced_fuel = abs(locations[start]- locations[start-i] ) ;
//                 if(fuel-reduced_fuel >=0)    
//                 ans += routes( start-i, finish, fuel-reduced_fuel , locations ) ;
//                 ans = ans % M ;
//             }
//         }
//         return dp[start][fuel] = ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
//     {
//         // return  0 ;
//         memset(dp, -1 , sizeof(dp)) ;
//         n = locations.size() ;
//         int ans = routes( start, finish, fuel , locations ) ;  
//         return ans ;
//     }
// };










// // //   2nd  Method   ====>     2nd  way   =====>                                 
// // //   2nd  Method   ====>     2nd  way   =====>                                 
// // //   2nd  Method   ====>     2nd  way   =====>                                 


class Solution {
public:
    int M = 1000000007 ;
    int n ;
    int dp[105][205] ;
    int routes( int start, int finish, int fuel , vector<int>& locations  )
    {
        if(fuel<0) return  0 ; 
        if(dp[start][fuel] != -1) return  dp[start][fuel]  ; 
        int ans = 0 ;
        if(start==finish) ans++ ; 
        for(int i=0; i<n; i++)
        {
            if(i==start) continue  ;
            int reduced_fuel = abs(locations[start]- locations[i] ) ;  
            ans = ans%M + routes(i, finish, fuel-reduced_fuel , locations )%M ;
            ans = ans % M ;
        }
        return dp[start][fuel] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) 
    {
        memset(dp, -1 , sizeof(dp)) ;
        n = locations.size() ;
        int ans = routes( start, finish, fuel , locations ) ;  
        return ans ;
    }
};



































