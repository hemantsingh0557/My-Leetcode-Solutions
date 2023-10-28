
















// class Solution {
// public:
//     int minChanges(string s) 
//     {
//     }
// };









// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ==> Simple iteration (solve during contest)  TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ==> Simple iteration => Just check next element   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////










// //                           
// //                           
// // //  1st Method    ======> Simple iteration  (solve during contest)
// // //  1st Method    ======> Simple iteration  (solve during contest)
// // //  1st Method    ======> Simple iteration  (solve during contest)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int minChanges(string s) 
//     {
//         int n = s.size() ;  
//         int ones = 0  , zeros = 0 ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             if( s[i] == '1' )
//             {
//                 ones ++; 
//                 if( ones % 2 == 0   ) ones = 0 ;
//                 else if( zeros > 0 ) ans ++ ,  ones = 0 , zeros = 0 ; 
//             }
//             else if( s[i] == '0'  )
//             {
//                 zeros ++ ;
//                 if ( zeros % 2 == 0 ) zeros = 0 ;
//                 else if( ones > 0 ) ans ++ ,  ones = 0 , zeros = 0 ; 
//             }
//         }
//         return  ans ;  
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Simple iteration => Just check next element
// // //  2nd Method    ======>   Simple iteration => Just check next element
// // //  2nd Method    ======>   Simple iteration => Just check next element
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int minChanges(string s) 
    {
        int n = s.size() ;  
        int ans = 0 ; 
        for(int i=0; i<n; i+=2)
        {
            if( s[i] != s[i+1]  ) ans++ ;  
        }
        return  ans ;  
    }
};
























