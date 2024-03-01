















// class Solution {
// public:
//     string maximumOddBinaryNumber(string s) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Sort then swap   TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====>  Two Pointer and swap    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Sort then swap 
// // //  1st Method    ======>   Using Sort then swap 
// // //  1st Method    ======>   Using Sort then swap 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     string maximumOddBinaryNumber(string s) 
//     {
//         int n = s.size() ;  
//         sort(s.rbegin() , s.rend() ) ;
//         int i = 0 ;   
//         while(i<n && s[i] == '1' ) i++ ; 
//         swap(s[i-1] , s[n-1]) ; 
//         return s ;  
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>   Two Pointer and swap 
// // //  2nd Method    ======>   Two Pointer and swap 
// // //  2nd Method    ======>   Two Pointer and swap 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int n = s.size() ;  
        int i = 0  , j = 0 ;   
        while( j < n )
        {
            if( s[j] == '1' ) swap(s[i] , s[j]) , i++ ; 
            j++ ; 
        }
        swap(s[i-1] , s[n-1]) ; 
        return s ;  
    }
};



























