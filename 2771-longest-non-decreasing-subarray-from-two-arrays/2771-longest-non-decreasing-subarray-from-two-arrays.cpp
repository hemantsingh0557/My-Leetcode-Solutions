






// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> DP Bottom Up    TC = O(n) , SC = O(2*n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2)  {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   DP Bottom Up  
// // //  1st Method    ======>   DP Bottom Up  
// // //  1st Method    ======>   DP Bottom Up  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               




class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size() ;
        int ans = 1 ;
        vector<int> dp1(n+5 , 1 );
        vector<int> dp2(n+5 , 1 );
        for(int i=1; i<n; i++)
        {
            if(nums1[i]>=nums1[i-1]) dp1[i] = max(dp1[i] , dp1[i-1]+1);
            if(nums1[i]>=nums2[i-1]) dp1[i] = max(dp1[i] , dp2[i-1]+1);
            if(nums2[i]>=nums2[i-1]) dp2[i] = max(dp2[i] , dp2[i-1]+1);
            if(nums2[i]>=nums1[i-1]) dp2[i] = max(dp2[i] , dp1[i-1]+1);
            ans = max( ans, max(dp1[i],dp2[i]) );
        }
        return ans  ;
    }
};



























