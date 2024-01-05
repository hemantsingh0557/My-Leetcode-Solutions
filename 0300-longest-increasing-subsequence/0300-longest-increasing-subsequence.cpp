



// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums)   {
//     }
// };










// // // // //  try to understand Binary search method very nicely ( not very much clear )
// // // // //  try to understand Binary search method very nicely ( not very much clear )
// // // // //  try to understand Binary search method very nicely ( not very much clear )
// // // // //  try to understand Binary search method very nicely ( not very much clear )










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Two ways)  ====>  Simple Recursion (TLE TLE TLE)    TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method (Two ways)  ====>  DP Memoization   TC = O(n^2) ,   SC = O(N^2) and O(n)
// //                     
// //                     
// // //  3rd Method  ====>  Binary Search   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method  (Two ways)   ======>      Simple Recursion  (TLE TLE TLE)  
// // //  1st Method  (Two ways)   ======>      Simple Recursion  (TLE TLE TLE)  
// // //  1st Method  (Two ways)   ======>      Simple Recursion  (TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// // //   1st Method   ====>      1st way   =====>                                 
// // //   1st Method   ====>      1st way   =====>                                 
// // //   1st Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n ;
//     int findlength(int i , int prev , vector<int>& nums )
//     {
//         if(i>=n) return 0 ;
//         int ans = findlength(i+1, prev , nums) ; 
//         if(prev==-1 || nums[i]>nums[prev]) ans = max(ans , 1 + findlength(i+1, i , nums) ) ; 
//         return ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         int ans = findlength(0, -1 , nums) ; 
//         return ans ;
//     }
// };





// // //   1st Method   ====>      2nd  way   =====>                                 
// // //   1st Method   ====>      2nd  way   =====>                                 
// // //   1st Method   ====>      2nd  way   =====>                                 

// class Solution {
// public:
//     int n ;
//     int findlength(int i , vector<int>& nums )
//     {
//         if(i>=n) return 0 ;
//         int ans = 0 ;
//         for(int j=i+1 ; j<n; j++)
//         {
//             if(nums[i]<nums[j]) ans = max(ans , 1 + findlength(j,  nums) ) ; 
//         }
//         return ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         int ans = INT_MIN ;
//         for(int i=0 ; i<n; i++)
//         {
//             ans = max(ans , 1 + findlength(i , nums) ) ; 
//         }
//         return ans ;
//     }
// };













// //                           
// // //  2nd Method  (Two ways)  ======>   DP Memoization     
// // //  2nd Method  (Two ways)  ======>   DP Memoization     
// // //  2nd Method  (Two ways)  ======>   DP Memoization         
// //                           
                              


// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// // 

// class Solution {
// public:
//     int n ;
//     int dp[2505][2505] ;
//     int findlength(int i , int prev , vector<int>& nums )
//     {
//         if(i>=n) return 0 ;
//         if(dp[i][prev+1] !=-1) return dp[i][prev+1] ; 
//         int ans = findlength(i+1, prev , nums) ; 
//         if(prev==-1 || nums[i]>nums[prev]) ans = max(ans , 1 + findlength(i+1, i , nums) ) ; 
//         return dp[i][prev+1] = ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         memset(dp , -1 , sizeof(dp)) ;
//         int ans = findlength(0, -1 , nums) ; 
//         return ans ;
//     }
// };




// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// // 

// class Solution {
// public:
//     int n ;
//     int dp[2505] = {0} ;
//     int findlength(int i , vector<int>& nums )
//     {
//         if(i>=n) return 0 ;
//         if(dp[i] != -1) return dp[i] ;
//         int ans = 0 ;
//         for(int j=i+1 ; j<n; j++)
//         {
//             if(nums[i]<nums[j]) ans = max(ans , 1 + findlength(j,  nums) ) ; 
//         }
//         return dp[i]  = ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         memset(dp , -1 , sizeof(dp)) ;
//         int ans = INT_MIN ;
//         for(int i=0 ; i<n; i++)
//         {
//             ans = max(ans , 1 + findlength(i , nums) ) ; 
//         }
//         return ans ;
//     }
// };













// //                           
// // //  3rd Method   ( Two ways )   ======>    Binary Search
// // //  3rd Method   ( Two ways )   ======>    Binary Search
// // //  3rd Method   ( Two ways )   ======>    Binary Search
// //                           
                               



// // //   3rd  Method   ====>      1st  way   =====>                                 
// // //   3rd  Method   ====>      1st  way   =====>                                 
// // //   3rd  Method   ====>      1st  way   =====>                                 
// //                             
// // //   Time Complexity   = O(n log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //


// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) 
//     {
//         vector<int> ans ;
//         ans.push_back(nums[0]);
//         for( int i =0; i<nums.size(); i++)
//         {
//             if( nums[i]> ans[ans.size()-1])  ans.push_back(nums[i]);
//             else 
//             {
//                 // auto it= lower_bound(ans.begin() , ans.end() , nums[i]) ;
//                 // *it=nums[i];
//                 // // // or
//                 auto it= lower_bound(ans.begin() , ans.end() , nums[i]) - ans.begin() ;
//                 ans[it]=nums[i];
//             }
//         }
//         return ans.size() ;
//     }
// };







// // //   3rd  Method   ====>      2nd  way   =====>                                 
// // //   3rd  Method   ====>      2nd  way   =====>                                 
// // //   3rd  Method   ====>      2nd  way   =====>                                 
// //                             
// // //   Time Complexity   = O(n log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int len = 1;
        for( int i =0; i<nums.size(); i++)
        {
            if( nums[i]> nums[len-1])   nums[len++] = nums[i] ;
            else 
            {
                // auto it= lower_bound(nums.begin() , nums.begin()+len, nums[i]) ;
                // *it=nums[i];
                // // // or
                auto it= lower_bound(nums.begin() , nums.begin()+len , nums[i]) - nums.begin() ;
                nums[it]=nums[i];
            }
        }
        return len ;
    }
};
















