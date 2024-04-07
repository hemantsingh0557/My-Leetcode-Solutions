














// //  LeetCode  Weekly Contest  392 


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date -  7th April 2024  -  Sunday    .    


















// class Solution {
// public:
//     int longestMonotonicSubarray(vector<int>& nums) 
//     {
//     }
// };
















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Brute Force ( Accepted )  TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try any optimized    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Brute Force ( Accepted )  
// // //  1st Method    ======>  Simple Brute Force ( Accepted )
// // //  1st Method    ======>  Simple Brute Force ( Accepted )  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int ans = 1  ;
        for(int i=1; i<n; i++)
        {
            int in = 1 , de = 1 ; 
            for(int j=i; j<n; j++)
            {
                if( de != -1 &&  nums[j-1] > nums[j]  ) de ++ ; 
                else de = -1 ;
                if( in != -1 &&  nums[j-1] < nums[j]  ) in ++ ; 
                else in = -1 ;
                ans = max( ans , max(in , de) ) ; 
            }
            ans = max( ans , max(in , de) ) ; 
        }
        return ans   ;
    }
};





// //                           
// //                           
// // //  2nd Method    ======>    Try any optimized 
// // //  2nd Method    ======>    Try any optimized 
// // //  2nd Method    ======>    Try any optimized 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               

























































































