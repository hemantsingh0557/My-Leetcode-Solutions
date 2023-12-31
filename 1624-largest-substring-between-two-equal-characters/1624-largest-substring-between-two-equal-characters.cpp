























// class Solution {
// public:
//     int maxLengthBetweenEqualCharacters(string s) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(n) , SC = O(26) 
// //                      
// //                      
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
// // //   Space Complexity  = O(26)   
// //                               





class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        int n = s.size() ; 
        vector<int> last(150) ; 
        for(int i=0; i<n; i++) last[s[i]] = i  ;
        int ans = -1  ; 
        for(int i=0; i<n; i++) ans = max( ans , last[s[i]] - i - 1 ) ; 
        return ans ; 
    }
};






























