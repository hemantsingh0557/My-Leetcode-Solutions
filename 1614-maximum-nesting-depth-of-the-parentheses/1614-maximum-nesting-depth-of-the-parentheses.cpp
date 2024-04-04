











// class Solution {
// public:
//     int maxDepth(string s) {
        
//     }
// };












// // // //   just go according to the question 
// // // //   just go according to the question 
// // // //   just go according to the question 
// // // //  Although the question description is not very clear (at least for me).
// // // //  Although the question description is not very clear (at least for me).
// // // //  Although the question description is not very clear (at least for me).











// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using counter or using stack(try it)  TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// // // read the problem description carefully 
// // // as it is stated that string is always VPS and depth only increase when 
// // // there is bracket pair .


// //                           
// //                           
// // //  1st Method    ======>  Using counter 
// // //  1st Method    ======>  Using counter 
// // //  1st Method    ======>  Using counter 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int maxDepth(string s) 
    {
        int n = s.size() ; 
        int ans = 0 , ct = 0 ;
        for(int i=0; i<n; i++)
        {
            if( s[i] == '(' ) ct++ ;  
            else if( s[i] == ')' ) ct-- ;   
            ans = max( ans , ct ) ; 
        }
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







































