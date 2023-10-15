












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
// // //  Wrong Method  ====> Wrong Method       Wrong Method        Wrong Method  
// //                      
// //                      
// // //  1st Method  ====>  Simple Using DP and LIS Varient    TC = O(n^2) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// // //  Wrong  Method    ======>  Wrong  Method       Wrong  Method          Wrong  Method 
// // //  Wrong  Method    ======>  Wrong  Method       Wrong  Method          Wrong  Method 
// // //  Wrong  Method    ======>  Wrong  Method       Wrong  Method          Wrong  Method 
// //                             



// class Solution {
// public:
//     int hammingDist( string & word1 , string & word2 )
//     {
//         int dist = 0; 
//         for(int i=0; i<word1.size(); i++) if( word1[i] != word2[i] ) dist ++ ; 
//         return dist ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
//     {
//         if( n==1) return {words[0]} ;
//         unordered_map<string ,int> mp1 ;
//         for(int i=0; i<n; i++)
//         {
//             mp1[words[i]] = groups[i] ;
//         }
//         vector<string> ans;
//         for(int i=1; i<n; i++)
//         {
//             vector<string> temp; 
//             temp.push_back( words[i-1] ) ; 
//             for(int j=i; j<n; j++)
//             {
//                 string str = temp[temp.size()-1] ;  
//                 if( mp1[words[j]] != mp1[str] &&  words[j].size() == str.size() &&
//                        hammingDist( str , words[j] ) == 1 )
//                 {
//                     temp.push_back( words[j] ) ; 
//                 }
//             }
//             if( ans.size() < temp.size() ) ans = temp ;
//         }
//         return ans ;
//     }
// };
















// //                           
// //                           
// // //  1st Method    ======>    Simple Using DP and LIS Varient  
// // //  1st Method    ======>    Simple Using DP and LIS Varient  
// // //  1st Method    ======>    Simple Using DP and LIS Varient  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int hammingDist( string & word1 , string & word2 )
    {
        int dist = 0; 
        for(int i=0; i<word1.size(); i++) if( word1[i] != word2[i] ) dist ++ ; 
        return dist ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) 
    {
        int maxLen = 0 , maxEnd = -1 ;
        vector<int> dp(n, 1); 
        vector<int> prevIndex(n); 
        for(int i=0; i<n; i++)
        {
            prevIndex[i] = -1 ;
            for(int j=0; j<i; j++)
            {
                if( groups[i] != groups[j] &&  words[i].size() == words[j].size() )
                {
                    if( hammingDist( words[i] , words[j] ) == 1)
                    {
                        if( dp[i] < dp[j]+1 ) 
                        {
                            dp[i] = dp[j]+1 ;
                            prevIndex[i] = j ;
                        }  
                    }
                }
            }
            if( dp[i] > maxLen )
            {
                maxLen = dp[i] ;
                maxEnd = i ; 
            }
        }
        cout<<"ok"<<endl;
        vector<string> ans ; 
        while( maxEnd != -1 ) 
        {
            ans.push_back( words[maxEnd] ) ;
            maxEnd = prevIndex[maxEnd] ;
        } 
        reverse( ans.begin() , ans.end() ) ;
        return ans ;
    }
};









































