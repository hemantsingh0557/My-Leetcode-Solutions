







// class Solution {
// public:
//     vector<string> letterCombinations(string digits) {
//       return {};       
//     }
// };
















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Recursion and Backtracking    TC = O(4^n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Recursion and Backtracking 
// // //  1st Method    ======>  Recursion and Backtracking 
// // //  1st Method    ======>  Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O(4^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               






class Solution {
public:
    int n ;
    vector<string> ans ; 
    unordered_map<char, string> mp ;
    void allCombination(int i , string &comb ,  string & digits )
    {
        if(i==n)
        {
            ans.push_back(comb);
            return ;
        }
        string temp = mp[digits[i]] ;
        for(int j=0; j<temp.size(); j++)
        {
            comb.push_back( temp[j] ) ;  
            allCombination( i+1 , comb ,  digits) ; 
            comb.pop_back() ;  
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<string> letterCombinations(string digits) 
    {
        n = digits.size() ; 
        if(n==0) return {}  ;    
        mp = { {'2' , "abc"} , {'3' , "def"} , {'4' , "ghi"} , {'5' , "jkl"} , {'6' , "mno"} , {'7' , "pqrs"} , 
            {'8' , "tuv"} , {'9' , "wxyz"}  } ;   
        string comb ;    
        allCombination( 0 , comb , digits ) ; 
        return ans ;       
    }
};















































