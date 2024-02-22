














// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple using hashing   TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple using hashing 
// // //  1st Method    ======>   Simple using hashing 
// // //  1st Method    ======>   Simple using hashing 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if( n == 1 ) return 1  ;
        int m = trust.size() ; 
        unordered_map<int,int> mp ; 
        for( int i=0; i<m; i++)
        {
            mp[trust[i][0]] -- ; 
            mp[trust[i][1]] ++ ; 
        }
        int mx = 0 ; 
        int peo ; 
        for( auto it : mp ) 
        {
            if( mx < it.second ) peo = it.first , mx = it.second ;
        }
        if( mp[peo] == n-1 ) return peo ;
        return -1 ; 
    }
};























