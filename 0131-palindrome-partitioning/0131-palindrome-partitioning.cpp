



// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion and Backtracking   TC = O((2^n) * n)  , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<vector<string>> partition(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion and Backtracking 
// // //  1st Method    ======>  Simple Recursion and Backtracking 
// // //  1st Method    ======>  Simple Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O((2^n) * n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




class Solution {
public:
    int n ; 
    vector<vector<string>> ans ;
    bool isPalindrome( int i , int j , string s )
    {
        while(i<j) if(s[i++] != s[j--]) return false ;
        return true ;
    }
    void findPartition(int i ,string s , vector<string>& Substring )
    {
        if(i==n)
        {
            ans.push_back(Substring ) ;   
            return ;  
        }
        for(int j=i; j<n; j++)
        {
            if(isPalindrome(i , j , s))
            {
                Substring.push_back(s.substr(i , j-i+1)) ;
                findPartition(j+1 , s , Substring ) ; 
                Substring.pop_back() ;
            }
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<string>> partition(string s) 
    {
        n = s.size() ;
        vector<string> Substring ;
        findPartition(0 , s , Substring ) ;  
        return ans ; 
    }
};







































