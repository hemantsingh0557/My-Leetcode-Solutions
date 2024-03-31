






// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    31st   March   2024   -   Sunday    .    














// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
//     }
// };







//  // // // //  take some help from solution tab  ======>     
//  // // // //  take some help from solution tab  ======>     
//  // // // //  take some help from solution tab  ======>     
//  // // // //  take some help from solution tab  ======>     








// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sliding Window    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try Any Other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using sliding Window 
// // //  1st Method    ======>   Using sliding Window 
// // //  1st Method    ======>   Using sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        int n = nums.size() ; 
        long long ans = 0 ;
        int mn = INT_MAX , mx = -1  ;
        int mnInd = 0 , mxInd = 0 ; 
        int i=0 , j=0 ;
        while( j < n  )
        {
            if( nums[j] < minK || nums[j] > maxK ) i = j+1  , mn = INT_MAX , mx = -1  ;
            if( nums[j] == minK ) mn = nums[j] , mnInd = j ; 
            if( nums[j] == maxK ) mx = nums[j] , mxInd = j ; 
            if( mn == minK && mx == maxK )
            {
                ans += min( mnInd , mxInd ) - i + 1 ; 
            }
            j++ ; 
        }
        return ans  ; 
    }
};







// //                           
// //                           
// // //  2nd Method    ======>   Tru any other
// // //  2nd Method    ======>   Tru any other
// // //  2nd Method    ======>   Tru any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               











































