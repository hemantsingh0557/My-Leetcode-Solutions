











// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using pref and suff array  TC = O(2*n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Without extra space    TC = O(2*n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using pref and suff  array 
// // //  1st Method    ======>    Using pref and suff  array 
// // //  1st Method    ======>    Using pref and suff  array 
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         vector<int> pref(n+1,1) , suff(n+1,1)  ; 
//         for(int i=0; i<n; i++ ) 
//         {
//             pref[i+1] = nums[i] * pref[i] ; 
//             suff[n-1-i] = nums[n-1-i] * suff[n-i] ; 
//         }
//         vector<int> ans(n) ;  
//         for(int i=0; i<n; i++ ) 
//         {
//             ans[i] = pref[i] * suff[i+1]  ;
//         }
//         return ans ; 
//     }
// };
















// //                           
// //                           
// // //  2nd Method    ======>     Without extra space  
// // //  2nd Method    ======>     Without extra space  
// // //  2nd Method    ======>     Without extra space  
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int totalProduct = 1  , ct = 0 ;
        for(int i=0; i<n; i++ ) 
        {
            if( nums[i] == 0 ) ct ++  ;   
            else totalProduct *= nums[i] ;
        }
        vector<int> ans(n) ;  
        for(int i=0; i<n; i++ ) 
        {
            if( ct == 0 ) ans[i] = totalProduct / nums[i]  ;
            else if( ct >= 2  ) ans[i] = 0  ;
            else if( ct == 1 && nums[i] == 0 ) ans[i] = totalProduct  ;
        }
        return ans ; 
    }
};
























































