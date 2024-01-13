













// class Solution {
// public:
//     int minSteps(string s, string t) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using map     TC = O(n) , SC = O(26) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Using map  
// // //  1st Method    ======>     Using map  
// // //  1st Method    ======>     Using map  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(26)   
// //                               


class Solution {
public:
    int minSteps(string s, string t) 
    {
        int n = t.size() ; 
        unordered_map<char,int> mp ; 
        for(int i=0; i<n; i++) mp[s[i]] ++ ;
        int ans = 0 ;  
        for(int i=0; i<n; i++)
        {
            if( ! mp[t[i]] ) ans++ ;
            else mp[t[i]] -- ; 
        }
        return ans ; 
    }
};












































