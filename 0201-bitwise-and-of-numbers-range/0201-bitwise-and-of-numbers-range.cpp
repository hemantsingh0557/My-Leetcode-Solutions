













// class Solution {
// public:
//     int rangeBitwiseAnd(int left, int right) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Brute Force( TLE TLE TLE )  TC = O(left-right) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using(n & (n-1)) (Try to clear more) TC = O(32) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  (Try other if possible)   TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force( TLE TLE TLE )  
// // //  1st Method    ======>   Brute Force( TLE TLE TLE )  
// // //  1st Method    ======>   Brute Force( TLE TLE TLE )  
// //                             
// // //   Time Complexity   = O(left-right)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int rangeBitwiseAnd(int left, int right) 
//     {
//         int ans = INT_MAX ;
//         for(int i = left; i<=right; i++)
//         {
//             ans = (ans & i) ; 
//         }
//         return ans  ;
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>   Using ( n & (n-1) ) (Try to clear more)
// // //  2nd Method    ======>   Using ( n & (n-1) ) (Try to clear more)
// // //  2nd Method    ======>   Using ( n & (n-1) ) (Try to clear more)
// //                             
// // //   Time Complexity   = O(32)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int rangeBitwiseAnd(int left, int right) 
    {
        while( right > left ) right &= (right-1) ;
        return right  ;
    }
};








// //                           
// //                           
// // //  3rd Method    ======>   (Try other if possible) 
// // //  3rd Method    ======>   (Try other if possible) 
// // //  3rd Method    ======>   (Try other if possible) 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               









































































