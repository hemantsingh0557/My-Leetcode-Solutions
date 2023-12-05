










// class Solution {
// public:
//     int numberOfMatches(int n) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simulate Method    TC = O(log(n)) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Simple logic   TC = O(1) Constant , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simulate  Method  
// // //  1st Method    ======>    Simulate  Method  
// // //  1st Method    ======>    Simulate  Method  
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int numberOfMatches(int n) 
//     {
//         int ans  = 0 ; 
//         while(n != 1)
//         {
//             if( n % 2 == 0 ) ans += n/2 , n = n/2 ; 
//             else ans += (n-1)/2 , n = (n-1)/2 + 1 ; 
//         }
//         return ans ; 
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   Simple logic     
// // //  2nd Method    ======>   Simple logic     
// // //  2nd Method    ======>   Simple logic     
// //                             
// // //   Time Complexity   = O(1)  constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int numberOfMatches(int n) 
    {
        return n-1  ;  
    }
};



































