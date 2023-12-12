






















// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Brute Force    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Sort() function    TC = O(n*log(n)) , SC = O(log(n)) 
// //                     
// //                     
// // //  3rd Method  ====> Track Biggest and Second Biggest    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force 
// // //  1st Method    ======>   Brute Force 
// // //  1st Method    ======>   Brute Force 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         int ans  = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 ans = max( ans , (nums[i]-1) * (nums[j]-1)) ;
//             }
//         }
//         return ans  ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>     Sort() function 
// // //  2nd Method    ======>     Sort() function 
// // //  2nd Method    ======>     Sort() function 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         sort(nums.begin() , nums.end() ) ;
//         int ans = (nums[n-1]-1) * (nums[n-2]-1)  ;
//         return ans  ;
//     }
// };







// //                           
// //                           
// // //  3rd Method    ======>   Track Biggest and Second Biggest  
// // //  3rd Method    ======>   Track Biggest and Second Biggest  
// // //  3rd Method    ======>   Track Biggest and Second Biggest  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int mx =0 , mxSec = 0 ; 
        for(int i=0; i<n; i++)
        {
            if( nums[i] > mx )
            {
                mxSec = mx ;
                mx = nums[i] ;
            }
            else mxSec = max( mxSec , nums[i] ) ; 
        }
        int ans = (mx-1) * (mxSec-1)  ;        
        return ans  ;
    }
};

































