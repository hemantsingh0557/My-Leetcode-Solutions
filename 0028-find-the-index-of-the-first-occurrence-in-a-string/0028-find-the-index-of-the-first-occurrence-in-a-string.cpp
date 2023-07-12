







// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>     TC = O(n*m) , SC = O(m) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     int strStr(string haystack, string needle)  {
//     }
// };





/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Simple Iteration and substr
// // //  1st Method    ======>  Simple Iteration and substr
// // //  1st Method    ======>  Simple Iteration and substr
// //                             
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(m)   
// //                               




class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.size() ;
        int m = needle.size() ;
        for(int i=0; i<=n-m; i++)
        {
            string temp = haystack.substr(i,m);
            if(temp==needle) return i ;
        }
        return -1 ;
    }
};











