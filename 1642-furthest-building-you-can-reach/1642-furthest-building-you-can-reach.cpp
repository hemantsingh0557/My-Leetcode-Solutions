























// class Solution {
// public:
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Four   Method  ===>     
// // // // // // //  Solve Using  Four   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion  (TLE TLE TLE)   TC = O(2^n) , SC = O(n)
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization(TLE and probably MLE ) TC = O(2^n) , SC = O(ladders∗bricks∗n)
// //                     
// //                     
// // //  3rd Method  ====> Binary Search (take help)   TC = O(n*log(n)*log(n)) , SC = O(n)  
// //                     
// //                     
// // 4th Method => Min Heap( try to understand)  TC = O(n∗log(ladders)) , SC = O(ladders)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two ways )  ======>  Simple Recursion  (TLE TLE TLE) 
// // //  1st Method  ( Two ways )  ======>  Simple Recursion  (TLE TLE TLE) 
// // //  1st Method  ( Two ways )  ======>  Simple Recursion  (TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       

// class Solution {
// public: 
//     int n ; 
//     int ind = 0 ; 
//     void findIndex( int i  , vector<int>& heights, int bricks, int ladders )
//     {
//         ind = max( ind , i ); 
//         if( i == n-1 ) return  ; 
//         if( heights[i] >= heights[i+1]  )
//         {
//             findIndex( i+1 , heights , bricks , ladders )  ;
//         }
//         else
//         {
//             if( bricks >= heights[i+1] - heights[i] )
//             {
//                 int rembricks =  bricks - ( heights[i+1] - heights[i] ) ;  
//                 findIndex( i+1 , heights , rembricks , ladders )  ;
//             }
//             if( ladders-1 >= 0 )
//             {
//                 findIndex( i+1 , heights , bricks , ladders-1 )  ;
//             }
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
//     {
//         n = heights.size() ;  
//         findIndex( 0 , heights , bricks , ladders )  ;
//         return ind ; 
//     }
// };





// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       

// class Solution {
// public: 
//     int n ; 
//     int findIndex( int i  , vector<int>& heights, int bricks, int ladders )
//     {
//         if( i == n-1 ) return 0 ; 
//         int ind = i ; 
//         if( heights[i] >= heights[i+1]  )
//         {
//             ind = 1 + findIndex( i+1 , heights , bricks , ladders )  ;
//         }
//         else
//         {
//             int ind1 = 0 , ind2 = 0 ;  
//             if( bricks >= heights[i+1] - heights[i] )
//             {
//                 int rembricks =  bricks - ( heights[i+1] - heights[i] ) ;  
//                 ind1 = 1 + findIndex( i+1 , heights , rembricks , ladders )  ;
//             }
//             if( ladders-1 >= 0 )
//             {
//                 ind2 = 1 + findIndex( i+1 , heights , bricks , ladders-1 )  ;
//             }
//             ind = max( ind1 , ind2 ) ; 
//         }
//         return ind ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
//     {
//         n = heights.size() ;  
//         int ind = findIndex( 0 , heights , bricks , ladders )  ;
//         return ind ; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization(TLE and probably MLE ) 
// // //  2nd Method    ======>  DP Memoization(TLE and probably MLE ) 
// // //  2nd Method    ======>  DP Memoization(TLE and probably MLE ) 
// //                             
// // //   Time Complexity   = O(2^n)(probably)   
// //                              
// // //   Space Complexity  = O(ladders∗bricks∗n)   
// //                               

// class Solution {
// public: 
//     int n ; 
//     map<pair<int,pair<int,int>> , int > dp ;
//     int findIndex( int i  , vector<int>& heights, int bricks, int ladders )
//     {
//         if( i == n-1 ) return 0 ; 
//         // if( dp.count({i , {bricks , ladders}})  ) return dp[{i , {bricks , ladders}}] ; 
//         if( dp[{i , {bricks , ladders}}] != 0 ) return dp[{i , {bricks , ladders}}] ; 
//         int ind = i ; 
//         if( heights[i] >= heights[i+1]  )
//         {
//             ind = 1 + findIndex( i+1 , heights , bricks , ladders )  ;
//         }
//         else
//         {
//             int ind1 = 0 , ind2 = 0 ;  
//             if( bricks >= heights[i+1] - heights[i] )
//             {
//                 int rembricks =  bricks - ( heights[i+1] - heights[i] ) ;  
//                 ind1 = 1 + findIndex( i+1 , heights , rembricks , ladders )  ;
//             }
//             if( ladders-1 >= 0 )
//             {
//                 ind2 = 1 + findIndex( i+1 , heights , bricks , ladders-1 )  ;
//             }
//             ind = max( ind1 , ind2 ) ; 
//         }
//         return dp[{i , {bricks , ladders}}] = ind ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
//     {
//         n = heights.size() ;  
//         int ind = findIndex( 0 , heights , bricks , ladders )  ;
//         return ind ; 
//     }
// };









// //                           
// //                           
// // //  3rd Method    ======>   Binary Search (take help) 
// // //  3rd Method    ======>   Binary Search (take help) 
// // //  3rd Method    ======>   Binary Search (take help) 
// //                             
// // //   Time Complexity   = O(n*log(n)*log(n))  
// // //   Binary Search: O(log(n))
// // //   in each iteration of BS, we are using sort: O(n∗log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public: 
//     bool possibleIndex( int ind  , vector<int>& heights, int bricks, int ladders )
//     {
//         vector<int> jumps ; 
//         for(int i=0; i<ind; i++ )
//         {
//             int diff = heights[i+1] - heights[i] ; 
//             if( diff > 0 )  jumps.push_back( diff ) ;
//         }
//         if( ladders >= jumps.size() ) return true ;
//         sort( jumps.rbegin() , jumps.rend() ) ; 
//         int laddersJumps = ladders ; 
//         int needed_bricks = accumulate( jumps.begin()+laddersJumps , jumps.end() , 0 ) ; 
//         if( needed_bricks <= bricks ) return true  ;
//         return false ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
//     {
//         int n = heights.size() ; 
//         int lo = 0 , hi = n-1  ; 
//         while( hi - lo > 1 )
//         {
//             int mid = (lo+hi)/2 ; 
//             if( possibleIndex(mid , heights , bricks , ladders ) ) lo = mid ;
//             else hi = mid-1 ; 
//         } 
//         if( possibleIndex(hi , heights , bricks , ladders ) ) return hi ;
//         return lo ; 
//     }
// };














// //                           
// //                           
// // //  4th  Method    ======>  Min Heap (take help and try to understand more clearly )
// // //  4th  Method    ======>  Min Heap (take help and try to understand more clearly )
// // //  4th  Method    ======>  Min Heap (take help and try to understand more clearly )
// //                             
// // //   Time Complexity   = O(n∗log(ladders))
// //                              
// // //   Space Complexity  = O(ladders)   
// //                               




class Solution {
public: 
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
        int n = heights.size() ; 
        priority_queue<int , vector<int>, greater<int> > jumps ; 
        for(int i=0; i<n-1; i++)
        {
            int diff = heights[i+1] - heights[i] ; 
            if( diff > 0 )  
            {
                jumps.push( diff ) ;
                if( jumps.size() > ladders )
                {
                    int needed_bricks = jumps.top() ; 
                    jumps.pop() ; 
                    if( needed_bricks > bricks ) return i  ;
                    else bricks -= needed_bricks ; // // try to understan more clearly this line
                }
            }
        }
        return n-1 ; 
    }
};

























