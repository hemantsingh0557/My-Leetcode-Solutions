























// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
        
//     }
// };










// // // //  take some help from editorial tab  ======>     
// // // //  take some help from editorial tab  ======>     
// // // //  take some help from editorial tab  ======>     
// // // //  take some help from editorial tab  ======>     
// // // //  take some help from editorial tab  ======>     






// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two Pass sliding Window    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> One Pass sliding Window    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Two Pass sliding Window    
// // //  1st Method    ======>  Two Pass sliding Window    
// // //  1st Method    ======>  Two Pass sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int subArraysAtMost( vector<int> & nums , int k )
    {
        int n = nums.size() ; 
        int ct = 0 ; 
        int i =0 , j = 0  ; 
        unordered_map<int,int> uni ; 
        while( j < n  )
        {
            uni[nums[j]] ++  ; 
            while(  uni.size() > k )
            {
                uni[nums[i]] -- ;
                if( uni[nums[i]] == 0 ) uni.erase(nums[i]) ;
                i++ ; 
            }
            ct += j - i + 1 ; 
            j++ ; 
        }
        return ct  ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        int ans =  subArraysAtMost(nums , k) - subArraysAtMost(nums , k-1) ; 
        return ans ; 
    }
};







// // // //  Copy from the editorial tab      =======>        
// // // //  Copy from the editorial tab      =======>        
// // // //  Copy from the editorial tab      =======>  


// //                           
// //                           
// // //  2nd Method    ======>   One Pass sliding Window 
// // //  2nd Method    ======>   One Pass sliding Window 
// // //  2nd Method    ======>   One Pass sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// // // //  Copy from the editorial tab      =======>        
// // // //  Copy from the editorial tab      =======>        
      


// class Solution {
//    public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         // Array to store the count of distinct values encountered
//         vector<int> distinctCount(nums.size() + 1, 0);

//         int totalCount = 0;
//         int left = 0;
//         int right = 0;
//         int currCount = 0;

//         while (right < nums.size()) {
//             // Increment the count of the current element in the window
//             if (++distinctCount[nums[right++]] == 1) {
//                 // If encountering a new distinct element, decrement K
//                 k--;
//             }

//             // If K becomes negative, adjust the window from the left
//             if (k < 0) {
//                 // Move the left pointer until the count of distinct elements
//                 // becomes valid again
//                 --distinctCount[nums[left++]];
//                 k++;
//                 currCount = 0;
//             }

//             // If K becomes zero, calculate subarrays
//             if (k == 0) {
//                 // While the count of left remains greater than 1, keep
//                 // shrinking the window from the left
//                 while (distinctCount[nums[left]] > 1) {
//                     --distinctCount[nums[left++]];
//                     currCount++;
//                 }
//                 // Add the count of subarrays with k distinct elements to the
//                 // total count
//                 totalCount += (currCount + 1);
//             }
//         }
//         return totalCount;
//     }
// };






























