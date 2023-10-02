











// class Solution {
// public:
//     bool winnerOfGame(string colors) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Game Theory    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// // //   Think more and more and chech in whihc case we remove and others are useless
// // //   just think and try to catch the itution





// //                           
// //                           
// // //  1st Method    ======>  Game Theory
// // //  1st Method    ======>  Game Theory
// // //  1st Method    ======>  Game Theory
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int n = colors.size() ;  
        int alice = 0 , bob = 0 ;   
        for(int i=1; i<n-1; i++)
        {
            if( colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A') alice ++ ;
            else if( colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B') bob ++ ;
        }
        return alice > bob ; 
    }
};





























