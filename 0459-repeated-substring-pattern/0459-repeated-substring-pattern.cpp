









// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>    Simple Iteration    TC = O(  sqrt(n) * n  )    , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple iteration 
// // //  1st Method    ======>    Simple iteration 
// // //  1st Method    ======>    Simple iteration 
// //                             
// // //   Time Complexity   = O(  2 * sqrt(n)  * (2*n) )  ===  O(  sqrt(n) * n  )   
// //                              
// // //   Space Complexity  = O(n)   
// //                               






// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) 
//     {
//         int n = s.size() ;  
//         for(int l=n/2; l>=1; l--)
//         {
//             if( n % l == 0 )   // // // //  due to this for loop run only  2*sqrt(n) times
//             {
//                 string pattern = s.substr(0,l);     // // //   this will be O(n)
//                 string str = "";
//                 while(str.size()<n)  str = str + pattern ;     // // //   this will be O(n)
//                 if( str == s ) return true ;
//             }
//         }
//         return false ;
//     }
// };






class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.size() ;  
        for(int l=n/2; l>=1; l--)
        {
            if( n % l == 0 )     // // // //  due to this for loop run only  2*sqrt(n) times
            {
                string pattern = s.substr(0,l);    // // //   this will be O(n)
                int times = n/l ;
                string str = "";
                while(times--)  str += pattern ;    // // //   this will be O(n)
                if( str == s ) return true ;
            }
        }
        return false ;
    }
};








































