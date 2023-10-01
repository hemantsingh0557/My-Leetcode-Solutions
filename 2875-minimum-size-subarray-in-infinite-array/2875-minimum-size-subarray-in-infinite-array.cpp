











// class Solution {
// public:
//     int minSizeSubarray(vector<int>& nums, int target) 
//     {
        
//     }
// };














// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  math and Sliding Window   TC = O(4*n) , SC = O(2*n)
// //                      
// //                      
// // //  2nd Method  ====>  math and Sliding Window   TC = O(3*n) , SC = O(1) constant
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    math and Sliding Window  
// // //  1st Method    ======>    math and Sliding Window  
// // //  1st Method    ======>    math and Sliding Window  
// //                             
// // //   Time Complexity   = O(4*n)   
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               



// class Solution {
// public:
//     int minSizeSubarray(vector<int>& nums, int target) 
//     {
//         int n = nums.size() ; 
//         long long totalSum = 0 ;  
//         for(int i=0; i<n; i++)  totalSum += nums[i] ; 
//         int rem = target % totalSum ; 
//         int times = target / totalSum  ;
//         int i=0, j=0 ;
//         int sum = 0 , ans = 1e9+7 ;
//         vector<int> v = nums ;
//         for(int i=0; i<n; i++) v.push_back( nums[i] ) ;
//         while(j < 2*n )
//         {
//             sum += v[j] ;
//             while( i<=j && sum > rem) sum -= v[i++] ;
//             if( sum == rem ) ans = min( ans , j-i+1 ) ;
//             j++;   
//         }
//         if( ans == 1e9+7 ) return -1 ;
//         ans += times*n ;
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  2nd  Method    ======>    math and Sliding Window  
// // //  2nd  Method    ======>    math and Sliding Window  
// // //  2nd  Method    ======>    math and Sliding Window  
// //                             
// // //   Time Complexity   = O(3*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) 
    {
        int n = nums.size() ; 
        long long totalSum = 0 ;  
        for(int i=0; i<n; i++)  totalSum += nums[i] ; 
        int rem = target % totalSum ; 
        int times = target / totalSum  ;
        int i=0, j=0 ;
        int sum = 0 , ans = 1e9+7 ;
        while( j < 2*n )
        {
            sum += nums[j%n] ;
            while( i<=j && sum > rem) sum -= nums[i%n] ,  i++ ;
            if( sum == rem ) ans = min( ans , j-i+1 ) ;
            j++;   
        }
        if( ans == 1e9+7 ) return -1 ;
        ans += times*n ;
        return ans ;
    }
};













































