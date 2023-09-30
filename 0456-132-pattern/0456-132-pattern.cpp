







// class Solution {
// public:
//     bool find132pattern(vector<int>& nums) {
        
//     }
// };











// // // //   Try to understand more and more
// // // //   Try to understand more and more
// // // //   Try to understand more and more
// // // //   Try to understand more and more
// // // //   Try to understand more and more









// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using  Stack   TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using  Stack  
// // //  1st Method    ======>   Using  Stack  
// // //  1st Method    ======>   Using  Stack  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        int n = nums.size() ;  
        stack<pair<int,int>> st ; 
        st.push( { nums[0] , nums[0] } ) ;
        int mn = nums[0]  ; 
        for(int i=1; i<n; i++)
        {
            while( st.size() && st.top().first <= nums[i] ) st.pop() ; 
            if( st.size()  && nums[i] > st.top().second  ) return true ;
            st.push( { nums[i] , mn } ) ;   
            mn = min( mn , nums[i] ) ;    
        }
        return false ;    
    }
};







































