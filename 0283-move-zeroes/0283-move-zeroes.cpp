






// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Two pointer   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Better way   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Two pointer 
// // //  1st Method    ======>    Simple Two pointer 
// // //  1st Method    ======>    Simple Two pointer 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                              

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) 
//     {
//         int n = nums.size()  ;
//         int i=0 , j = 1 ;
//         while(j<n)
//         {
//             if( nums[i] != 0  ) i++ , j++ ; 
//             else if( nums[i] == 0 && nums[j] != 0 ) 
//             {
//                 swap(nums[i] , nums[j] ) ;  
//                 i++ , j++ ;
//             }
//             else if( nums[i] == 0 && nums[j] == 0 )
//             {
//                 j++; 
//             } 
//         }
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>    Better way 
// // //  2nd Method    ======>    Better way 
// // //  2nd Method    ======>    Better way 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size()  ;
        int i=0 , j = 1 ;
        while(j<n)
        {
            if( nums[i] != 0  ) i++ ; 
            else if( nums[i] == 0 && nums[j] != 0 ) 
            {
                swap(nums[i] , nums[j] ) ;  
                i++ ;
            }
            j++ ;
        }
    }
};

































