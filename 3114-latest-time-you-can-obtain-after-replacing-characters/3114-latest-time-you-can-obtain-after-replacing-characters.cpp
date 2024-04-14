








// //  LeetCode  Weekly Contest  393  (  Able To Solve Two Question )


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    14th April 2024  -  Sunday    .    







                   




// class Solution {
// public:
//     string findLatestTime(string s) 
//     {
//         
//     }
// };


















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  if else condition   TC = O(1) Constnat   , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   if else condition 
// // //  1st Method    ======>   if else condition 
// // //  1st Method    ======>   if else condition 
// //                             
// // //   Time Complexity   = O(1) Constnat  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    string findLatestTime(string s) 
    {
        if( s[4] == '?' ) s[4] = '9' ;
        if( s[3] == '?' ) s[3] = '5' ;
        if( s[0] == '?' && (s[1] == '?' || s[1] == '0' || s[1] == '1' ) ) s[0] = '1' ;
        else if( s[0] == '?' ) s[0] = '0' ;
        if( s[0] == '0' && s[1] == '?' ) s[1] = '9' ;
        else if( s[0] == '1' && s[1] == '?' ) s[1] = '1' ;
        return s ; 
    }
};
















































