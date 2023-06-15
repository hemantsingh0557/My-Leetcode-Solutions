





// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>    Single Iteration  TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// //                           
// //                           
// // //  1st Method    ======>   Single Iteration
// // //  1st Method    ======>   Single Iteration
// // //  1st Method    ======>   Single Iteration
// //     
// //                        
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size() ;
        int ans = 0 , len = 0 ;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1 ) len ++ , ans = max(ans , len)  ;
            else len = 0 ; 
        }
        return ans ;
    }
};






























