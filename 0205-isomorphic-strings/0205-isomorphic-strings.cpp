





















// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method (Two Ways)  ====> Using map   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two Ways )  ======>   Using map 
// // //  1st Method  ( Two Ways )  ======>   Using map 
// // //  1st Method  ( Two Ways )  ======>   Using map 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// // //  1st Method   ====>      1st way   =====>       
// // //  1st Method   ====>      1st way   =====>       
// // //  1st Method   ====>      1st way   =====>       

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) 
//     {
//         int n = s.size() ;
//         unordered_map<char , char> mp1 , mp2 ;
//         for(int i=0; i<n; i++)
//         {
//             if( mp1.count(s[i]) &&  mp1[s[i]] != t[i] ) return false ;
//             else mp1[s[i]] = t[i]  ;
//             if( mp2.count(t[i]) &&  mp2[t[i]] != s[i] ) return false ;
//             else mp2[t[i]] = s[i]  ;
//         }
//         return true  ;
//     }
// };





// // //  1st Method   ====>    2nd  way   =====>       
// // //  1st Method   ====>    2nd  way   =====>       
// // //  1st Method   ====>    2nd  way   =====>       


class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int n = s.size() ;
        unordered_map<char , char> mp1 , mp2 ;
        for(int i=0; i<n; i++)
        {
            if( !mp1.count(s[i]) && !mp2.count(t[i]) )  mp1[s[i]] = t[i] , mp2[t[i]] = s[i] ;
            else if( mp1[s[i]] != t[i] || mp2[t[i]] != s[i] ) return false  ;
        }
        return true  ;
    }
};













// //                           
// //                           
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// // //  2nd Method    ======>   Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               






















































