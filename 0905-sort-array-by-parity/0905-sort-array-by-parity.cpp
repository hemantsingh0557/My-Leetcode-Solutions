





// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  One   Method  ===>     
// // // // // // //  Solve Using  One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>     TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Two Pointer 
// // //  1st Method    ======>   Simple Two Pointer 
// // //  1st Method    ======>   Simple Two Pointer 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int n = nums.size() ;   
        int i=0, j= n-1 ; 
        while( i < j )
        {
            if( nums[i] % 2 == 0 ) i++ ;   
            else if( nums[j] % 2 == 0 )  swap(nums[i++] , nums[j--] ) ;
            else j-- ; 
        }
        return nums ;
    }
};































