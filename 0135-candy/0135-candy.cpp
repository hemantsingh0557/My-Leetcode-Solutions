






// class Solution {
// public:
//     int candy(vector<int>& ratings) {
        
//     }
// };










// // //  try to understand the 2nd method more clearly
// // //  try to understand the 2nd method more clearly
// // //  try to understand the 2nd method more clearly
// // //  try to understand the 2nd method more clearly
// // //  try to understand the 2nd method more clearly
// // //  try to understand the 2nd method more clearly









// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Check left and Right neighbors  TC = O(2*n) , SC = O(n)
// //                      
// //                      
// // //  2nd Method  ====> Using Up-Down-Peak Method   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// //                           
// //                           
// // //  1st Method    ======>   Check left and Right neighbors
// // //  1st Method    ======>   Check left and Right neighbors
// // //  1st Method    ======>   Check left and Right neighbors
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int candy(vector<int>& ratings) 
//     {
//         int n = ratings.size() ;   
//         vector<int> distributedCandes(n,1) ;
//         //
//         //
//         // for the left neighbors
//         for(int i=1; i<n; i++)
//         {
//             if( ratings[i] > ratings[i-1] ) 
//             distributedCandes[i] = distributedCandes[i-1]+1 ;
//         } 
//         //
//         // for the right neighbors
//         int ans = distributedCandes[n-1] ;
//         for(int i=n-2; i>=0; i--)
//         {
//             if( ratings[i] > ratings[i+1] ) 
//             distributedCandes[i] = max( distributedCandes[i] , distributedCandes[i+1] +1 ) ; 
//             ans += distributedCandes[i] ;   
//         } 
//         // int ans = accumulate( distributedCandes.begin() , distributedCandes.end() , 0 ) ; 
//         return ans ;   
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Using Up-Down-Peak Method
// // //  2nd Method    ======>    Using Up-Down-Peak Method
// // //  2nd Method    ======>    Using Up-Down-Peak Method
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n = ratings.size() ; 
        int up = 0 , down = 0 , peak = 0 , total = 1 ;
        for(int i=1; i<n; i++)
        {
            if( ratings[i] > ratings[i-1] )
            {
                up++ , down = 0 ;
                peak = up+1 ;  
                total += peak ;
            }
            else if( ratings[i] == ratings[i-1] )
            {
                up = 0, down = 0 ;
                peak = 0 ;    
                total += 1 ;
            }
            else 
            {
                up = 0, down++ ;
                total += down+1  -  (peak > down ) ;
            }
        } 
        return total ;
    }
};






























































