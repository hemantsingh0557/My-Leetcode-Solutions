



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Updating the vector   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Without updating the vector   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    updating the vector 
// // //  1st Method    ======>    updating the vector 
// // //  1st Method    ======>    updating the vector 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int minOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int ans =  0 ;
//         for(int i=1; i<n; i++)
//         {
//             int diff = 0 ;
//             if(nums[i-1]>=nums[i]) diff = nums[i-1] -nums[i] +1 ;
//             nums[i] += diff ;
//             ans += diff ;
//         }
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>     Without updating the vector 
// // //  2nd Method    ======>     Without updating the vector 
// // //  2nd Method    ======>     Without updating the vector 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size() ;
        int ans =  0  , last = 0;;
        for(int i=0; i<n; i++)
        {
            ans += max(0 , last - nums[i] +1 ) ;
            last = max(nums[i] , last+1) ;
        }
        return ans ;
    }
};































