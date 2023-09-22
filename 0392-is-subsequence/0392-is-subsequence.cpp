











// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion(Accepted)    TC = O(m*n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Two nested For loop    TC = O(m*n) , SC = O(1) constant 
// //                     
// //                     
// // //  3rd Method  ====>  Simple Loop   TC = O(n) , SC = O(1) constant 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion(Accepted)   
// // //  1st Method    ======>   Simple Recursion(Accepted)   
// // //  1st Method    ======>   Simple Recursion(Accepted)   
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int m , n ; 
//     bool check( int i , int j , string &s ,string &t )
//     {
//         if( i==m ) return true  ;
//         if( j==n ) return false ;
//         bool ans = false ;
//         if( s[i] == t[j] ) ans = check( i+1 , j+1  , s , t ) ;
//         else ans = check( i , j+1  , s , t ) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool isSubsequence(string s, string t) 
//     {
//         m = s.size() ; 
//         n = t.size() ;
//         bool ans = check( 0 , 0 , s , t ) ;
//         return ans ; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Two nested For loop
// // //  2nd Method    ======>   Two nested For loop
// // //  2nd Method    ======>   Two nested For loop
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     bool isSubsequence(string s, string t) 
//     {
//         int m = s.size() ; 
//         int n = t.size() ;
//         int ind = 0 ;
//         for(int i=0; i<m; i++)
//         {
//             int check = 0 ;
//             for(int j=ind ; j<n; j++)
//             {
//                 if( t[j] == s[i] ) 
//                 {
//                     ind = j+1 , check = 1 ;
//                     break ;
//                 }
//             }
//             // cout<<i<<" "<<ind<<" "<<check<<endl;
//             if( !check ) return false ;
//         }
//         return true ; 
//     }
// };















// //                           
// //                           
// // //  3rd Method    ======>    Simple One loops
// // //  3rd Method    ======>    Simple One loops
// // //  3rd Method    ======>    Simple One loops
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int m = s.size() ; 
        int n = t.size() ;
        int i=0 ; 
        for(int j=0; j<n && i<m ; j++)
        {
            if( t[j] == s[i] ) i++ ;  
        }
        return (i==m) ; 
    }
};


































