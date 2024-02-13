











// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// // //   n is no of strings and m is length of each string                     
// // //  1st Method  ====>  Simple check each string   TC = O(n*m) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple check each string
// // //  1st Method    ======>   Simple check each string
// // //  1st Method    ======>   Simple check each string
// //                             
// // //   n is no of strings and m is length of each string                     
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    bool checkPalindrome( string s )
    {
        int i=0 , j = s.size() - 1 ; 
        while( i <= j ) 
        {
            if( s[i] != s[j] ) return false  ;
            i++ , j-- ; 
        } 
        return true  ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    string firstPalindrome(vector<string>& words) 
    {
        int n = words.size() ;
        for(int i=0; i<n; i++)
        {
            if(  checkPalindrome(words[i]) ) return words[i]  ;
        }
        return ""  ;
    }
};























