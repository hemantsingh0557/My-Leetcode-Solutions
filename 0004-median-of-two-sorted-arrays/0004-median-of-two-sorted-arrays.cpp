







// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Simple Iteration  TC = O((n+m)log(n+m)) , SC = O(n+m)
// //                      
// //                      
// // //  2nd Method  ====>   Two Pointer      TC = O(n+m)   , SC = O(n+m)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// //                             
// // //   Time Complexity   =  O((n+m)log(n+m))   
// //                              
// // //   Space Complexity  = O(n+m)   
// //                               



// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int n = nums1.size() , m = nums2.size() ; 
//         vector<int> v ;
//         for(int i=0; i<n; i++) v.push_back(nums1[i]) ;
//         for(int i=0; i<m; i++) v.push_back(nums2[i]) ;
//         sort(v.begin(), v.end()) ; 
//         if((n+m)%2==1) return (double)v[(n+m)/2];
//         return (double)(v[(n+m)/2 -1] + v[(n+m)/2])/2 ;
//     }
// };




// //                           
// //                           
// // //  2nd Method    ======>    Two Pointer  
// // //  2nd Method    ======>    Two Pointer  
// // //  2nd Method    ======>    Two Pointer  
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n+m)   
// //                               







class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size() , m = nums2.size() ; 
        vector<int> v ;
        int i=0 , j=0 ;
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j]) v.push_back(nums1[i++]) ;
            else   v.push_back(nums2[j++]) ;
        }
        if(i==n) for( ; j<m; j++) v.push_back(nums2[j]) ;
        if(j==m) for( ; i<n; i++) v.push_back(nums1[i]) ;
        if((n+m)%2==1) return (double)v[(n+m)/2];
        return (double)(v[(n+m)/2 -1] + v[(n+m)/2])/2 ;
    }
};


























































