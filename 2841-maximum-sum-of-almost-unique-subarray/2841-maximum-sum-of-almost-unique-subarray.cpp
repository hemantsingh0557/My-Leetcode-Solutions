












// class Solution {
// public:
//     long long maxSum(vector<int>& nums, int m, int k) 
//     {
//     }
// };



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Sliding Window , Map and Set  TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Simple Sliding Window , Map and Set  TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Sliding Window , Map and Set 
// // //  1st Method    ======>   Simple Sliding Window , Map and Set 
// // //  1st Method    ======>   Simple Sliding Window , Map and Set 
// //                             
// // //   Time Complexity   = O(n)     
// //                              
// // //   Space Complexity  = O(n)    
// //                               



// class Solution {
// public:
//     long long maxSum(vector<int>& nums, int m, int k) 
//     {
//         int n = nums.size() ;
//         long long ans = 0 , sum = 0 ;
//         unordered_map<int> st ;
//         unordered_map<int,int> mp ;
//         int j = 0 , ct = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             if( ct < k  )
//             {
//                 ct++ ;
//                 mp[nums[i]] ++ ;
//                 st.insert(nums[i]) ;
//                 sum += nums[i] ;
//             }
//             if( ct == k )
//             {
//                 if( st.size() >= m)  ans = max( ans , sum ) ;
//                 ct-- ; 
//                 mp[nums[j]]-- ;
//                 if( mp[nums[j]] == 0 ) st.erase(nums[j]) ;
//                 sum -= nums[j] ; 
//                 j++;
//             }
//         }
//         return ans  ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>    Simple Sliding Window , Map and Set 
// // //  2nd Method    ======>    Simple Sliding Window , Map and Set 
// // //  2nd Method    ======>    Simple Sliding Window , Map and Set 
// //                             
// // //   Time Complexity   = O(n)      
// //                              
// // //   Space Complexity  = O(n)        
// //                               



class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) 
    {
        int n = nums.size() ;
        long long ans = 0 , sum = 0 ;
        unordered_map<int,int> mp ;
        int j = 0 , ct = 0 ; 
        for(int i=0; i<n; i++)
        {
            if( ct < k  )
            {
                ct++ ;
                mp[nums[i]] ++ ;
                sum += nums[i] ;
            }
            if( ct == k )
            {
                if( mp.size() >= m)  ans = max( ans , sum ) ;
                ct-- ; 
                mp[nums[j]]-- ;
                if( mp[nums[j]] == 0 ) mp.erase(nums[j]) ;
                sum -= nums[j] ; 
                j++;
            }
        }
        return ans  ;
    }
};












































