









// class Solution {
// public:
//     int minExtraChar(string s, vector<string>& dictionary) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //  
// //
// //  Let n be the total characters in the string.
// //  Let m be the average length of the strings in dictionary.
// //  Let k be the length of the dictionary.
// //                   
// //
// // 1st Method ==>  Simple Recursion and Set ( TLE TLE TLE )  TC = O(2^n) , SC = O(n + m*k )    
// //                      
// //                      
// // 2nd Method ==>  DP Memoization and Set   TC = O(n^3) , SC = O(n + m*k )   
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion and Set ( TLE TLE TLE )
// // //  1st Method    ======>   Simple Recursion and Set ( TLE TLE TLE )
// // //  1st Method    ======>   Simple Recursion and Set ( TLE TLE TLE )
// //   
// //
// //  Let n be the total characters in the string.
// //  Let m be the average length of the strings in dictionary.
// //  Let k be the length of the dictionary.
// //
// //
// // //   Time Complexity   = O(2^n)    
// //                              
// // //   Space Complexity  = O(n + m*k ) 
// //                               




// class Solution {
// public:
//     unordered_set< string > st ; 
//     int n ; 
//     int solve(int i , string & s)
//     {
//         if(i==n) return  0 ; 
//         int ans = n+5 ;
//         string temp ; 
//         for(int j =i; j<n; j++)
//         {
//             int curr_Extra = 0 ; 
//             temp.push_back(s[j]) ;
//             if( ! st.count(temp) ) curr_Extra = temp.size() ;
//             int remaining_Extra = solve(j+1 , s)  ;  
//             ans = min( ans , curr_Extra + remaining_Extra  ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minExtraChar(string s, vector<string>& dictionary) 
//     {
//         n = s.size() ; 
//         int dic_sz = dictionary.size() ; 
//         for(int i=0; i<dic_sz ; i++ )
//         {
//             st.insert(dictionary[i]) ;
//         } 
//         int ans = solve( 0 , s ) ; 
//         return  ans ;   
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>    DP Memoization and Set 
// // //  2nd Method    ======>    DP Memoization and Set 
// // //  2nd Method    ======>    DP Memoization and Set 
// //                             
// //
// //  Let n be the total characters in the string.
// //  Let m be the average length of the strings in dictionary.
// //  Let k be the length of the dictionary.
// //
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(n + m*k )   
// //                               




class Solution {
public:
    unordered_set< string > st ; 
    int n ; 
    int dp[100] ;
    int solve(int i , string & s)
    {
        if(i==n) return  0 ; 
        if(dp[i] != -1 ) return dp[i] ; 
        int ans = n+5 ;
        string temp ; 
        for(int j =i; j<n; j++)
        {
            int curr_Extra = 0 ; 
            temp.push_back(s[j]) ;
            if( ! st.count(temp) ) curr_Extra = temp.size() ;
            int remaining_Extra = solve(j+1 , s)  ;  
            ans = min( ans , curr_Extra + remaining_Extra  ) ;
        }
        return dp[i] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minExtraChar(string s, vector<string>& dictionary) 
    {
        memset(dp , -1 , sizeof(dp) ) ;  
        n = s.size() ; 
        int dic_sz = dictionary.size() ; 
        for(int i=0; i<dic_sz ; i++ )
        {
            st.insert(dictionary[i]) ;
        } 
        int ans = solve( 0 , s ) ; 
        return  ans ;   
    }
};








































