






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Using sort() function    TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>     TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        sort(nums.begin() , nums.end()) ;
        return nums[n-k] ;
    }
};









// //                           
// //                           
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k)
//     {
        
//     }
// };



































