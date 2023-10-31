











// class Solution {
// public:
//     vector<int> findArray(vector<int>& pref) {
        
//     }
// };







// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Reverse xor new array   TC = O(n) , SC = O(n) 
// //                      
// //                      
// //  2nd Method  ==> Reverse xor Same array (not recommended) TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Reverse xor new array 
// // //  1st Method    ======>  Reverse xor new array 
// // //  1st Method    ======>  Reverse xor new array 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     vector<int> findArray(vector<int>& pref) 
//     {
//         int n = pref.size() ; 
//         vector<int> ans; 
//         ans.push_back(pref[0]) ; 
//         for(int i=1; i<n; i++)
//         {
//             int num = pref[i]  ^ pref[i-1] ; 
//             ans.push_back(num) ; 
//         }
//         return ans ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Reverse xor Same array  (not recommended)
// // //  2nd Method    ======>   Reverse xor Same array  (not recommended)
// // //  2nd Method    ======>   Reverse xor Same array  (not recommended)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n = pref.size() ; 
        int prev = pref[0] ;
        for(int i=1; i<n; i++)
        {
            pref[i]  = pref[i] ^ prev ;  
            prev = prev ^ pref[i] ; 
        }
        return pref ; 
    }
};



















































