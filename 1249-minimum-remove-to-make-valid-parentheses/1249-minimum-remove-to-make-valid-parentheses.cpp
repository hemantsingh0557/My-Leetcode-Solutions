

















// class Solution {
// public:
//     string minRemoveToMakeValid(string s) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using stack    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Also try in-place method if possible    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using stack  
// // //  1st Method    ======>    Using stack  
// // //  1st Method    ======>    Using stack  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        int n = s.size() ; 
        stack<int> st ; 
        for(int i=0; i<n; i++)
        {
            if( st.size() && s[st.top()] == '(' && s[i] == ')' ) st.pop() , i ;  
            else if( s[i] == ')' || s[i] == '(' ) st.push(i) ; 
        }
        string ans = "" ; 
        for(int i=n-1; i>=0; i--)
        {
            if( st.size() && i == st.top() ) 
            {
                st.pop() ; 
                continue ; 
            }  
            else ans.push_back( s[i] ) ; 
        }
        reverse(ans.begin() , ans.end() ) ;
        return ans  ; 
    }
};








// //                           
// //                           
// // //  2nd Method    ======>  Try any other 
// // //  2nd Method    ======>  Try any other 
// // //  2nd Method    ======>  Try any other 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>    Also try in-place method if possible 
// // //  3rd Method    ======>    Also try in-place method if possible 
// // //  3rd Method    ======>    Also try in-place method if possible 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               











































