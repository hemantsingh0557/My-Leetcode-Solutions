























// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Sliding Window    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try to solve  Using Binary Search  TC = O(n*(log(n))) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Sliding Window                    
// // //  1st Method    ======>    Using Sliding Window                 
// // //  1st Method    ======>    Using Sliding Window                    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if( k == 0 ) return 0 ;  
        int n = nums.size() ;   
        int ans = 0  , product = 1 ;
        int i = 0 , j = 0 ; 
        while( j < n )
        {
            product *= nums[j] ; 
            // while( product >= k ) // // use this or below
            while( i <= j && product >= k )
            {
                product /= nums[i] ;
                i++ ;  
            }
            ans += j-i+1;
            j++ ; 
        }
        return ans  ; 
    }
};












// // // //  from the editorial tab
// // // //  from the editorial tab
// // // //  from the editorial tab
// // // //  from the editorial tab



// The sliding window approach is efficient for finding subarrays with a product less 
// than a given value, but it relies on the fact that the integers in the array are positive. 
// This is because when multiplying positive integers, the product will always be positive, 
// and the product of any number of positive integers will also be positive.


// On the other hand, the binary search approach is more versatile and can handle arrays
// containing both positive and negative integers with some modifications. This is because 
// it operates on the logarithms of the elements rather than the elements themselves.


// After transforming the elements into their logarithmic values, the algorithm compares 
// these values to determine the subarrays with a product less than k. However, direct 
// logarithmic values of negative numbers are not defined in the real number scale. 
// Therefore, to handle negative numbers, appropriate shifting of the elements may be 
// necessary to ensure that the logarithmic values used in the algorithm are valid and meaningful.







// //                           
// //                           
// // //  2nd Method    ======>    Try to solve  Using Binary Search 
// // //  2nd Method    ======>    Try to solve  Using Binary Search 
// // //  2nd Method    ======>    Try to solve  Using Binary Search 
// //                             
// // //   Time Complexity   = O(n* log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// // // // // //  Copy from the editorial tab      =======>        
// // // // // //  Copy from the editorial tab      =======>        
// // // // // //  Copy from the editorial tab      =======>        

// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         if (k == 0) return 0;
//         double logK = log(k);
//         int m = nums.size() + 1;
//         vector<double> logsPrefixSum(m);

//         // Calculate prefix sum of logarithms of elements
//         for (int i = 0; i < nums.size(); i++) {
//             logsPrefixSum[i + 1] = logsPrefixSum[i] + log(nums[i]);
//         }

//         int totalCount = 0;
//         // Calculate subarray count with product less than k
//         for (int currIdx = 0; currIdx < m; currIdx++) {
//             int low = currIdx + 1, high = m;
//             while (low < high) {
//                 int mid = low + (high - low) / 2;
//                 if (logsPrefixSum[mid] < logsPrefixSum[currIdx] + logK - 1e-9) {
//                     low = mid + 1;
//                 } else {
//                     high = mid;
//                 }
//             }
//             totalCount += low - currIdx - 1;
//         }
//         return totalCount;
//     }
// };




































































