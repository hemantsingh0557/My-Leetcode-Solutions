





// class Solution {
// public:
//     string largestOddNumber(string num) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Find Rightmost Odd Digit   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Find Rightmost Odd Digit   
// // //  1st Method    ======>    Find Rightmost Odd Digit   
// // //  1st Method    ======>    Find Rightmost Odd Digit   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n = num.size() ; 
        for(int i=n-1; i>=0; i--)
        {
            int temp = num[i] - '0' ; 
            if( temp % 2 == 1 ) return num.substr(0,i+1) ; 
        }
        return "" ; 
    }
};




































