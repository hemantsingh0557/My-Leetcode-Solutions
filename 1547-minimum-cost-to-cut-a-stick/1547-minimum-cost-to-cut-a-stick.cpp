




// class Solution {
// public:
//     int minCost(int n, vector<int>& cuts) {
        
//     }
// };























// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE)    TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method ( Two ways ) ====> DP Memoization    TC = O(m * m^2) = O(m^3) , SC = O(100 * 100) 
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
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// class Solution {
// public:
//     int cost(int start , int end , vector<int> &cuts , int left , int right)
//     {
//         if(left>right) return 0 ; 
//         int ans = INT_MAX ;
//         for(int j=left; j<=right; j++)
//         {
//             int leftCost =  cost( start , cuts[j] , cuts , left , j-1 ) ;  
//             int rightCost = cost( cuts[j] , end , cuts , j+1 , right ) ;  
//             int totalCost = end - start + leftCost + rightCost  ;
//             ans = min(ans ,totalCost ) ;
//         }
//         return ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minCost(int n, vector<int>& cuts) 
//     {
//         int m = cuts.size() ;
//         sort(cuts.begin() , cuts.end()) ; 
//         int ans = cost(0 , n , cuts , 0 , m-1 );
//         return ans ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>     DP Memoization  
// // //  2nd Method    ======>     DP Memoization  
// // //  2nd Method    ======>     DP Memoization  
// //                             
// // //   Time Complexity   = O(m * m^2) = O(m^3)   
// //                              
// // //   Space Complexity  = O( 100 * 100 )  
// //                               



// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       
// // //   2nd Method   ====>      1st way   =====>       


// class Solution {
// public:
//     int dp[110][110] ;
//     int cost(int start , int end , vector<int> &cuts , int left , int right)
//     {
//         if(left>right) return 0 ; 
//         if( dp[left][right] != -1 ) return dp[left][right] ; 
//         int ans = INT_MAX ;
//         for(int j=left; j<=right; j++)
//         {
//             int leftCost =  cost( start , cuts[j] , cuts , left , j-1 ) ;  
//             int rightCost = cost( cuts[j] , end , cuts , j+1 , right ) ;  
//             int totalCost = end - start + leftCost + rightCost  ;
//             ans = min(ans , totalCost ) ;
//         }
//         return dp[left][right] =  ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minCost(int n, vector<int>& cuts) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         int m = cuts.size() ;
//         sort(cuts.begin() , cuts.end()) ; 
//         int ans = cost(0 , n , cuts , 0 , m-1 );
//         return ans ;
//     }
// };




// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       
// // //   2nd Method   ====>     2nd  way   =====>       


class Solution {
public:
    int dp[110][110] ;
    int cost( vector<int> &cuts , int left , int right)
    {
        if(left>right) return 0 ; 
        if( dp[left][right] != -1 ) return dp[left][right] ; 
        int ans = 1e9 ;
        for(int j=left; j<=right; j++)
        {
            int leftCost =  cost( cuts , left , j-1 ) ;  
            int rightCost = cost( cuts , j+1 , right ) ;  
            int totalCost = cuts[right+1] - cuts[left-1] + leftCost + rightCost  ;
            ans = min(ans , totalCost ) ;
        }
        return dp[left][right] =  ans ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minCost(int n, vector<int>& cuts) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        // int m = cuts.size() ;
        // cuts.push_back(n) ;
        // cuts.push_back(0) ;
        // sort(cuts.begin() , cuts.end()) ; 
        // int ans = cost( cuts , 1 , m );
        cuts.push_back(n) ;
        cuts.push_back(0) ;
        int m = cuts.size() ;
        sort(cuts.begin() , cuts.end()) ; 
        int ans = cost( cuts , 1 , m-2 );
        return ans ;
    }
};































// // // //    Copy from the solutoin tab      =====>
// // // //    Copy from the solutoin tab      =====>
// // // //    Copy from the solutoin tab      =====>
// // // //    Copy from the solutoin tab      =====>
// // // //    Copy from the solutoin tab      =====>




// class Solution {
// public:
//     int dp[101][101];
//     int solve(int start_stick, int end_stick, vector<int>& cuts, int left, int right){
//         if(left > right) return 0;
        
//         if(dp[left][right] != -1) return dp[left][right];
        
//         int cost = 1e9;
        
//         for(int i=left; i<=right; i++){
//             int left_cost = solve(start_stick, cuts[i], cuts, left, i-1);
//             int right_cost = solve(cuts[i], end_stick, cuts, i+1, right);
//             int curr_cost = (end_stick - start_stick) + left_cost + right_cost;
//             cost = min(cost,curr_cost);
//         }
        
//         return dp[left][right] = cost;
//     }
//     int minCost(int n, vector<int>& cuts) {
//         memset(dp,-1,sizeof(dp));
//         sort(cuts.begin(),cuts.end());
//         return solve(0, n, cuts, 0, cuts.size()-1);
//     }
// };






