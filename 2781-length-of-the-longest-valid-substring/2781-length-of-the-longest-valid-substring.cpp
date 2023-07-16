





// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// //                // // n is size of word , m is size of forbidden
// // //  1st Method  ====>  Map and Pointer or sliding window   TC = O(n *10 * log(m)) , SC = O(m) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int longestValidSubstring(string word, vector<string>& forbidden) 
//     {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Map and Pointer or sliding window 
// // //  1st Method    ======>   Map and Pointer or sliding window 
// // //  1st Method    ======>   Map and Pointer or sliding window 
// //                             
// // //   Time Complexity   = O(n *10 * log(m))    // n is size of word , m is size of forbidden
// //                              
// // //   Space Complexity  = O(m)  
// //                               



// class Solution {
// public:
//     int longestValidSubstring(string word, vector<string>& forbidden) 
//     {
//         int n = word.size() ;
//         unordered_set<string> st(forbidden.begin() , forbidden.end()) ; 
//         //
//         int ans = 0 , last = n ;   // // //   here is chanage if we do   last = j   in the below code 
//         for(int i=n-1; i>=0; i--)
//         {
//             string temp=""  ;
//             for(int j=i; j<min(last , i+11); j++ )
//             {
//                 temp.push_back(word[j]) ; 
//                 if(st.count(temp))
//                 {
//                     last = j ;
//                     break ;
//                 }
//             }
//             ans = max(ans , last - i ) ;
//         }
//         return ans ; 
//     }
// };





class Solution {
public:
    int longestValidSubstring(string word, vector<string>& forbidden) 
    {
        int n = word.size() ;
        unordered_set<string> st(forbidden.begin() , forbidden.end()) ; 
        int ans = 0 , last = n-1 ;    // // //   here is chanage if we do   last = j-1    in the below code 
        for(int i=n-1; i>=0; i--)
        {
            string temp=""  ;
            // for(int j=i; j<min(last , i+11); j++ )
            for(int j=i; j<=min(last , i+10); j++ )
            {
                temp.push_back(word[j]) ; 
                if(st.count(temp))
                {
                    last = j-1 ;
                    break ;
                }
            }
            ans = max(ans , last - i + 1 ) ;
        }
        return ans ; 
    }
};












