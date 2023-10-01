











// class Solution {
// public:
//     string reverseWords(string s) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Stack   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using reverse inbuilt function   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> Using Stack   
// // //  1st Method    ======> Using Stack   
// // //  1st Method    ======> Using Stack   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     string reverseWords(string s) 
//     {
//         int n = s.size() ;
//         stack<char> st ;
//         string ans =  "" ;
//         for(int i=0; i<n; i++ )
//         {
//             if( s[i] == ' ')
//             {
//                 while( st.size() ) ans.push_back(st.top()) , st.pop() ; 
//                 ans.push_back(' ') ;
//             }
//             else st.push(s[i]) ;
//         }
//         while( st.size() ) ans.push_back(st.top()) , st.pop() ; 
//         return ans ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Using reverse inbuilt function
// // //  2nd Method    ======>    Using reverse inbuilt function
// // //  2nd Method    ======>    Using reverse inbuilt function
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.size() ;
        int prev = 0 ; 
        for(int i=0; i<n; i++ )
        {
            if( s[i] == ' ' )
            {
                reverse(s.begin()+prev , s.begin()+i) ;
                prev = i+1 ;
            }
        }
        reverse(s.begin()+prev , s.end()) ;
        return s ;
    }
};




































