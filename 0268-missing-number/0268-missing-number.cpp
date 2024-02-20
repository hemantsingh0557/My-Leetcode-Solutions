













// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort() function   TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Using Hashing    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Using xor(^) operator    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
// // //  4th Method  ====> Using xor(^) operator    TC = O(n) , SC = O(1) constant 
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> Using sort()  function 
// // //  1st Method    ======> Using sort()  function 
// // //  1st Method    ======> Using sort()  function 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin() , nums.end() ) ;
//         for(int i=0; i<n; i++)
//         {
//             if( i != nums[i] ) return i ; 
//         }
//         return n ; 
//     }
// };




// //                           
// //                           
// // //  2nd Method    ======>  Using Hashing
// // //  2nd Method    ======>  Using Hashing
// // //  2nd Method    ======>  Using Hashing
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         vector<int> v(n+1,0) ;
//         for(int i=0; i<n; i++)  v[nums[i]]++ ; 
//         for(int i=0; i<=n; i++) if( v[i] == 0 ) return i ; 
//         return n ; 
//     }
// };







// //                           
// //                           
// // //  3rd Method    ======>   Using xor(^) operator
// // //  3rd Method    ======>   Using xor(^) operator
// // //  3rd Method    ======>   Using xor(^) operator
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int sum = 0 ;
//         for(int i=0; i<n; i++ )
//         {
//             sum ^= i ;
//             sum ^= nums[i] ;
//         }
//         return sum ^ n ; 
//     }
// };







// //                           
// //                           
// // //  4th Method    ======>   Using formula ( n*(n+1)/2 )
// // //  4th Method    ======>   Using formula ( n*(n+1)/2 )
// // //  4th Method    ======>   Using formula ( n*(n+1)/2 )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size() ;
        int totalSum = n * (n+1) / 2  ;
        int sum = accumulate( nums.begin() , nums.end() , 0 ) ;
        return totalSum - sum ; 
    }
};






























