




// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  multiset and sliding window   TC =  O(n*log(n))    , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     long long continuousSubarrays(vector<int>& nums) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======>  multiset and sliding window
// // //  1st Method    ======>  multiset and sliding window
// // //  1st Method    ======>  multiset and sliding window
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) 
    {
        int n = nums.size() ;
        multiset<int> st ; 
        long long ans = 0 ;
        int j=0 ; 
        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]) ;
            while(j<n &&   *(--st.end()) - *(st.begin()) > 2)   st.erase(st.find(nums[j++])) ;
            ans += st.size() ;
            // ans += i-j+1  ;
        }
        return ans  ;   
    }
};






















































