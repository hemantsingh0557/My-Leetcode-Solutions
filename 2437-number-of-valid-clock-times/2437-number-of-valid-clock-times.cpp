










// class Solution {
// public:
//     int countTime(string time) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // // 1st Method ==> Simple if-else condition  TC = O(1) constant, SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple if-else condition 
// // //  1st Method    ======>   Simple if-else condition 
// // //  1st Method    ======>   Simple if-else condition 
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int countTime(string time) 
    {
        int ans = 1 ; 
        if( time[0] == '?'  && time[1] == '?' ) ans *= 24 ;
        else if( time[0] == '?' )
        {
            if( time[1] > '3' ) ans *= 2 ;
            else  ans *= 3 ;
        }
        else if( time[1] == '?' )
        {
            if( time[0] == '2' ) ans *= 4 ;
            else  ans *= 10 ;
        }
        //
        if( time[3] == '?' ) ans *= 6 ;
        if( time[4] == '?' ) ans *= 10 ; 
        return ans ;
    }
};
































