












// class Solution {
// public:
//     int firstUniqChar(string s) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Map and Iteration    TC = O(n) , SC = O(26) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Map and Iteration
// // //  1st Method    ======>    Simple Map and Iteration
// // //  1st Method    ======>    Simple Map and Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(26)   
// //                               


class Solution {
public:
    int firstUniqChar(string s) 
    {
        int n = s.size() ; 
        unordered_map<int,int> mp ;
        for(int i=0; i<n; i++ ) mp[s[i]] ++  ;  
        for(int i=0; i<n; i++ ) if( mp[s[i]] == 1 ) return i ;  
        return  -1 ;   
    }
};


































