













// class Solution {
// public:
//     int lengthOfLastWord(string s) {
        
//     }
// };






// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Backward Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Backward Iteration
// // //  1st Method    ======>    Backward Iteration
// // //  1st Method    ======>    Backward Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n = s.size() ; 
        int i = n-1; 
        while( i >= 0 && s[i] == ' ' ) i-- ;
        int ans = 0 ;
        while( i >= 0 && s[i] != ' '  ) i-- , ans++ ;
        return ans  ; 
    }
};






// //                           
// //                           
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               

































































































