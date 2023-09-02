











// class Solution {
// public:
//     bool canBeEqual(string s1, string s2) 
//     {
//         
//     }
// };














// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>     TC = O(4) constant , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration
// // //  1st Method    ======>    Simple Iteration
// // //  1st Method    ======>    Simple Iteration
// //                             
// // //   Time Complexity   = O(4)   Constant
// //                              
// // //   Space Complexity  = O(1)   Constant
// //                               







class Solution {
public:
    bool canBeEqual(string s1, string s2) 
    {
        if(s1[0] == s2[0] && s1[2]  == s2[2] && s1[1] == s2[1] && s1[3]  == s2[3]  ) return true ;
        if(s1[0] == s2[2] && s1[2]  == s2[0] && s1[1] == s2[1] && s1[3]  == s2[3]  ) return true ;
        //
        if(s1[0] == s2[0] && s1[2]  == s2[2] && s1[1] == s2[3] && s1[3]  == s2[1]  ) return true ;
        if(s1[0] == s2[2] && s1[2]  == s2[0] && s1[1] == s2[3] && s1[3]  == s2[1]  ) return true ;
        //
        return false ;  
    }
};





























