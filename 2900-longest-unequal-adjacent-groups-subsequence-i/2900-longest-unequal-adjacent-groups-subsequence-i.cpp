












// class Solution {
// public:
//     vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
//     {
//               
//     }
// };














// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways ) ====> Simple Iteration  TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method ( Two Ways )   ======>   Simple Iteration
// // //  1st Method ( Two Ways )   ======>   Simple Iteration
// // //  1st Method ( Two Ways )   ======>   Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       
// // //  1st  Method   ====>      1st way   =====>       

// class Solution {
// public:
//     vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
//     {
//         vector<string> ans ;
//         ans.push_back( words[0] ) ;
//         for(int i=1; i<n; i++)
//         {
//             if( groups[i-1] == groups[i] ) 
//             {
//                 continue ;
//             }
//             ans.push_back( words[i] ) ; 
//         }
//         return ans ;       
//     }
// };





// // //  1st  Method   ====>     2nd  way   =====>       
// // //  1st  Method   ====>     2nd  way   =====>       
// // //  1st  Method   ====>     2nd  way   =====>       

class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
    {
        vector<string> ans ;
        int temp = -1 ;
        for(int i=0; i<n; i++)
        {
            if( groups[i] != temp ) temp = groups[i] , ans.push_back( words[i] ) ;   
        }
        return ans ;       
    }
};




































