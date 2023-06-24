





// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion  (TLE TLE TLE)    TC = O(3^n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Simple Recursion  (TLE TLE TLE)    TC = O(3^n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  DP Memoization   TC = O(total sum of rods ) , SC = O( 100001 +2 ))  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int tallestBillboard(vector<int>& rods) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method  ====>  Simple Recursion  (TLE TLE TLE)    
// // //  1st Method  ====>  Simple Recursion  (TLE TLE TLE)    
// // //  1st Method  ====>  Simple Recursion  (TLE TLE TLE)    
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int n , ans = 0 ;
//     void calculateLength(int i , int sum1 , int sum2 , vector<int> &rods)
//     {
//         if(i>=n && sum1==sum2)
//         {
//             ans = max(ans , sum1);
//             return ;
//         }
//         // else if(i>=n && sum1 != sum2) return  ; // it is optional line not mandatory
//         calculateLength(i+1 , sum1 , sum2 , rods) ;
//         calculateLength(i+1 , sum1 , sum2 + rods[i] , rods) ;
//         calculateLength(i+1 , rods[i] + sum1 , sum2 , rods) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int tallestBillboard(vector<int>& rods) 
//     {
//         n = rods.size() ;
//         calculateLength(0 , 0 , 0 , rods) ;
//         return ans ;
//     }
// };









// //                           
// //                           
// // //  2nd Method  ====>  Simple Recursion  (TLE TLE TLE)   
// // //  2nd Method  ====>  Simple Recursion  (TLE TLE TLE)   
// // //  2nd Method  ====>  Simple Recursion  (TLE TLE TLE)   
// //                             
// // //   Time Complexity   = O(3^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int n  ;
//     int calculateLength(int i , int diff, vector<int> &rods)   // // diff = sum2 - sum1   (as per above logic)
//     {
//         if(i>=n && diff ==0 ) return  0 ;
//         else if(i>=n && diff != 0 ) return  -100000 ;
//         int sum = calculateLength( i+1 , diff , rods) ;    // // diff = sum2 - sum1
//         //
//         // sum2 = sum2+rod[i]  then  diff = diff + rods[i]
//         int sum2 = rods[i] + calculateLength( i+1 , diff + rods[i] , rods) ;  // 
//         //
//         // sum1 = sum1+rod[i]  then  diff = diff - rods[i]
//         int sum1 = rods[i] + calculateLength( i+1 , diff - rods[i] , rods) ;
//         return max(sum , max(sum2, sum1));
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int tallestBillboard(vector<int>& rods) 
//     {
//         n = rods.size() ;
//         int ans = calculateLength(0 , 0 , rods)/2 ;
//         return ans ;
//     }
// };














// //                           
// // //  3rd Method    ======>  DP Memoization   
// // //  3rd Method    ======>  DP Memoization   
// // //  3rd Method    ======>  DP Memoization   
// //                             
// // //   Time Complexity   =  O(total sum of rods )  
// //                              
// // //   Space Complexity  = O(10001 + 2)   
// //                               




class Solution {
public:
    int n  ;
    int dp[25][10001] ;
    int calculateLength(int i , int diff, vector<int> &rods)   // // diff = sum2 - sum1   (as per above logic)
    {
        if(i>=n && diff ==0 ) return  0 ;
        else if(i>=n && diff != 0 ) return  -100000 ;
        if(dp[i][diff+5000] != -1) return dp[i][diff+5000] ;   
        int sum = calculateLength( i+1 , diff , rods) ;    // // diff = sum2 - sum1
        //
        // sum2 = sum2+rod[i]  then  diff = diff + rods[i]
        int sum2 = rods[i] + calculateLength( i+1 , diff + rods[i] , rods) ;  // 
        //
        // sum1 = sum1+rod[i]  then  diff = diff - rods[i]
        int sum1 = rods[i] + calculateLength( i+1 , diff - rods[i] , rods) ;
        return dp[i][diff+5000] = max(sum , max(sum2, sum1));
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int tallestBillboard(vector<int>& rods) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n = rods.size() ;
        int ans = calculateLength(0 , 0 , rods)/2 ;
        return ans ;
    }
};





















































