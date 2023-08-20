








// class Solution {
// public:
//     bool isAcronym(vector<string>& words, string s) 
//     {
//     }
// };























// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
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
    bool isAcronym(vector<string>& words, string s) 
    {
        int n = words.size() ;
        int sz = s.size() ;
        if( n != sz ) return false ;
        for(int i=0; i<n; i++)
        {
            if( words[i][0] != s[i] ) return false ;
        }
        return true ;
    }
};





























