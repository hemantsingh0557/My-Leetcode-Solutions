









// class Solution {
// public:
//     bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Maths     TC = O(1) constant  , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Simple Maths     TC = O(1) constant  , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Simple Maths     TC = O(1) constant ,  SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======>   Simple Maths 
// // //  1st Method    ======>   Simple Maths 
// // //  1st Method    ======>   Simple Maths 
// //                             
// // //   Time Complexity   = O(1) constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
//     {
//         // //   It is the main edge case 
//         if(sx==fx && sy==fy && t == 1) return false ;  // //   
//         //
//         //
//         //
//         //  the below explanation work when both both fx and fy is greater than sx and fy
//         //  although the below code can be modified to work for all cases so here we using symmetry
//         //  because when sx>fy or sy>fy then we need to imagine a new point in the same direction and 
//         //  at the same distance from the (sx, sy)
//         //
//         //  so for this we just move the old finish ponits by two times 
//         //  and now we solve the question using (sx,sy) and the new (fx, fy) whihc we 
//         // calculated as below
//         //  
//         //
//         if(sx>fx) fx += 2*(sx-fx) ;
//         if(sy>fy) fy += 2*(sy-fy) ;
//         // 
//         //
//         //
//         //
//         // if we move through diagonal then we need less time so we try to make a square
//         //  and for this we find the difference  then take minimum let say it is mn 
//         //  then in square of (mn+1) X (mn+1) (calculated below) we move diagonally
//         //  in example 1 of question Input: sx = 2, sy = 4, fx = 7, fy = 7, t = 6
//         //   here difference is 7-2 = 5 and 7-4 = 3  so minimum is 3  that is mn means  mn = 3
//         //  here we make a square of 4 X 4  then we move diagonally 
//         //
//         int x = fx-sx , y = fy-sy ; 
//         int mn = min( x , y) ;
//         //
//         int ans = mn ; 
//         // when we move diagonally then we move at least mn steps then we will reach at 
//         // the diagonal last cell of the square in example mn is 3 and we move diagonally 
//         // so we reach at the new cell ( 5 ,3 )
//         //
//         //
//         // the new cell (5 ,3 ) can be calcu;ated by    sx+mn , sy+mn  
//         //
//         int newx = sx+mn , newy = sy+mn ;
//         //
//         // now if newy ==fy means we are in the same y-coordinate then it means we need to 
//         // move in x-direction otherwise we need to move in y-direction
//         if( newy == fy ) ans += fx - newx ;
//         else  if( newx == fx ) ans += fy - newy ;
//         //
//         // now the ans whihc we calculated is the minimum time to reacg at (fx, fy) now if it is 
//         // less than  the given time   t  then it means we will definately reahc at (fx , fy)   
//         // otherwise we can't reach
//         if( ans <= t) return true ;
//         return false ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Simple Maths ( Better Method )
// // //  2nd Method    ======>   Simple Maths ( Better Method )
// // //  2nd Method    ======>   Simple Maths ( Better Method )
// //                             
// // //   Time Complexity   = O(1)  constant  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
//     {
//         if(sx==fx && sy==fy && t == 1) return false ; 
//         //
//         //
//         int x = abs(fx-sx) , y = abs(fy-sy) ; 
//         int mx = max( x , y) ;
//         //
//         // here we assume a square of max difference of points now in this square of length mx we move 
//         // from any points to any other points if and only if mx <= t   otherwise we can't reach 
//         //
//         if(mx <= t ) return true ; 
//         //
//         return false ;
//     }
// };










// //                           
// //                           
// // //  3rd  Method    ======>   Simple  Maths 
// // //  3rd  Method    ======>   Simple  Maths 
// // //  3rd  Method    ======>   Simple  Maths 
// //                             
// // //   Time Complexity   = O(1)  constant  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        if( sx == fx && sy == fy && t == 1 ) return false ;   
        if( sx > fx ) swap(sx , fx) ;   
        if( sy > fy ) swap(sy , fy) ;   
        int mn =  min( fx - sx , fy - sy ) ;   
        int ans = 0 ; 
        if( sx + mn == fx )  ans  = fy - sy ;    // ans  = mn  +  (fy - (sy + mn) ) ;   
        else if( sy + mn == fy )  ans  = fx - sx   ;   //  ans  = mn  +  fx - (sx + mn)  ; 
        // cout<<x<<" "<<y<<" "<<ans<<" "<<t<<endl;
        if( t >= ans ) return true ;  
        return false ;  
    }
};
















































