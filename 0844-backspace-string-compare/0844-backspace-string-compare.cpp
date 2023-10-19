













// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
        
//     }
// };








// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using stack     TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Two Pointer    TC = O(n) , SC = O(1) constant
// //         //  I have solved  2nd method ,  50% with the help of editorial   
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using stack
// // //  1st Method    ======>   Using stack
// // //  1st Method    ======>   Using stack
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     bool backspaceCompare(string s, string t) 
//     {
//         int n = s.size() , m = t.size() ;
//         stack<char> st1 ;
//         for(int i=0; i<n; i++)
//         {
//             if( s[i] != '#' ) st1.push(s[i]) ;
//             else if( st1.size() ) st1.pop() ;
//         }
//         stack<char> st2 ;
//         for(int i=0; i<m; i++)
//         {
//             if( t[i] != '#' ) st2.push(t[i]) ;
//             else if( st2.size() )  st2.pop() ;
//         }
//         if( st1.size() !=  st2.size() ) return false ;
//         while( st1.size() &&  st2.size() )
//         {
//             if( st1.top() == st2.top() )    st1.pop() , st2.pop()  ; 
//             else return false ;
//         }
//         return true ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Two Pointer
// // //  2nd Method    ======>    Two Pointer
// // //  2nd Method    ======>    Two Pointer
// //  
// //  
// // //  I have solved  2nd method ,  50% with the help of editorial   
// // //  I have solved  2nd method ,  50% with the help of editorial   
// // //  I have solved  2nd method ,  50% with the help of editorial   
// //                             
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int n = s.size() , m = t.size() ;   
        int i = n-1  , j = m-1 ; 
        while(i>=0 || j>=0 )     
        {
            int skipS = 0 , skipT = 0 ;  
            while( i >= 0 )  
            {
                if( s[i] == '#' ) i-- , skipS++ ; 
                else if( skipS > 0 ) i-- , skipS-- ; 
                else break ; 
            }
            while( j >= 0 )  
            {
                if( t[j] == '#' ) j-- , skipT++ ; 
                else if( skipT > 0 ) j-- , skipT-- ; 
                else break ; 
            }
            if( i>=0 && j>=0 && s[i] != t[j] ) return false ;
            // 
            // 
            // if( (i<0 && j>=0 )  || (i>=0 && j<0 ) ) return false ;
            if( i>=0 != j>=0 ) return false ;
            i-- , j-- ; 
        }
        return true ;
    }
};
































