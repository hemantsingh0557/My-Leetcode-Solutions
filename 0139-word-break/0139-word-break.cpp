




// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>           
// // 
// //                     
// //                 // //  n is size of s and m is size of wrodDist             
// //                     
// // //  1st Method  ====> Simple Recursion (TLE TLE TLE)    TC = O() , SC = O(m) 
// //                      
// //                      
// // //  2nd Method  ====> Dp Memoization    TC = O(m + n^2 ) or O(m * n^2 ) , SC = O(m + n^2 )
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// // //  1st Method    ======>     Simple Recursion (TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O(m)   
// //                               



// class Solution {
// public:
//     int n ;
//     unordered_set<string> st ;
//     bool isPossible(int i , string s, vector<string>& wordDict )
//     {
//         if(i==n) return true ;
//         bool ans = false ;
//         for(int j = i ; j<n; j++)
//         {
//             string temp = s.substr(i, j-i+1 ) ; 
//             if( ! st.count(temp)  ) continue ;   
//             bool check = isPossible( j+1 , s , wordDict) ;
//             if( check ) 
//             {
//                 ans = true ;   
//                 break ;
//             }
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool wordBreak(string s, vector<string>& wordDict) 
//     {
//         n = s.size() ;
//         // cout<<n<<endl;
//         int m = wordDict.size() ;
//         for(int i=0; i<m; i++) st.insert(wordDict[i]) ;
//         int ans = isPossible( 0 , s , wordDict ) ;
//         return ans ;  
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>    Dp Memoization  
// // //  2nd Method    ======>    Dp Memoization  
// // //  2nd Method    ======>    Dp Memoization  
// //                             
// // //   Time Complexity   = O(m + n^2 )    if set.count() in Best case
// // //   Time Complexity   = O(m * n^2 )    if set.count() in Worst case
// //                              
// // //   Space Complexity  = O(m + n^2 )   
// //                               




class Solution {
public:
    int n ;
    int dp[350] ;
    unordered_set<string> st ;
    bool isPossible(int i , string s, vector<string>& wordDict )
    {
        if(i==n) return true ;
        bool ans = false ;
        if(dp[i] != -1) return dp[i] ;
        for(int j = i ; j<n; j++)
        {
            string temp = s.substr(i, j-i+1 ) ;
            //
            //
            // if( ! st.count(temp)  ) continue ;   
            // bool check = isPossible( j+1 , s , wordDict) ;
            // if( check )  
            //
            if( st.count(temp) && isPossible( j+1 , s , wordDict) ) 
            {
                ans = true ;   
                break ;
            }
        }
        return dp[i] =  ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        memset(dp , -1 , sizeof(dp)) ;
        n = s.size() ;
        int m = wordDict.size() ;
        for(int i=0; i<m; i++) st.insert(wordDict[i]) ;
        int ans = isPossible( 0 , s , wordDict ) ;
        return ans ;  
    }
};




















































