













// class Solution {
// public:
//     int minimumLength(string s) {
        
//     }
// };












// //
// // // // // // //  Solve Using   Two  Method  ===>     
// // // // // // //  Solve Using   Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration(Two Pointer)    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try to solve Using Recursion    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration(Two Pointer)
// // //  1st Method    ======>   Simple Iteration(Two Pointer)
// // //  1st Method    ======>   Simple Iteration(Two Pointer)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       

// class Solution {
// public:
//     int minimumLength(string s) 
//     {
//         int n = s.size() ;
//         int i=0, j=n-1  ;
//         while( i < j )
//         {
//             if( s[i] == s[j] ) 
//             {
//                 while( i < j-1 && s[i] == s[i+1] ) i++ ;
//                 while( i < j-1 && s[j-1] == s[j] ) j-- ;
//                 i++ ,  j-- ; 
//             }
//             else break ; 
//         } 
//         return j - i + 1 ; 
//     }
// };




// // //   1st  Method   ====>      2nd  way   =====>       
// // //   1st  Method   ====>      2nd  way   =====>       
// // //   1st  Method   ====>      2nd  way   =====>       

class Solution {
public:
    int minimumLength(string s) 
    {
        int n = s.size() ;
        int i=0, j=n-1  ;
        while( i < j && s[i] == s[j] )
        {
            char c = s[i] ; 
            while( i <= j && s[i] == c ) i++ ;
            while( i < j && s[j] == c ) j-- ;
        } 
        return j - i + 1 ; 
    }
};











// //                           
// //                           
// // //  2nd Method    ======>    Try to solve Using Recursion
// // //  2nd Method    ======>    Try to solve Using Recursion
// // //  2nd Method    ======>    Try to solve Using Recursion
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               








































