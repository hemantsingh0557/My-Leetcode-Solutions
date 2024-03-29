























// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int k) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Track index of max element    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using sliding Window    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Track index of max element  
// // //  1st Method    ======>    Track index of max element  
// // //  1st Method    ======>    Track index of max element  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// //  1 3 4  

// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         int mx = *max_element( nums.begin()  , nums.end() ) ; 
//         vector<int> ind ;  
//         long long  ans = 0  ; 
//         for (int i = 0; i < nums.size(); i++) 
//         {
//             if (nums[i] == mx) ind.push_back(i);
//             int freq = ind.size();
//             if (freq >= k) ans += ind[freq - k] + 1;
//         }
//         return ans  ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using sliding Window 
// // //  2nd Method    ======>   Using sliding Window 
// // //  2nd Method    ======>   Using sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        int mx =  *max_element( nums.begin()  , nums.end() ) ;
        long long  ans = 0  , mx_ct = 0 ; 
        int i = 0 , j = 0 ;
        while( j < n )
        {
            if( nums[j] == mx ) mx_ct++ ; 
            if( mx_ct >= k )
            {
                ans += n - j ;
                while( nums[i] != mx ) i++ , ans += n - j ; 
                mx_ct -- ; 
                i++ ; 
            }
            j++ ; 
        } 
        return ans  ; 
    }
};




































