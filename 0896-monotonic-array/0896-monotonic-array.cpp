




// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two Pass      TC = O(2*n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Single Pass    TC = O(n)  , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Two  Pass
// // //  1st Method    ======>   Two  Pass
// // //  1st Method    ======>   Two  Pass
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) 
//     {
//         int n = nums.size() ;   
//         int inc = false , dec = false ;  
//         for(int i=0; i<n-1; i++)
//         {
//             if( nums[i] <= nums[i+1]) inc = true  ;  
//             else
//             {
//                 inc = false ;
//                 break ;
//             }
//         }
//         if( inc ) return true ;
//         for(int i=0; i<n-1; i++)
//         {
//             if( nums[i] >= nums[i+1]) dec = true ; 
//             else return false ; 
//         }
//         return true ;  
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>    Single Pass
// // //  2nd Method    ======>    Single Pass
// // //  2nd Method    ======>    Single Pass
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int n = nums.size() ;
        int inc = false , dec = false ;  
        for(int i=0; i<n-1; i++) 
        {
            if( nums[i] < nums[i+1]) inc = true ;  
            else  if( nums[i] > nums[i+1])  dec = true ;  
            if( inc && dec ) return false ; 
        } 
        return true ;  
    }
};






















