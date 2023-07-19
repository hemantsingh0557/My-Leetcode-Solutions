





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //          
// //               // //  here n is no of nodes and e is no of edges           
// //                     
// // //  1st Method  ====>  Using  DFS      TC = O(n+e) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using  BFS      TC = O(n+e) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using  DFS
// // //  1st Method    ======>    Using  DFS
// // //  1st Method    ======>    Using  DFS
// //                             
// // //   Time Complexity   = O(n+e)     // //  here n is no of nodes and e is no of edges    
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int n ;
//     bool dfs(int vertex , vector<int> &nodeColor , vector<vector<int>>& graph)
//     {
//         if(nodeColor[vertex]==0)   nodeColor[vertex] = 1 ;
//         for(int child : graph[vertex])
//         {
//             // cout<<vertex<<"  "<<child<<endl;
//             if(nodeColor[child] == nodeColor[vertex] ) return false ;
//             if(nodeColor[child] != 0 ) continue ;
//             nodeColor[child] = - nodeColor[vertex] ;
//             if( ! dfs(child , nodeColor , graph) )  return false ;
//         }
//         return true ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool isBipartite(vector<vector<int>>& graph) 
//     {
//         n = graph.size() ;
//         vector<int>nodeColor(n, 0) ;
//         for(int i=0; i<n; i++)
//         {
//             if( nodeColor[i] ==0 && ! dfs(i , nodeColor , graph) )   return false ;
//         }
//         return true ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    Using   BFS 
// // //  2nd Method    ======>    Using   BFS 
// // //  2nd Method    ======>    Using   BFS 
// //                             
// // //   Time Complexity   = O(n+e)   // //  here n is no of nodes and e is no of edges    
// //                              
// // //   Space Complexity  = O(n)  
// //                               



class Solution {
public:
    int n ;
    bool bfs(int vertex , vector<int> &nodeColor , vector<vector<int>>& graph)
    {
        queue<int> q ;
        q.push(vertex) ;
        while(q.size())
        {
            int node = q.front() ;
            q.pop() ;
            if(nodeColor[node]==0)   nodeColor[node] = 1 ;
            for(int child : graph[node])
            {
                // cout<<vertex<<"  "<<child<<endl;
                if(nodeColor[child] == nodeColor[node] ) return false ;
                if(nodeColor[child] != 0 ) continue ;
                nodeColor[child] = - nodeColor[node] ;
                q.push(child) ; 
            }
        }
        return true ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool isBipartite(vector<vector<int>>& graph) 
    {
        n = graph.size() ;
        vector<int>nodeColor(n, 0) ;
        for(int i=0; i<n; i++)
        {
            if( nodeColor[i] ==0 && ! bfs(i , nodeColor , graph) )   return false ;
        }
        return true ;
    }
};

















































