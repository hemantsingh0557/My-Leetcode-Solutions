













// class Solution {
// public:
//     int sumCounts(vector<int>& nums) 
//     {
        
//     }
// };










// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )











// //
// // // // // // //  Solve Using  Only One Method   ===>     
// // // // // // //  Solve Using  Only One Method   ===>                        
// //                     
// //                     
// // //  1st Method  ====> Map or set    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )
// // //  if want to optimized it , try its harder version( same as it , only constrains difference )







// //                           
// //                           
// // //  1st Method    ======>   Map or set   
// // //  1st Method    ======>   Map or set   
// // //  1st Method    ======>   Map or set   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int sumCounts(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         int ans = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             map<int,int> mp; 
//             for(int j=i; j<n; j++)
//             {
//                 mp[nums[j]] ++ ;
//                 int sz = mp.size() ;  
//                 ans += sz * sz ; 
//             }
//         }
//         return ans  ; 
//     }
// };





class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int n = nums.size() ;  
        int ans = 0 ; 
        for(int i=0; i<n; i++)
        {
            set<int> st; 
            for(int j=i; j<n; j++)
            {
                st.insert(nums[j]) ;
                int sz = st.size() ;  
                ans += sz * sz ; 
            }
        }
        return ans  ; 
    }
};







































