











// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                  // // here n is max length of s or t    
// // //  1st Method  ====> Simple Hashing  (map)    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using sort() function    TC = O(n*log(n)) , SC = O(log(n)) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// //                           
// //                           
// // //  1st Method    ======>   Simple Hashing  (map)
// // //  1st Method    ======>   Simple Hashing  (map)
// // //  1st Method    ======>   Simple Hashing  (map)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     bool isAnagram(string s, string t) 
//     {
//         unordered_map<int,int> mp ;
//         for(int i=0; i<s.size(); i++) mp[s[i]] ++ ;
//         for(int i=0; i<t.size(); i++) mp[t[i]] -- ;
//         for(auto it : mp ) if( it.second != 0 ) return false ;
//         return true ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using sort()
// // //  2nd Method    ======>   Using sort()
// // //  2nd Method    ======>   Using sort()
// //
// //                  // // here n is max length of s or t               
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if( s.size() != t.size() ) return false ;
        sort(s.begin(), s.end()) ;
        sort(t.begin(), t.end()) ;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != t[i]) return false ;
        }
        return true ;
    }
};














































































