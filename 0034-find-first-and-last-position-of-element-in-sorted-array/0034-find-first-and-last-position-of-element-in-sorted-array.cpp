





// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Linera Search    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Binary Search(Lower and Upper Bound)    TC = O(log(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Linera Search 
// // //  1st Method    ======>  Simple Linera Search 
// // //  1st Method    ======>  Simple Linera Search 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         int n = nums.size() ;
//         int st = 1e6 , end = -1  ;
//         for(int i=0; i<n; i++)
//         {
//             if( nums[i]==target)
//             {
//                 st  = min( st , i ) ;
//                 end = max( end , i ) ;
//             }
//         }
//         if( st == 1e6 ) return {-1 , -1} ;
//         return {st , end} ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  Binary Search(Lower and Upper Bound) 
// // //  2nd Method    ======>  Binary Search(Lower and Upper Bound) 
// // //  2nd Method    ======>  Binary Search(Lower and Upper Bound) 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size() ;
        int start = lower_bound( nums.begin() , nums.end()  , target ) - nums.begin() ; 
        if( start == n || nums[start] != target )  return { -1 , -1 } ;     
        int end = upper_bound( nums.begin() , nums.end()  , target ) - nums.begin() ; 
        return { start , end-1 } ;
    }
};










































