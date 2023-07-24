






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Brute Force    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using Kadan's Algorithm    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
        
//     }
// };






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
//         int ans = INT_MIN ;
//         for(int i=0; i<n; i++)
//         {
//             int product = 1 ;
//             for(int j=i; j<n; j++) 
//             {
//                 product *= nums[j] ;
//                 ans = max(ans , product) ;
//             } 
//         } 
//         return ans ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Using Kadan's Algorithm 
// // //  2nd Method    ======>   Using Kadan's Algorithm 
// // //  2nd Method    ======>   Using Kadan's Algorithm 
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
        int ans = INT_MIN ;
        int pre = 1 , suf = 1 ;
        for(int i=0; i<n ; i++)
        {
            if(pre==0) pre = 1 ;
            if(suf==0) suf = 1 ;
            pre *= nums[i] ;
            suf *= nums[n-1-i] ;
            ans = max(ans , max(pre , suf)) ;
        } 
        return ans ;
    }
};

































