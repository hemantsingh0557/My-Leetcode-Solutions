











// class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) 
//     {
//         
//     }
// };
















// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple using set or map    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple using set or map  
// // //  1st Method    ======>   Simple using set or map  
// // //  1st Method    ======>   Simple using set or map  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int n = nums.size() ;  
        unordered_set<int> st ;
        int i = n-1; 
        for( ; i>=0; i--)
        {
            if( nums[i] <= k ) st.insert( nums[i] ) ;   
            if( st.size() == k ) break ;
        }
        return n-i;
    }
};

















