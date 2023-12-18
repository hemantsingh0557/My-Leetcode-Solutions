




















// class Solution {
// public:
//     int maxProductDifference(vector<int>& nums) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using sort() function     TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Using sort() function 
// // //  1st Method    ======>     Using sort() function 
// // //  1st Method    ======>     Using sort() function 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ;
        int a = nums[n-1] ;   
        int b = nums[n-2] ;   
        int c = nums[0] ;   
        int d = nums[1] ;   
        return (a*b) - (c*d) ; 
    }
};


































