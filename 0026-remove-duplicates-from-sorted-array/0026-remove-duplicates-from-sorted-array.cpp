




// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                 // // n is size of nums and k is unique elements 
// //                     
// // //  1st Method  ====>  Using Set    TC =  O( n + (nlog(n)) )   , SC = O(k) 
// //                      
// //                      
// // //  2nd Method  ====>  Two Pointer   TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Single Iteration    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Using Set  
// // //  1st Method    ======>  Using Set  
// // //  1st Method    ======>  Using Set  
// //                             
// // //   Time Complexity   = O( n + (nlog(n)) )   
// //                              
// // //   Space Complexity  = O(k) constant  
// //                               


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         set<int> st;
//         for(int i=0; i<n; i++) st.insert(nums[i]);
//         int k = 0 ;
//         for(auto it : st)
//         {
//             nums[k] = it  ;
//             k++ ;
//         }
//         return k ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Two Pointer 
// // //  2nd Method    ======>   Two Pointer 
// // //  2nd Method    ======>   Two Pointer 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int i=0, j=0 ;
//         while(j<n)
//         {
//             if(nums[i]==nums[j]) j++ ;
//             else
//             {
//                 i++ ;
//                 if(nums[i]<nums[j]) swap(nums[i], nums[j]) ;
//                 j++;
//             }
//         }
//         return i+1 ;
//     }
// };



////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////                                                      



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int i=0, j=1 ;
//         while(j<n)
//         {
//             if(nums[i]!=nums[j])
//             {
//                 i++ ;
//                 if(nums[i]<nums[j]) swap(nums[i], nums[j]) ;
//             }
//             j++;
//         }
//         return i+1 ;
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>  Single Iteration  
// // //  3rd Method    ======>  Single Iteration  
// // //  3rd Method    ======>  Single Iteration  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size() ;
        int k =1 ;
        for(int i=1; i<n; i++)  if(nums[i-1] != nums[i] )  nums[k++] = nums[i] ;
        return k ;
    }
};



















































