









// //   try to solve using BFS Topological sort method  ====>
// //   try to solve using BFS Topological sort method  ====>
// //   try to solve using BFS Topological sort method  ====>
// //   try to solve using BFS Topological sort method  ====>
// //   try to solve using BFS Topological sort method  ====>


// // Topological sort topic not done yet  
// // Topological sort topic not done yet  
// // Topological sort topic not done yet  
// // Topological sort topic not done yet  






// //
// // // // // // //  Solve Using  Only one  Method  ===>     
// // // // // // //  Solve Using  Only one  Method  ===>                        
// //                     
// //                 // //   n is node and m is edges 
// // //  1st Method  ====>  DFS(like Cycle Detection)   TC = O(n+m) , SC = O(3*n) or O(n+m)
// //                      
// //                      
// // //  2nd Method  ====>  BFS Topological sort(try to solve)   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   DFS(like Cycle Detection)  
// // //  1st Method    ======>   DFS(like Cycle Detection)  
// // //  1st Method    ======>   DFS(like Cycle Detection)  
// //                             
// // //   Time Complexity   = O(n+m)    // n is node and m is edges 
// //                              
// // //   Space Complexity  = O(3*n) or O(n+m)  // n is node and m is edges   
// //                               


class Solution {
public:
    bool dfs(int node , vector<vector<int>>& graph ,vector<int>&vis,vector<int>&path,vector<int>&safeOrNot )
    {
        vis[node] = 1 ;
        path[node] = 1 ;
        safeOrNot[node] = 0 ;
        for(int child : graph[node])
        {
            if( ! vis[child] &&  dfs(child , graph , vis , path , safeOrNot )  ) 
            {
                safeOrNot[child] = 0 ;
                return true ;
            }
            else if(path[child])
            {
                safeOrNot[node] = 0 ;
                return true ;
            }
        }
        safeOrNot[node] = 1 ;
        path[node] = 0 ;
        return false ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
        int n = graph.size() ;
        vector<int> vis(n,0)  , path(n,0) , safeOrNot(n,0) ;
        for(int i=0; i<n; i++ )
        {
            if( !vis[i] )     dfs(i , graph , vis , path , safeOrNot ) ;
        }
        vector<int> ans ;
        for(int i=0; i<n; i++ )  if(safeOrNot[i]) ans.push_back(i) ;
        return ans ;
    }
};









// //                           
// //                           
// // //  2nd Method    ======>   BFS Topological sort(try to solve) 
// // //  2nd Method    ======>   BFS Topological sort(try to solve) 
// // //  2nd Method    ======>   BFS Topological sort(try to solve) 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



// class Solution {
// public:
//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
//     }
// };































