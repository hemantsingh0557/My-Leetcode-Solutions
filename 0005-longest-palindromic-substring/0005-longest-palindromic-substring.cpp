




// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> make all substring at each index and check Palindrome   TC = O(n^3) , SC = O(1) constant
// //                      
// //                      
// //                // //  2nd method is optimal than 1st but in worst case it will also run O(n^3)
// // //  2nd Method  ====> First make bigger length string and check palindrome    TC = O(n^3) , SC = O(1) constant
// //
// //                     
// // //  3rd Method  ====>  From each index as a middle of palindrome   TC = O(n^2) , SC = O(n)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     string longestPalindrome(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   make all substring at each index and check Palindrome 
// // //  1st Method    ======>   make all substring at each index and check Palindrome 
// // //  1st Method    ======>   make all substring at each index and check Palindrome 
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     bool isPalindrome(string temp)
//     {
//         int i=0 , j = temp.size()-1 ;
//         while(i<=j) if(temp[i++] != temp[j--]) return false ;
//         return true ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string longestPalindrome(string s) 
//     {
//         int n = s.size() ;
//         string ans = "" ;
//         for(int i=0; i<n; i++)
//         {
//             string temp = "" ;
//             for(int j=i; j<n; j++)
//             {
//                 temp.push_back(s[j]) ;
//                 if(isPalindrome(temp) && j-i+1>ans.size()) ans = temp ;
//             }
//         }
//         return ans ;
//     }
// };





// //                           
// //                           
// // //  2nd Method    ======>   First make bigger length string and check palindrome 
// // //  2nd Method    ======>   First make bigger length string and check palindrome 
// // //  2nd Method    ======>   First make bigger length string and check palindrome 
// //                           
// //                        
// // //   Time Complexity   = O(n^3)   //  2nd method is optimal than 1st but in worst case it will also run O(n^3) 
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     bool isPalindrome(string temp)
//     {
//         int i=0 , j = temp.size()-1 ;
//         while(i<=j) if(temp[i++] != temp[j--]) return false ;
//         return true ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string longestPalindrome(string s) 
//     {
//         int n = s.size() ;
//         string ans = "" ;
//         for(int len=n; len>0; len--)
//         {
//             for(int j=0; j<=n-len; j++)
//             {
//                 string temp = s.substr(j, len) ;
//                 if(isPalindrome(temp) ) return temp ;
//             }
//         }
//         return "" ;
//     }
// };







// //                           
// //                           
// // //  3rd Method    ======>    From each index as a middle of palindrome   
// // //  3rd Method    ======>    From each index as a middle of palindrome   
// // //  3rd Method    ======>    From each index as a middle of palindrome   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int n  ;
    string PalindromString(int i , int j , string& s)
    {
        while(i>=0 && j<n && s[i]==s[j]) i-- , j++ ;
        string ans = s.substr(i+1 , j-i-1) ;
        return ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    string longestPalindrome(string s) 
    {
        n = s.size() ;
        string ans = "" ;
        for(int i=0; i<n; i++)
        {
            string temp = PalindromString(i , i , s) ; // // when odd length then i at the middle like => abcdedcba
            if(temp.size()>ans.size()) ans = temp ;
            temp = PalindromString(i , i+1 , s) ;    // // when even length then i and i+1 at middle like =>  abcdeedcba
            if(temp.size()>ans.size()) ans = temp ;
        }
        return ans ;
    }
};




















