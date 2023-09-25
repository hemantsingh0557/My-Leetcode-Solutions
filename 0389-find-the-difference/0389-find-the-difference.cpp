








// class Solution {
// public:
//     char findTheDifference(string s, string t) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Three ways)  ====> Simple hashing   TC = O(m) , SC = O(m) 
// //                      
// //                      
// // //  2nd Method  ====>  Using sort function   TC = O(mlog(m)) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using Xor operator   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Three Ways )   ======>   Simple Hashing    
// // //  1st Method  ( Three Ways )   ======>   Simple Hashing    
// // //  1st Method  ( Three Ways )   ======>   Simple Hashing    
// //                             
// // //   Time Complexity   = O(m)   
// //                              
// // //   Space Complexity  = O(m)   
// //                               


// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       

// class Solution {
// public:
//     char findTheDifference(string s, string t) 
//     {
//         int hsh1[150] = {0} ; 
//         int hsh2[150] = {0} ; 
//         int m = s.size() , n = t.size()  ;
//         for(int i=0; i<m; i++) hsh1[s[i] - 'a']++  ;
//         for(int i=0; i<n; i++) hsh2[t[i] - 'a']++  ;
//         for(int i =0; i<150; i++)
//         {
//             if( hsh1[i] != hsh2[i] ) return i+'a' ;
//         }
//         return 'a' ;
//     }
// };




// // //   1st  Method   ====>     2nd way   =====>       
// // //   1st  Method   ====>     2nd way   =====>       
// // //   1st  Method   ====>     2nd way   =====>       

// class Solution {
// public:
//     char findTheDifference(string s, string t) 
//     {
//         int hsh[150] = {0} ; 
//         int m = s.size() ;
//         for(int i=0; i<m; i++) hsh[s[i] - 'a']++  ;
//         // for(int i=0; i<m+1; i++) hsh[t[i] - 'a']-- ;
//         // for(int i =0; i<150; i++)  if( hsh[i] < 0 ) return i+'a' ;
//         //
//         //
//         //
//         for(int i =0; i<m+1; i++)  if( --hsh[t[i]-'a'] < 0 ) return t[i] ;
//         return 'a' ;
//     }
// };





// // //   1st  Method   ====>     3rd way   =====>       
// // //   1st  Method   ====>     3rd way   =====>       
// // //   1st  Method   ====>     3rd way   =====>       

// class Solution {
// public:
//     char findTheDifference(string s, string t) 
//     {
//         unordered_map<int,int> mp;  
//         int m = s.size() ;
//         for(int i=0; i<m; i++) mp[s[i] - 'a']++  ;
//         for(int i=0; i<m+1; i++)  if( --mp[t[i]-'a'] < 0 ) return t[i] ;
//         return 'a' ;
//     }
// };
















// //                           
// //                           
// // //  2nd Method    ======>    Using sort function 
// // //  2nd Method    ======>    Using sort function 
// // //  2nd Method    ======>    Using sort function 
// //                             
// // //   Time Complexity   = O(mlog(m))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     char findTheDifference(string s, string t) 
//     {
//         int m = s.size() ;
//         sort(s.begin() , s.end() ) ; 
//         sort(t.begin() , t.end() ) ; 
//         for(int i=0; i<m; i++) if( s[i] != t[i]) return t[i] ;
//         return t[m]  ;   
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>    using XOR operator
// // //  3rd Method    ======>    using XOR operator
// // //  3rd Method    ======>    using XOR operator
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int m = s.size() ;
        int x = '\0'  ;  
        for(int i=0; i<m; i++) x ^=  s[i] ;
        for(int i=0; i<m+1; i++) x ^=  t[i] ;
        return x  ;   
    }
};






















































































