









// class Solution {
// public:
//     int countOrders(int n) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Only Maths ( Permutation )     TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// //                           
// // //  1st Method    ======>   Only Maths ( Permutation )
// // //  1st Method    ======>   Only Maths ( Permutation )
// // //  1st Method    ======>   Only Maths ( Permutation )
// //                             
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int countOrders(int n) 
    {
        int M = 1e9+7 ;  
        int ans = 1 ;  
        for(int i=2; i<=n; i++)
        {
            int spaces = 2*i-1 ;
            int ways = spaces * (spaces+1) / 2 ;
            ans = (ans * 1LL * ways) % M ;  
        }
        return ans ; 
    }
};





























