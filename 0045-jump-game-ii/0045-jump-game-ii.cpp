






// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion(TLE TLE TLE)    TC = O(2^n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n) , SC = O(n)
// //                     
// //                     
// // //  3rd Method  ====> Simple Iteration   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int jump(vector<int>& nums) 
//     {
//     
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int n , ans = INT_MAX ; 
//     void minJumps(int i , int steps , vector<int>& nums )
//     {
//         if(i>=n) return ;
//         else if(i==n-1) 
//         {
//             ans = min(ans , steps+1) ;
//             return   ;
//         }
//         steps ++ ;
//         for(int j =1; j<=nums[i]; j++)
//         {
//             minJumps(i+j , steps , nums) ; 
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jump(vector<int>& nums) 
//     {
//         // return  0;
//         n = nums.size() ;
//         minJumps(0 , -1, nums) ; 
//         return ans ;
//     }
// };





////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////                                                      





// class Solution {
// public:
//     int n ; 
//     int  minJumps(int i , vector<int>& nums )
//     {
//         if(i>=n) return n ;
//         else if(i==n-1) return 0 ;
//         int ans = n ;
//         for(int j =1; j<=nums[i]; j++)
//         {
//             ans = min(ans , 1+ minJumps(i+j , nums) ) ; 
//         }
//         return ans  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jump(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         int ans = minJumps(0 , nums) ; 
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>     DP  Memoization  
// // //  2nd Method    ======>     DP  Memoization  
// // //  2nd Method    ======>     DP  Memoization  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int ct = 0 ;
//     int n ; 
//     int dp[10000];
//     int  minJumps(int i , vector<int>& nums )
//     {
//         ct++;
//         if(i>=n) return n ;
//         else if(i==n-1) return 0 ;
//         if(dp[i] != -1) return dp[i] ;
//         int ans = n ;
//         for(int j =1; j<=nums[i]; j++)
//         {
//             ans = min(ans , 1+ minJumps(i+j , nums) ) ; 
//         }
//         return dp[i] = ans  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int jump(vector<int>& nums) 
//     {
//         memset(dp , -1 , sizeof(dp)) ;
//         n = nums.size() ;
//         cout<<"size "<<n<<endl;
//         int ans = minJumps(0 , nums) ; 
//         cout<<"totalrun   "<<ct<<endl; // // 
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>  Simple Iteration
// // //  3rd Method    ======>  Simple Iteration
// // //  3rd Method    ======>  Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               







class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n = nums.size() ;
        int currReach =0 , maxJump =0 ;
        int ans = 0 ;
        for(int i=0; i<n-1 ; i++)
        {
            maxJump = max(maxJump , i+nums[i]) ;
            if(i==currReach)
            {
                ans ++ ;
                currReach = maxJump ;
            }
        }
        return ans ;
    }
};







































































