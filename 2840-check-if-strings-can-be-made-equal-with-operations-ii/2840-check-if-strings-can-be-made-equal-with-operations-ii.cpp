









// class Solution {
// public:
//     bool checkStrings(string s1, string s2) 
//     {
//     }
// };













// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Check Even and Odd Place   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Simple Check Even and Odd Place   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Check Even and Odd Place
// // //  1st Method    ======>  Simple Check Even and Odd Place
// // //  1st Method    ======>  Simple Check Even and Odd Place
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1)   constant 
// //                               




// class Solution {
// public:
//     bool checkStrings(string s1, string s2) 
//     {
//         int n = s1.size()  ; 
//         int hsh1[150] ={0} ;
//         int hsh2[150] ={0} ;
//         int hsh3[150] ={0} ;
//         int hsh4[150] ={0} ;
//         for(int i=0; i<n; i++)
//         {
//             if( i%2 == 0 ) hsh1[s1[i]] ++ , hsh3[s2[i]] ++   ;
//             else  hsh2[s1[i]] ++  , hsh4[s2[i]] ++;
//         }
//         for(int i=1; i<150; i++)
//         {
//             if( hsh1[i] != hsh3[i] ) return false ;
//             if( hsh2[i] != hsh4[i] ) return false ;
//         }
//         return true ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  Simple Check Even and Odd Place
// // //  2nd Method    ======>  Simple Check Even and Odd Place
// // //  2nd Method    ======>  Simple Check Even and Odd Place
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant   
// //                               



class Solution {
public:
    bool checkStrings(string s1, string s2) 
    {
        int n = s1.size()  ; 
        int hsh1[150] ={0} ;
        int hsh2[150] ={0} ;
        for(int i=0; i<n; i++)
        {
            if( i%2 == 0 ) hsh1[s1[i]] ++ , hsh1[s2[i]] --   ;
            else  hsh2[s1[i]] ++  , hsh2[s2[i]] -- ;
        }
        for(int i=1; i<150; i++)
        {
            if( hsh1[i] ||  hsh1[i] ) return false ;
            if( hsh2[i] ||  hsh2[i] ) return false ;
        }
        return true ;
    }
};































