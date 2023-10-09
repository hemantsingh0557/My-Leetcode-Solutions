







// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Linear Search    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // // 2nd Method ==> Lower and Upper Bound  TC = O(log(n)) , SC = O(1) constant
// //                     
// //                     
// // // 3rd Method ==> Binary Search  TC = O(log(n)) , SC = O(1) constant
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st Method    ======>  Simple Linear Search 
// // //  1st Method    ======>  Simple Linear Search 
// // //  1st Method    ======>  Simple Linear Search 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         int n = nums.size() ;
//         int st = 1e6 , end = -1  ;
//         for(int i=0; i<n; i++)
//         {
//             if( nums[i]==target)
//             {
//                 st  = min( st , i ) ;
//                 end = max( end , i ) ;
//             }
//         }
//         if( st == 1e6 ) return {-1 , -1} ;
//         return {st , end} ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  Lower and Upper Bound 
// // //  2nd Method    ======>  Lower and Upper Bound 
// // //  2nd Method    ======>  Lower and Upper Bound 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         int n = nums.size() ;
//         int start = lower_bound( nums.begin() , nums.end()  , target ) - nums.begin() ; 
//         if( start == n || nums[start] != target )  return { -1 , -1 } ;     
//         int end = upper_bound( nums.begin() , nums.end()  , target ) - nums.begin() ; 
//         return { start , end-1 } ;
//     }
// };










// //                           
// //                           
// // //   3rd Method    ======>   Binary Search 
// // //   3rd Method    ======>   Binary Search 
// // //   3rd Method    ======>   Binary Search 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size() ;
        if( n == 0 ) return { -1 , -1 } ; 
        //
        // first position
        int lo =0 , hi = n-1 , mid ;  
        while( hi - lo > 1 )
        {
            mid = (lo+hi)/2 ; 
            if( nums[mid] < target ) lo = mid+1 ;
            else hi = mid ;
        }
        int left  ;
        if( nums[lo] == target ) left = lo ;  
        else if( nums[hi] == target ) left = hi ;
        else return { -1 , -1 } ;
        //
        // last position
        lo =0 , hi = n-1 ;  
        while( hi - lo > 1 )
        {
            mid = (lo+hi)/2 ; 
            if( nums[mid] <= target ) lo = mid + 1 ;
            else hi = mid ;
        }
        int right = hi+1 ; // if we could not find the upper bound then we need to 
        // // assign one position next to the target that't why we do this
        // // if it find the upper bound then it assigned a new value either lo or hi in below
        //
        if( nums[lo] > target ) right = lo ;  
        else if( nums[hi] > target ) right = hi ;
        // cout<<left<<" "<<right<<endl;
        return { left , right-1 } ;
    }
};









































