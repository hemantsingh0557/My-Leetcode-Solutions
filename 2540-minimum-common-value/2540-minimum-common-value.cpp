













// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Hashing   TC = O(n+m) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using Two Pointer   TC = O(n+m) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using Binary Search   TC = O(n*log(m)) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Using Hashing   
// // //  1st Method    ======>     Using Hashing   
// // //  1st Method    ======>     Using Hashing   
// //                              
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int  n = nums1.size() , m = nums2.size() ;
//         unordered_map<int , int> mp ;  
//         for(int i=0; i<n; i++ ) mp[nums1[i]]++ ; 
//         int ans = INT_MAX ; 
//         for(int i=0; i<m; i++)
//         {
//             if( mp[nums2[i]] )
//             {
//                 ans = min( ans , nums2[i] ) ; 
//                 break ; 
//             }
//         }
//         return ans == INT_MAX ? -1 : ans ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using Two Pointer  
// // //  2nd Method    ======>   Using Two Pointer  
// // //  2nd Method    ======>   Using Two Pointer  
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int  n = nums1.size() , m = nums2.size() ;
//         int i=0 , j =0 ; 
//         while( i < n && j < m  )
//         {
//             if( nums1[i] < nums2[j] ) i++ ;
//             else if( nums1[i] > nums2[j] ) j++ ;
//             else return nums1[i] ; 
//         }
//         return -1 ; 
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>   Using Binary Search 
// // //  3rd Method    ======>   Using Binary Search 
// // //  3rd Method    ======>   Using Binary Search 
// //                             
// // //   Time Complexity   = O(n*log(m))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int binarySearch( int num , vector<int>& nums2 )
    {
        int m = nums2.size()  ; 
        int low = 0  , high = m-1 ; 
        while( high - low > 1 )
        {
            int mid =  ( high + low ) / 2 ; 
            if( num > nums2[mid] )  low = mid + 1  ;
            else high =  mid ; 
        }
        if( num == nums2[low]  || num == nums2[high] ) return true ;
        return false ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        int  n = nums1.size() ;
        for(auto num : nums1)
        {
            if( binarySearch(num , nums2) ) return num ; 
        }
        return -1 ; 
    }
};






























