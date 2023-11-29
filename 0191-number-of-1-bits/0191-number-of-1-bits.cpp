














// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple RightShift    TC = O(32) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Use in built function     TC = O(32) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Using  bitset<32>     TC = O(32) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple RightShift 
// // //  1st Method    ======>  Simple RightShift 
// // //  1st Method    ======>  Simple RightShift 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int hammingWeight(uint32_t n) 
//     {
//         int ans = 0 ; 
//         for(int i=0; i<32; i++)
//         {
//             if( (n >> i) & 1 ) ans ++ ;
//         }
//         return ans ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    Use in built function 
// // //  2nd Method    ======>    Use in built function 
// // //  2nd Method    ======>    Use in built function 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int hammingWeight(uint32_t n) 
//     {
//         int ans = __builtin_popcount(n) ; 
//         return ans ;
//     }
// };












// //                           
// //                           
// // //  3rd Method    ======>   Using  bitset<32> 
// // //  3rd Method    ======>   Using  bitset<32> 
// // //  3rd Method    ======>   Using  bitset<32> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int ans = bitset<32>(n).count() ; 
        // //   Bitset is a array of bools (why are we using it here? because the values 
        // //   here are only in 0's and 1's similar to true and false which are 1 & 0 respectively)
        // //   It is a more compact version of arrays & vectors and have some other restrictions 
        // //   (like you must mention the total size at the time of declaration, etc)
        // //   We use count to see how many bools are true (or how many bits are 1, 
        // //   which we actually want)
        return ans ;
    }
};















































