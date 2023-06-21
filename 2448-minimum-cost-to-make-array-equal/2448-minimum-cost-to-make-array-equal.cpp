




// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // 1st Method ===> Brute Force(Two For Loops)  (TLE TLE TLE)    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method ===> Using sort(), vector pair and Find Median    TC = O(nlog(n)) , SC = O(2n)
// //                     
// //
// //                       // here   mx   is the max element of nums   
// // 3rd Method ===> Trinary Search (Like Binary Search)     TC = O( log(mx) * n ) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     long long minCost(vector<int>& nums, vector<int>& cost) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Brute Force(Two For Loops)  (TLE TLE TLE)
// // //  1st Method    ======>   Brute Force(Two For Loops)  (TLE TLE TLE)
// // //  1st Method    ======>   Brute Force(Two For Loops)  (TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     long long minCost(vector<int>& nums, vector<int>& cost) 
//     {
//         int n = nums.size() ;
//         long long ans = LLONG_MAX ;  
//         for(int i=0; i<n; i++)
//         {
//             long long totalcost = 0 ;
//             for(int j=0; j<n; j++)
//             {
//                 if(i!=j) 
//                 {
//                     long long times = abs(nums[i] - nums[j]) ;
//                     totalcost += cost[j] * times  ;
//                 }
//             }
//             ans = min(ans, totalcost) ;
//         }
//         return ans;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>   Using sort() , vector pair and Find Median
// // //  2nd Method    ======>   Using sort() , vector pair and Find Median
// // //  2nd Method    ======>   Using sort() , vector pair and Find Median
// //                             
// // //   Time Complexity   = O(4*n + nlog(n))  === O(nlog(n))   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



// class Solution {
// public:
//     long long CalculateCost(int mid , vector<int>& nums, vector<int>& cost )
//     {
//         int n = nums.size() ;
//         long long totalcost = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             long long times = abs(nums[i] - mid ) ;
//             totalcost += cost[i] * times  ;
//         }
//         return totalcost ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     long long minCost(vector<int>& nums, vector<int>& cost) 
//     {
//         int n = nums.size() ;
//         vector<pair<int,int>> vp ;                                    // // // Space Complexity   = O(2n) 
//         for(int i=0; i<n; i++)    vp.push_back({nums[i], cost[i]}) ;  // // // Time Complexity   = O(n) 
//         sort(vp.begin(), vp.end()) ;              // // // Time Complexity   = O(nlog(n))
//         long long sum = 0 ;
//         for(int i=0; i<n; i++) sum += cost[i] ; // // // Time Complexity   = O(n)
//         long long total = 0 ;
//         int i=0 , median ;
//         while(total<(sum+1)/2 && i<n)   // // // Time Complexity   = O(n)
//         {
//             total += vp[i].second ;
//             median = vp[i].first ;
//             i++ ;  
//         }
//         long long ans = CalculateCost(median , nums, cost )  ;    // // // Time Complexity   = O(n) 
//         return ans;
//     }
// };















// //                           
// //                           
// // //  3rd Method    ======>  Trinary Search (Like Binary Search)   
// // //  3rd Method    ======>  Trinary Search (Like Binary Search) 
// // //  3rd Method    ======>  Trinary Search (Like Binary Search) 
// //                             
// // //   Time Complexity   = O( log(mx) * n )  // here mx is the max elemet of nums   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    long long CalculateCost(int mid , vector<int>& nums, vector<int>& cost )
    {
        int n = nums.size() ;
        long long totalcost = 0 ;
        for(int i=0; i<n; i++)
        {
            long long times = abs(nums[i] - mid ) ;
            totalcost += cost[i] * times  ;
        }
        return totalcost ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    long long minCost(vector<int>& nums, vector<int>& cost) 
    {
        int n = nums.size() ;
        int lo = INT_MAX , hi = INT_MIN ;
        for(int i=0; i<n; i++)
        {
            lo = min(lo , nums[i]) ;  
            hi = max(hi , nums[i]) ;  
        }
        while(hi-lo>1)  
        {
            int mid = (hi+lo)/2  ;
            long long cost1 = CalculateCost(mid , nums, cost )  ;   
            long long cost2 = CalculateCost(mid+1 , nums, cost )  ; 
            if(cost1>cost2) lo = mid+1 ;
            else hi = mid ;  
        }
        long long cost1 = CalculateCost(lo , nums, cost )  ;   
        long long cost2 = CalculateCost(hi , nums, cost )  ;   
        long long ans  = min(cost1, cost2) ;
        return ans;
    }
};



































