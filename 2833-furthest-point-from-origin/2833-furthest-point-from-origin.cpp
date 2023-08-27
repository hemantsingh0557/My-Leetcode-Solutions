















// class Solution {
// public:
//     int furthestDistanceFromOrigin(string moves) 
//     {
//         
//     }
// };




















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration 
// // //  1st Method    ======>   Simple Iteration 
// // //  1st Method    ======>   Simple Iteration 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int furthestDistanceFromOrigin(string moves) 
    {
        int n = moves.size() ;
        int L_ct = 0 , R_ct = 0 ,  D_ct = 0 ;
        for(int i=0; i<n; i++)
        {
            if( moves[i] == 'L' )   L_ct ++ ;
            else if( moves[i] == 'R' ) R_ct ++ ;
            else D_ct ++ ;  
        }
        // if( L_ct >= R_ct ) return  L_ct + D_ct - R_ct ; 
        // return  R_ct + D_ct - L_ct  ;
        return  D_ct + abs( R_ct - L_ct )  ;
    }
};
























