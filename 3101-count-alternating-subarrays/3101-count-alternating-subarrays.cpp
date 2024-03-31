











// //  LeetCode  Weekly Contest  391 


// //  3rd  Question  ===> Able to solve in contest 


// //  Today's  Date   -    31st March 2024  -  Sunday    .    


















// class Solution {
// public:
//     long long countAlternatingSubarrays(vector<int>& nums) 
//     {
//        
//     }
// };





















// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Iteration     
// // //  1st Method    ======>  Simple Iteration     
// // //  1st Method    ======>  Simple Iteration      
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) 
    {
        int n = nums.size() ; 
        if( n == 1 ) return 1 ; 
        long long ans = 0 , ct = 1  ;
        for(int i=0; i<n-1; i++)
        {
            if( nums[i] != nums[i+1] ) ct++  ;
            else
            {
                ans += ct * (ct+1) / 2 ;
                ct = 1 ;
            }
        }
        ans += ct * (ct+1) / 2  ;
        return ans ; 
    }
};














// //                           
// //                           
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               










































