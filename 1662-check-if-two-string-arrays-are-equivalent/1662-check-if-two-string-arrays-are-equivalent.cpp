















// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
//     }
// };




















// //  //  //  try to solve using   Two Pointer
// //  //  //  try to solve using   Two Pointer
// //  //  //  try to solve using   Two Pointer
// //  //  //  try to solve using   Two Pointer
// //  //  //  try to solve using   Two Pointer



// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Concatenate and Compare    TC = O(n+m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====> ( solve it )Two Pointer    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Concatenate and Compare
// // //  1st Method    ======>  Simple Concatenate and Compare
// // //  1st Method    ======>  Simple Concatenate and Compare
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n+m)   
// //                               

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        int n = word1.size() ,  m = word2.size() ; 
        string s1 = "" ,   s2 = ""  ;
        for(int i=0; i<n; i++) s1 += word1[i]  ;  
        for(int i=0; i<m; i++) s2 += word2[i]  ;
        return s1 == s2 ;   
    }
};














// //                           
// //                           
// // //  2nd Method    ======>   ( solve it ) Two Pointer
// // //  2nd Method    ======>   ( solve it ) Two Pointer
// // //  2nd Method    ======>   ( solve it ) Two Pointer
// //
// //   Here N is the number of strings in the list and 
// //   K is the maximum length of a string in it.   
// //
// // //   Time Complexity   = O(n*k)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
//     }
// };






































