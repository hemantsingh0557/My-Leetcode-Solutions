




// class Solution {
// public:
//     int numTrees(int n) {
        
//     }
// };






// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>     TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int dp[20] ;
    int totalBST(int n)
    {
        if( n <= 1) return 1  ;
        if(dp[n] != -1 ) return dp[n] ;
        int ans  = 0; 
        for(int i=1; i<=n; i++)
        {
            ans  +=  totalBST(i-1) * totalBST(n-i) ;
        }
        return dp[n] =  ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int numTrees(int n) 
    {
        memset( dp , -1 , sizeof(dp) ) ;
        int ans = totalBST(n) ;
        return ans ;
    }
};



















