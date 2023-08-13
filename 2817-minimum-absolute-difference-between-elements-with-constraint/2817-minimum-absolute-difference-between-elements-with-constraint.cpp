







// class Solution {
// public:
//     int minAbsoluteDifference(vector<int>& nums, int x) 
//     {
//     }
// };
























// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  BruteForce   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using set   TC = O(nlog(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force
// // //  1st Method    ======>   Brute Force
// // //  1st Method    ======>   Brute Force
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int minAbsoluteDifference(vector<int>& nums, int x) 
//     {
//         int n = nums.size() ; 
//         int ans  = INT_MAX ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j = i+x; j<n; j++)
//             {
//                 ans = min ( ans , abs(nums[i] -nums[j]) ) ; 
//             }
//         }
//         return ans; 
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Using set 
// // //  2nd Method    ======>   Using set 
// // //  2nd Method    ======>   Using set 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) 
    {
        int n = nums.size() ; 
        int ans  = INT_MAX ;
        // multiset<int> st;
        set<int> st;
        for(int i=x; i<n; i++)
        {
            st.insert(nums[i-x]) ;
            // auto it = st.upper_bound(nums[i]) ;
            auto it = st.lower_bound(nums[i]) ;
            if(it != st.end()) ans = min(ans, abs(nums[i] - *it) ) ; 
            if(it != st.begin()) ans = min( ans, abs( nums[i] - *prev(it) ) ) ;         
        }
        return ans; 
    }
};












































