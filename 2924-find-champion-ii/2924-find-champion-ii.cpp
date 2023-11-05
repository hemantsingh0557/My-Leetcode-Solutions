










// class Solution {
// public:
//     int findChampion(int n, vector<vector<int>>& edges) 
//     {
//         
//     }
// };












// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     // //  check TC and SC , not confirmed
// // //  1st Method  ====> Using dfs and find n-1 stronger    TC = O(2*n) , SC = O(2*n) 
// //                      
// //                      
// // //  2nd Method  ====> Count In-Degree    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using dfs and find n-1 stronger 
// // //  1st Method    ======>    Using dfs and find n-1 stronger 
// // //  1st Method    ======>    Using dfs and find n-1 stronger 
// //                             
// // // //  check TC and SC , not confirmed
// //
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(2*n)  
// //                               



// class Solution {
// public:
//     int dfs( int i , vector<vector<int>>&v , vector<int> & vis)
//     {
//         int ct = 0 ;  
//         for(auto child : v[i] )
//         {
//             if( vis[child]  ) continue ;
//             vis[child] = 1 ;
//             ct += 1 + dfs( child , v , vis) ;
//         }
//         return ct ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findChampion(int n, vector<vector<int>>& edges) 
//     {
//         int m = edges.size() ;
//         vector<vector<int>> v(n ) ;
//         for(int i=0; i<m; i++)
//         {
//             v[edges[i][0]].push_back( edges[i][1] ) ;
//         }
//         for(int i=0; i<n; i++)
//         {
//             vector<int> vis(n ,0) ;
//             if( dfs(i , v , vis) == n-1 ) return i ; 
//         }
//         return -1 ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Count In-Degree  
// // //  2nd Method    ======>   Count In-Degree  
// // //  2nd Method    ======>   Count In-Degree  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// //
// // in this case we check if any one has 0 means if ith is stronger then is does not have any 
// // incoming edge means if has 0 in-degree and if any another node also has 0 in-degree
// // then it means we can't say which is stronger so return -1(like in example 2 of question)
// //


class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) 
    {
        int m = edges.size() ;
        vector<int> v(n ) ;
        for(int i=0; i<m; i++)
        {
            v[edges[i][1]]++ ;
        }
        int ct = 0; 
        int ans = -1 ;
        for(int i=0; i<n; i++)
        {
            if( v[i] == 0 ) ct++  , ans = i ;
        }
        return ct > 1 ? -1 : ans ; 
    }
};


































