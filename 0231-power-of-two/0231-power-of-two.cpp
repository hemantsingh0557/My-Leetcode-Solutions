











// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Five   Method  ===>     
// // // // // // //  Solve Using  Five   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple loop and right shift   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Check (2^30) % n == 0     TC = O(1) constant , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Using popcount (setbits)   TC = O(1) constant , SC = O(1) constant 
// //                     
// //                     
// // //  4th Method  ====> Using bitset<31> (setbits)  TC = O(1) constant , SC = O(1) constant 
// //                     
// //                     
// // //  5th Method  ====> Using  (n & (n-1) ) == 0    TC = O(1) constant , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> Simple loop and right shift
// // //  1st Method    ======> Simple loop and right shift
// // //  1st Method    ======> Simple loop and right shift
// //                             
// // //   Time Complexity   = O(32)   
// //                              
// // //   Space Complexity  = O(32)   
// //                               

// class Solution {
// public:
//     bool isPowerOfTwo(int n) 
//     {
//         // cout<<n<<endl;
//         for(int i=0; i<32; i++)
//         {
//             // cout<<i<<" ";
//             int square = 1<<i ;
//             if( square == n ) return true ;
//             else if( square > n ) return false ;
//         }
//         return false ; 
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>  check  (2^30) % n == 0 
// // //  2nd Method    ======>  check  (2^30) % n == 0 
// // //  2nd Method    ======>  check  (2^30) % n == 0 
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     bool isPowerOfTwo(int n) 
//     {
//         // // // (1<<30) or 2^30  is the beggest power of 2 which is less than  2^31 - 1
//         // // // means if 2^30 is biggest power so any power of 2 which is less than 2^30 then that 
//         // // // will definitely divide the 2^30
//         // // // like 2 , 4, 8, 16 , 32 ,64 , 128 , 256 , 512 , 1024 , 2048 , 4096 .......
//         // // // these all will deveide the 2^30
//         //
//         //
//         // if( n > 0 && (1<<30) % n == 0 ) return true ;
//         // return false ; 
//         return n > 0 && (1<<30) % n == 0  ;
//     }
// };






// //                           
// //                           
// // //  3rd Method    ======>  using popcount (setbits)
// // //  3rd Method    ======>  using popcount (setbits)
// // //  3rd Method    ======>  using popcount (setbits)
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     bool isPowerOfTwo(int n) 
//     {
//         // if n =2 then set bit only 1 or if n = 4 then set bit also only 1
//         // means we can select any power of 2 and in that case set bit is always 1
//         return n > 0 &&  __builtin_popcount(n) == 1 ;
//     }
// };






// //                           
// //                           
// // //  4th Method    ======>   using bitset<31> (setbits)
// // //  4th Method    ======>   using bitset<31> (setbits)
// // //  4th Method    ======>   using bitset<31> (setbits)
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //  

// class Solution {
// public:
//     bool isPowerOfTwo(int n) 
//     {
//         // if n =2 then set bit only 1 or if n = 4 then set bit also only 1
//         // means we can select any power of 2 and in that case set bit is always 1
//         return n > 0 &&  bitset<31>(n).count() == 1 ;
//     }
// };





// //                           
// //                           
// // //  5th  Method    ======> using  (n & (n-1) ) == 0  
// // //  5th  Method    ======> using  (n & (n-1) ) == 0  
// // //  5th  Method    ======> using  (n & (n-1) ) == 0  
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //    



class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        // n is 8 (binary: 1000), then n-1 is 7 (binary: 0111). then n & (n-1) results in 0 
        // n is 16 (binary: 10000), then n-1 is 15 (binary: 01111). then n & (n-1) results in 0
        return n > 0 &&  (n & (n-1) ) == 0 ; 
    }
};






























