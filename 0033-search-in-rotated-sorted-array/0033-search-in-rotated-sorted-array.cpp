






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration  TC = O(n) , SC = O(1)   constant
// //                      
// //                      
// // //  2nd Method  ====>  Bianry Search    TC = O(log(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Simple Iteration
// // //  1st Method    ======>     Simple Iteration
// // //  1st Method    ======>     Simple Iteration
// //                            
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1)   constant
// //                               



// class Solution {
// public:
//     int search(vector<int>& nums, int target) 
//     {
//         int n = nums.size() ;
//         for(int i=0;i<n; i++) if(nums[i]==target) return i ;
//         return -1 ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Bianry Search 
// // //  2nd Method    ======>    Bianry Search 
// // //  2nd Method    ======>    Bianry Search 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size() ;
        int lo=0 , hi = n-1 ;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2 ;
            if(nums[lo]<nums[mid])
            {
                if(target>=nums[lo] && target<=nums[mid]) hi = mid ;
                else lo = mid+1 ;
            }
            else 
            {
                if(target>=nums[mid] && target<=nums[hi]) lo = mid ;
                else hi = mid-1 ;
            }
        }
        if(target==nums[lo]) return lo ; 
        if(target==nums[hi]) return hi ; 
        return -1 ;   
    }
};


























