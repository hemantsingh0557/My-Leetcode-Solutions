












// class Solution {
// public:
//     int differenceOfSums(int n, int m) 
//     {
//         
//     }
// };














// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Iteration
// // //  1st Method    ======>  Simple Iteration
// // //  1st Method    ======>  Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int num1 = 0  , num2 = 0 ; 
        for(int i=1; i<=n; i++)
        {
            if( i % m == 0 ) num2 += i ;
            else num1 += i ;
        }
        return num1 - num2 ;
    }
};










































