











// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    21st   April   2024   -   Sunday    .    








// class Solution {
// public:
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using dfs    TC = O(n+m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using dfs
// // //  1st Method    ======>  Using dfs
// // //  1st Method    ======>  Using dfs
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n+m)   
// //                               


class Solution {
public:
    int vis[1000000] = {0} ;
    bool dfs( int s , int d ,  vector<vector<int>>& graph )
    {
        if( s == d ) return true ;
        vis[s] = 1 ;
        for(auto v : graph[s] )
        {
            if( v == d ) return true ;
            if( vis[v]  ) continue ;
            if( dfs( v , d , graph  ) ) return true ;
        }
        return false ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<vector<int>> graph(n) ;
        int m = edges.size() ;
        for(int i=0; i<m; i++)
        {
            // if( edges[i][0] == source && edges[i][1] == destination  ) return true ;
            // if( edges[i][0] == destination && edges[i][1] == source  ) return true ;
            //
            graph[edges[i][0]].push_back(edges[i][1]) ;
            graph[edges[i][1]].push_back(edges[i][0]) ;
        }
        int ans = dfs( source , destination , graph  ) ;
        return ans ;
    }
};

















// //                           
// //                           
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               




















































