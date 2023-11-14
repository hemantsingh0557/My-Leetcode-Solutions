












// class Solution {
// public:
//     int countPalindromicSubsequence(string s) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> first, last index and unique elements  TC = O(n) , SC = O(26) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   first, last index and unique elements
// // //  1st Method    ======>   first, last index and unique elements
// // //  1st Method    ======>   first, last index and unique elements
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(26)   
// //                               





class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        int n = s.size() ; 
        vector<vector<int> > v(26) ; 
        for(int i=0; i<n; i++)
        {
            if( v[s[i] - 'a'].size() < 2 ) v[s[i] - 'a'].push_back(i) ;
            else v[s[i] - 'a'][1] = i ; 
        }
        int ans = 0 ; 
        for(int i=0; i<26; i++)
        {
            if( v[i].size() == 2 )
            {
                unordered_set<char> st ; 
                for(int j = v[i][0]+1 ; j <v[i][1]; j++) st.insert(s[j]) ; 
                ans += st.size() ;
            }
        }
        return ans ; 
    }
};




































