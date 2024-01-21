







// class Solution {
// public:
//     bool halvesAreAlike(string s) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration
// // //  1st Method    ======>    Simple Iteration
// // //  1st Method    ======>    Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    bool checkVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' ||
         c == 'I' || c == 'O' || c == 'U'  ;    
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool halvesAreAlike(string s) 
    {
        int n = s.size() ; 
        int a = 0 ,  b = 0 ;   
        for(int i=0; i<n; i++)
        {
            if( i < n/2 && checkVowel(s[i]) )  a++ ; 
            else if( checkVowel(s[i]) ) b++ ; 
        }
        if( a != b ) return false ; 
        return true ; 
    }
};
















