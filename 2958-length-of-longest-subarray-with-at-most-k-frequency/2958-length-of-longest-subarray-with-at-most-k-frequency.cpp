


















// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Three Ways) ====> Using Sliding Window  TC = O(n) , SC = O(n) 
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
// // //  1st Method (Three Ways) ====> Using Sliding Window 
// // //  1st Method (Three Ways) ====> Using Sliding Window 
// // //  1st Method (Three Ways) ====> Using Sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       

// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         int ans = 0 ;
//         int i = 0 , j = 0 ; 
//         unordered_map<int , int> freq ; 
//         while( j < n )
//         {
//             freq[nums[j]] ++ ; 
//             if( freq[nums[j]] <= k )  ans = max( ans , j-i+1)  ;
//             else
//             {
//                 while(  nums[i] != nums[j]  ) freq[nums[i]]-- ,  i++ ;
//                 freq[nums[i]]-- ; 
//                 i++ ; 
//             }
//             j++ ; 
//         }
//         return ans  ;
//     }
// };




// // //   1st Method   ====>    2nd way   =====>       
// // //   1st Method   ====>    2nd way   =====>       
// // //   1st Method   ====>    2nd way   =====>       

// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         int ans = 0 ;
//         int i = 0 , j = 0 ; 
//         unordered_map<int , int> freq ; 
//         while( j < n )
//         {
//             freq[nums[j]] ++ ; 
//             if( freq[nums[j]] > k )  
//             {
//                 while(  nums[i] != nums[j]  ) freq[nums[i]]-- ,  i++ ;
//                 freq[nums[i]]-- ; 
//                 i++ ; 
//             }
//             ans = max( ans , j-i+1)  ;
//             j++ ; 
//         }
//         return ans  ;
//     }
// };






// // //   1st Method   ====>    3rd  way   =====>       
// // //   1st Method   ====>    3rd  way   =====>       
// // //   1st Method   ====>    3rd  way   =====>       

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        int ans = 0 ;
        int i = 0 , j = 0 ; 
        unordered_map<int , int> freq ; 
        while( j < n )
        {
            freq[nums[j]] ++ ; 
            while( freq[nums[j]] > k ) freq[nums[i]]-- ,  i++ ;
            ans = max( ans , j-i+1)  ;
            j++ ; 
        }
        return ans  ;
    }
};



























// //                           
// //                           
// // //  2nd Method    ======>    Try any other  
// // //  2nd Method    ======>    Try any other  
// // //  2nd Method    ======>    Try any other  
// //                             
// // //   Time Complexity   = O()  
// //                              
// // //   Space Complexity  = O()  
// //                               
































