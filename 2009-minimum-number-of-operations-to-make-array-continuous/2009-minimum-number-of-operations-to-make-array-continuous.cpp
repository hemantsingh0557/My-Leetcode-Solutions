







// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using set and upperbound    TC = O(nlog(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using set and Binary Search   TC = O(nlog(n)) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Using set and Sliding Window  TC = O(nlog(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st Method    ======>     Using set and upperbound  
// // //  1st Method    ======>     Using set and upperbound  
// // //  1st Method    ======>     Using set and upperbound 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int minOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         // set<int> st  ;
//         // for(int i=0; i<n; i++) st.insert(nums[i]) ;
//         set<int> st( nums.begin()  , nums.end() ) ;  
//         //
//         //
//         vector<int> v; 
//         for( auto it : st ) v.push_back(it) ;
//         int ans = n ;
//         for(int i=0; i<v.size(); i++)
//         {
//             int mn = v[i] ;
//             int mx = mn + n-1 ;
//             int ind = upper_bound(v.begin() , v.end() , mx) - v.begin() ;  
//             ans = min( ans , n - (ind-i) ) ; 
//         }
//         return ans ; 
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>    Using set and Binary Search 
// // //  2nd Method    ======>    Using set and Binary Search 
// // //  2nd Method    ======>    Using set and Binary Search 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)  
// //                               



// class Solution {
// public:
//     int searchIndex(int i , int target , vector<int>& v )
//     {
//         int m = v.size(); 
//         int lo = i , hi = m-1 ;
//         while( hi - lo > 1 )
//         {
//             int mid = (lo+hi)/2 ;
//             if( v[mid] <= target ) lo = mid+1 ;  
//             else hi = mid ;  
//         }
//         if( v[lo] > target ) return lo ;
//         else if( v[hi] > target ) return hi ;
//         return m ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         // set<int> st  ;
//         // for(int i=0; i<n; i++) st.insert(nums[i]) ;
//         set<int> st( nums.begin()  , nums.end() ) ;  
//         //
//         //
//         vector<int> v; 
//         for( auto it : st ) v.push_back(it) ;
//         int ans = n ;
//         for(int i=0; i<v.size(); i++)
//         {
//             int mn = v[i] ;
//             int mx = mn + n-1 ;
//             int ind = searchIndex( i , mx , v ) ;  
//             ans = min( ans , n - (ind-i) ) ; 
//         }
//         return ans ; 
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>  Using set and Sliding Window
// // //  3rd Method    ======>  Using set and Sliding Window
// // //  3rd Method    ======>  Using set and Sliding Window
// //                             
// // //   Time Complexity   = O(nlog(n))  
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int minOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         // set<int> st  ;
//         // for(int i=0; i<n; i++) st.insert(nums[i]) ;
//         set<int> st( nums.begin()  , nums.end() ) ;  
//         //
//         //
//         vector<int> v; 
//         for( auto it : st ) v.push_back(it) ;
//         int ans = n ;
//         for(int i=0; i<v.size(); i++)
//         {
//             int mn = v[i] ;
//             int mx = mn + n-1 ;
//             int ind = 0 ;
//             while( ind < v.size() && v[ind] < mx+1 ) ind++ ;  
//             ans = min( ans , n - (ind-i) ) ; 
//         }
//         return ans ; 
//     }
// };







class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size() ;  
        // set<int> st  ;
        // for(int i=0; i<n; i++) st.insert(nums[i]) ;
        set<int> st( nums.begin()  , nums.end() ) ;  
        //
        //
        vector<int> v; 
        for( auto it : st ) v.push_back(it) ;
        int ans = n , ind = 0 ;
        for(int i=0; i<v.size(); i++)
        {
            int mn = v[i] ;
            int mx = mn + n-1 ;
            while( ind < v.size() && v[ind] < mx+1 ) ind++ ;  
            ans = min( ans , n - (ind-i) ) ; 
        }
        return ans ; 
    }
};































