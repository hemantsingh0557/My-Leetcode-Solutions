

// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    






// // // //  try to solve using Strongly Connected Components (Kosaraju algorithm)
// // // //  try to solve using Strongly Connected Components (Kosaraju algorithm)
// // // //  try to solve using Strongly Connected Components (Kosaraju algorithm)
// // // //  try to solve using Strongly Connected Components (Kosaraju algorithm)
// // // //  try to solve using Strongly Connected Components (Kosaraju algorithm)




















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>    Using  Greedy method  TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<string> maxNumOfSubstrings(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using  Greedy method
// // //  1st Method    ======>  Using  Greedy method
// // //  1st Method    ======>  Using  Greedy method
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int findRight(int i , string &s , vector<int>&leftIndex , vector<int> &rightIndex )
    {
        int right = rightIndex[s[i]-'a'] ;
        for(int j=i ; j<=right; j++ )
        {
            if(leftIndex[s[j]-'a'] < i ) return -1 ;
            right = max(right , rightIndex[s[j]-'a'] ) ;
        }
        return right ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<string> maxNumOfSubstrings(string s) 
    {
        int n = s.size() ;
        vector<int> leftIndex(30, INT_MAX)  , rightIndex(30, INT_MAX)  ;   
        for(int i=0; i<n; i++)
        {
            leftIndex[s[i]-'a']  = min( leftIndex[s[i]-'a']  ,i ) ;
            rightIndex[s[i]-'a']  = i ;
        }
        vector<string> ans ;
        int right = -1 ;
        for(int i=0; i<n; i++)
        {
            if(i==leftIndex[s[i]-'a'] )
            {
                int newRight = findRight( i , s , leftIndex , rightIndex ) ;
                if(newRight != -1)
                {
                    string temp = s.substr(i , newRight-i+1) ; 
                    if (ans.size() && i<right && ans.back().size()>temp.size()) ans.back() = temp ;  
                    else ans.push_back(temp) ;
                    right = newRight ;
                    //
                    //
                    // if (i > right) ans.push_back("");    
                    // right = newRight ;
                    // ans.back() = s.substr(i , right-i+1) ;
                }
            }
        }
        return ans ;
    }
};








































