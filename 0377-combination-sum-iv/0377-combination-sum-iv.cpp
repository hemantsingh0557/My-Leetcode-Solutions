













// class Solution {
// public:
//     int combinationSum4(vector<int>& nums, int target) {
        
//     }
// };


























// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  SImple Recursion ( TLE TLE TLE)    TC = O(2^n) , SC = O()
// //                      
// //                      
// // //  2nd Method  ====>  DP memoization   TC =  O(n*target)  , SC = O(n*target) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    SImple Recursion ( TLE TLE TLE) 
// // //  1st Method    ======>    SImple Recursion ( TLE TLE TLE) 
// // //  1st Method    ======>    SImple Recursion ( TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O()   
// //                               


// class Solution {
// public:
//     int n  ;  
//     int  totalCombination( int i , vector<int>& nums, int target )
//     {
//         if( target == 0 ) return 1 ;  
//         if(i==n ) return  0 ;  
//         int ans = 0 ;
//         for(int j=0; j<n; j++)
//         {
//             if( target-nums[j]  >= 0 )
//             ans += totalCombination( j , nums , target - nums[j] )  ; 
//         }
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int combinationSum4(vector<int>& nums, int target) 
//     {
//         n = nums.size() ;  
//         int ans = totalCombination(0 , nums , target )  ;  
//         return ans ; 
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   DP memoization
// // //  2nd Method    ======>   DP memoization
// // //  2nd Method    ======>   DP memoization
// //                             
// // //   Time Complexity   =  O(n*target)   
// //                              
// // //   Space Complexity  =  O(n*target) 
// //                               



class Solution {
public:
    int n  ; 
    int dp[210][1005] ; 
    int  totalCombination( int i , vector<int>& nums, int target )
    {
        if( target == 0 ) return 1 ;  
        if(i==n ) return  0 ;  
        if(dp[i][target] != -1 ) return dp[i][target] ; 
        int ans = 0 ;
        for(int j=0; j<n; j++)
        {
            if( target-nums[j]  >= 0 )
            ans += totalCombination( j , nums , target - nums[j] )  ; 
        }
        return dp[i][target] = ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int combinationSum4(vector<int>& nums, int target) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        n = nums.size() ;  
        int ans = totalCombination(0 , nums , target )  ;  
        return ans ; 
    }
};


































