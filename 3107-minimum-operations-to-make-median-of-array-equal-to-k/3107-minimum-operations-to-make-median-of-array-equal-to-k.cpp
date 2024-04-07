





// //  LeetCode  Weekly Contest  392 


// //  3rd  Question  ===> Able to solve in contest


// //  Today's  Date -  7th April 2024  -  Sunday    .    











// class Solution {
// public:
//     long long minOperationsToMakeMedianK(vector<int>& nums, int k) 
//     {
//     }
// };














// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple See below  TC = O(n * (log(n)) ) , SC = O(log(n))  
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple See below
// // //  1st Method    ======>  Simple See below
// // //  1st Method    ======>  Simple See below
// //                              
// // //   Time Complexity   = O(n * (log(n)) )   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               



class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        sort(nums.begin()  , nums.end() ) ;
        int m = n/2 ; 
        int num = nums[m] ; 
        if( num == k  ) return 0 ; 
        long long ans = abs(num - k) ; 
        for(int i = m-1; i>=0; i--)
        {
            if( nums[i] > k ) ans += abs( nums[i] - k ) ; 
        }
        for(int i = m+1; i<n; i++)
        {
            if( nums[i] < k ) ans += abs( nums[i] - k ) ; 
        }
        return ans  ; 
    }
};











// //                           
// //                           
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


























































