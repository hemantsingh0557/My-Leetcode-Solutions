






// //
// // // // // // //  Solve Using Two Method  ===>     
// // // // // // //  Solve Using Two Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Hashing (map)    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using sort()    TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        
//     }
// };



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
//         int n = s.size() ;
//         int m = t.size() ;
//         if(n!=m) return false ;
//         unordered_map<char,int> mp ; 
//         for(int i=0; i<n; i++) mp[s[i]] ++ ;
//         for(int i=0; i<m; i++)
//         {
//             if( ! mp.count(t[i]) || mp[t[i]]==0 ) return false ;
//             else mp[t[i]] -- ;  
//         }
//         return true ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Using sort()
// // //  2nd Method    ======>   Using sort()
// // //  2nd Method    ======>   Using sort()
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int n = s.size() ;
        int m = t.size() ;
        if(n!=m) return false ;
        sort(s.begin(), s.end()) ;
        sort(t.begin(), t.end()) ;
        for(int i=0; i<n; i++)
        {
            if(s[i] != t[i]) return false ;
        }
        return true ;
    }
};





















































