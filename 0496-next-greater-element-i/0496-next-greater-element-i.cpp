








// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using two loops and stack(store index)   TC = O(n^2) , SC = O(2n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using only two loops    TC = O(n^2) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using stack(store value)   TC = O(n1 + n2) , SC = O(2n)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)  {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using two loops and stack(store index)
// // //  1st Method    ======>   Using two loops and stack(store index)
// // //  1st Method    ======>   Using two loops and stack(store index)
// //                             
// // //   Time Complexity   = O(n + n + n^2) = O(n^2)   
// //                              
// // //   Space Complexity  = O(2n)    
// //                               



// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int n1 = nums1.size()   , n2 = nums2.size() ; 
//         vector<int> nge2(n2,0) ;
//         stack<int> st ;
//         for(int i=0; i<n2; i++)
//         {
//             while(st.size()  && nums2[i]>nums2[st.top()])
//             {
//                 nge2[st.top()] = i ;
//                 st.pop() ;
//             }
//             st.push(i) ;
//         }
//         while(st.size()) nge2[st.top()] = -1 , st.pop() ;
//         vector<int> nge1 ;
//         for(int i=0; i<n1; i++)
//         {
//             for(int j=0; j<n2; j++)
//             {
//                 if(nums1[i] ==nums2[j])
//                 {
//                     if(nge2[j]==-1) nge1.push_back(-1) ;
//                     else nge1.push_back(nums2[nge2[j]]) ;
//                     break;
//                 }
//             }
//         }
//         return nge1 ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>       Using only two loops   
// // //  2nd Method    ======>       Using only two loops   
// // //  2nd Method    ======>       Using only two loops   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int n1 = nums1.size()   , n2 = nums2.size() ; 
//         vector<int> ans ;
//         for(int i=0; i<n1; i++)
//         {
//             int ind = 0 ;
//             for(int j=0; j<n2; j++)
//             {
//                 if(nums2[j] == nums1[i])
//                 {
//                     ind = j ;
//                     break;
//                 }
//             }
//             for(int j=ind+1; j<n2; j++)
//             {
//                 if(nums2[j] > nums1[i])
//                 {
//                     ind = -1 ;
//                     ans.push_back(nums2[j]) ; 
//                     break;
//                 }
//             }
//             if(ind ==n2 || ind != -1) ans.push_back(-1) ; 
//         }
//         return ans ;
//     }
// };












// //                           
// //                           
// // //  3rd Method    ======>   Using stack(store value)  
// // //  3rd Method    ======>   Using stack(store value)  
// // //  3rd Method    ======>   Using stack(store value)  
// //                             
// // //   Time Complexity   = O(n1 + n2)   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1 = nums1.size()   , n2 = nums2.size() ; 
        vector<int> nge2(10005,0) ;
        stack<int> st ;
        for(int i=0; i<n2; i++)
        {
            while(st.size()  && nums2[i]>st.top() )
            {
                nge2[st.top()] = nums2[i] ;
                st.pop() ;
            }
            st.push(nums2[i]) ;
        }
        while(st.size()) nge2[st.top()] = -1 , st.pop() ;
        vector<int> nge1 ;
        for(int i=0; i<n1; i++)
        {
            if( nge2[nums1[i]] == -1 ) nge1.push_back(-1) ;
            else nge1.push_back( nge2[nums1[i]] ) ;
        }
        return nge1 ;
    }
};























































