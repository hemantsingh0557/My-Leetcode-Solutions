



// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using stack        TC = O(n+n) = O(n)   ,   SC = O(n+n) = O(n)
// //                      
// //                      
// // //  2nd Method  ====>  Without stack      TC = O(2*n) = O(n)   ,   SC = O(n+n) = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Same string  (in-place algorithm)      TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     string reverseWords(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using stack  
// // //  1st Method    ======>   Using stack  
// // //  1st Method    ======>   Using stack  
// //                             
// // //   Time Complexity   = O(n+n) = O(n)   
// //                              
// // //   Space Complexity  = O(n+n) = O(n)   
// //                               



// class Solution {
// public:
//     string reverseWords(string s) 
//     {
//         int n = s.size() ; 
//         stack<string> st ; 
//         string temp ;
//         for(int i=0; i<n; i++)
//         {
//             if(s[i]==' ')
//             {
//                 if(temp.size()!=0) st.push(temp) ;
//                 temp= "" ;
//                 continue ;
//             }
//             else temp.push_back(s[i]) ;
//         }
//         if(temp.size()>0)st.push(temp) ;
//         string ans ;
//         while(st.size())
//         {
//             int sz = st.top().size() ;
//             for(int i=0; i<sz; i++) ans.push_back(st.top()[i]) ;
//             ans.push_back(' ') ;
//             st.pop() ;
//         }
//         ans.pop_back() ;
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>  Without stack 
// // //  2nd Method    ======>  Without stack 
// // //  2nd Method    ======>  Without stack 
// //                             
// // //   Time Complexity   = O(2*n) = O(n)     it is total 
// //                              
// // //   Space Complexity  = O(2*n) - O(n)  
// //                               




// class Solution {
// public:
//     string reverseWords(string s) 
//     {
//         int n = s.size() ; 
//         string ans ;
//         string temp ;
//         for(int i=n-1; i>=0; i--)
//         {
//             if(s[i]==' ')
//             {
//                 reverse(temp.begin(), temp.end()) ;
//                 if(temp.size()>0) ans = ans + " " + temp ;
//                 temp = "" ;
//                 continue ;
//             }
//             else temp.push_back(s[i]) ;
//         }
//         reverse(temp.begin(), temp.end()) ;
//         if(temp.size()>0) ans = ans + " " + temp  ;
//         ans.erase(ans.begin()) ;
//         return ans ;
//     }
// };













// //                           
// //                           
// // //  3rd Method    ======>   Same string  (in-place algorithm)   
// // //  3rd Method    ======>   Same string  (in-place algorithm)   
// // //  3rd Method    ======>   Same string  (in-place algorithm)   
// //                    
// //         
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    string reverseWords(string s) 
    {
        reverse(s.begin(), s.end()) ;
        int n = s.size() ; 
        int left=0, right=0 ;
        for(int i=0; i<n; i++)
        {
            while(i<n && s[i] !=' ') s[right++] = s[i++] ;
            if(right>left)
            {
                reverse(s.begin()+left, s.begin()+right) ;
                s[right++] = ' ' ;
                left = right ;
            }
        }
        return s.substr(0, right-1) ;
    }
};













































