









// class Solution {
// public:
//     int numberOfWays(string corridor) {
        
//     }
// };













// // //   also try to solve it in a better  way (same as below but some goog code quality)
// // //   also try to solve it in a better  way (same as below but some goog code quality)
// // //   also try to solve it in a better  way (same as below but some goog code quality)







// //  try to solve using DP
// //  try to solve using DP
// //  try to solve using DP
// //  try to solve using DP



// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Maths and Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Maths and Iteration   
// // //  1st Method    ======>    Simple Maths and Iteration   
// // //  1st Method    ======>    Simple Maths and Iteration   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// //  "SSSPPPSPPSPSSSSSSPPPSPP"   try to understand from this test case 
// //  "SSSPPPSPPSPSSSSSSPPPSPP"   try to understand from this test case 
// //  "SSSPPPSPPSPSSSSSSPPPSPP"   try to understand from this test case 



class Solution {
public:
    int numberOfWays(string corridor) 
    {
        int M = 1e9 + 7 ;   
        int n = corridor.size() ;  
        int s = 0 ; 
        for(int i=0; i<n; i++)  if( corridor[i] == 'S' ) s++ ; 
        if( s % 2 == 1 ) return  0 ;
        s = 0 ;
        int ans  = 0 ;
        for(int i=0; i<n; i++)
        {
            if( corridor[i] == 'S' ) s++ ; 
            if( s == 2 )
            {
                i++ , s  = 0 ;
                int ct  = 0 ; 
                while( corridor[i] != 'S' && i < n ) i++ , ct ++  ;  
                if( ans == 0 && i == n ) ans  ++ ;  
                else if( ans == 0 && i != n ) ans  += (ct+1) ;  
                else if( i != n ) ans = ( ans * 1LL * (ct+1)) % M ;
                i-- ; 
                ans %= M ;   
            }
        }
        return ans  ; 
    }
};

























