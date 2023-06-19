




// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two Pointer and function    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     bool validPalindrome(string s) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Two Pointer and function         
// // //  1st Method    ======>     Two Pointer and function         
// // //  1st Method    ======>     Two Pointer and function        
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:

    bool isPalindrome(int i, int j , string& s )
    {
        while(i<j)
        {
            if(s[i]==s[j])  i++ , j-- ;
            else return false ;
        }
        return true ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool validPalindrome(string s) 
    {
        int n = s.size() ;
        int i = 0, j = n-1 ;
        while(i<j)
        {
            if(s[i]==s[j])  i++ , j-- ;
            else return isPalindrome(i , j-1, s ) || isPalindrome(i+1 , j, s ) ;
        }
        return true  ;
    }
};



























