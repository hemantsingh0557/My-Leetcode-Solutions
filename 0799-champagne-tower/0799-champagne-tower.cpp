






// //   try to solve  one more time
// //   try to solve  one more time
// //   try to solve  one more time
// //   try to solve  one more time
// //   try to solve  one more time
// //   try to solve  one more time








// class Solution {
// public:
//     double champagneTower(int poured, int query_row, int query_glass) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion(TLE TLE TLE)   TC =O() , SC = O() 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE)    
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE)    
// // //  1st Method    ======>  Simple Recursion(TLE TLE TLE)    
// //                             
// // //   Time Complexity     
// //                              
// // //   Space Complexity   
// //                               




// class Solution {
// public:
//     double dp[105][105] ;
//     void calculateAnswer( double poured , int i , int j )
//     {
//         if( poured <= 0 ) return  ; 
//         double req = 1 - dp[i][j] ;
//         if( poured < req ) req = poured ;
//         dp[i][j] += req ;
//         double excess =  poured - req ;
//         // cout<<i<<" "<<j<<" "<<excess<<" "<<req<<endl;  
//         calculateAnswer( excess/2 , i+1 , j ) ;  
//         calculateAnswer( excess/2 , i+1 , j+1 ) ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     double champagneTower(int poured, int query_row, int query_glass) 
//     {
//         memset(dp , 0 , sizeof(dp) ) ;  
//         // double ans = calculateAnswer( poured , query_row , query_glass ) ;    
//         calculateAnswer( poured , 0 , 0 ) ;    
//         return dp[query_row][query_glass]  ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// //                             
// //                             
// // //   Time Complexity   = O( 105 * 105)         
// //                              
// // //   Space Complexity  = O( 105 * 105)     
// //                               




class Solution {
public:
    double dp[105][105] ;
    int totalpoured ; 
    double calculateAnswer( int i , int j )
    {
        if( i==0 && j==0 ) return totalpoured ;
        if( i<0 || j<0  ) return 0 ;
        if( dp[i][j] > -1 ) return dp[i][j]  ; 
        double upperLeft = calculateAnswer( i-1 , j-1 ) ;  
        double upperRight = calculateAnswer( i-1 , j ) ; 
        double left = 0 , right = 0 ;  
        if( upperLeft > 1 ) left = (upperLeft - 1)/2 ;
        if( upperRight > 1 ) right = (upperRight - 1)/2 ;
        dp[i][j] = left + right ;
        return dp[i][j] ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        totalpoured  = poured ;    
        double ans = calculateAnswer( query_row , query_glass ) ;  
        if( ans >1 ) ans = 1 ;
        return  ans ;
    }
};





















































