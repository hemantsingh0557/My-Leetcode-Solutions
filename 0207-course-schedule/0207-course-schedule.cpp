




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                 // // n is number of courses and m is size of prerequisites
// // //  1st Method  ====>   DFS (TLE TLE TLE)   TC = O(n*m) , SC = O(n+m) constant
// //                      
// //                      
// //                 // //  n is number of courses and m is size of prerequisites
// // //  2nd Method  ====>   DFS   TC = O(n+m) , SC = O(n+m) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   DFS (TLE TLE TLE)
// // //  1st Method    ======>   DFS (TLE TLE TLE)
// // //  1st Method    ======>   DFS (TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(n*m)  // n is nof courses and m is size of prerequisites 
// //                              
// // //   Space Complexity  = O(n+m)  // n is number of courses and m is size of prerequisites  
// //                               



// class Solution {
// public:
//     int n  ;
//     int vis[2005] = {0} ;
//     bool dfs(int vertex , vector<vector<int>>&g )
//     {
//         vis[vertex] = 1 ;
//         for(auto child : g[vertex])
//         {
//             if(vis[child]) return true ;  
//             if(dfs(child,g)) return true ;
//         }
//         vis[vertex] = 0 ;
//         return false ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
//     {
//         n = numCourses ;
//         int m = prerequisites.size() ;
//         vector<vector<int>> g(n) ;
//         for(int i=0; i<m; i++)
//         {
//             int a = prerequisites[i][0]  ;  
//             int b = prerequisites[i][1]  ;  
//             g[a].push_back(b) ;
//         }
//         for(int i=0; i<n; i++)
//         {
//             if(  g[i].size()>0 ) if(dfs(i,g)) return false ;
//         }
//         return true ;  
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   DFS 
// // //  2nd Method    ======>   DFS 
// // //  2nd Method    ======>   DFS 
// //                             
// // //   Time Complexity   = O(n+m)  // n is number of courses and m is size of prerequisites
// //                              
// // //   Space Complexity  = O(n+m)  // n is number of courses and m is size of prerequisites
// //                               




class Solution {
public:
    int vis[2005] = {0} ;
    int course[2005] = {0} ;
    bool dfs(int vertex , vector<vector<int>>&g )
    {
        if(vis[vertex]) return false ;  
        vis[vertex] = 1 ;
        course[vertex] = 1 ;
        for(auto child : g[vertex])
        {
            // cout<<vertex<<" "<<child<<" "<<endl;
            if(course[child]) return true ;  
            if(dfs(child,g)) return true ;
        }
        course[vertex] = 0 ;
        return false ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n = numCourses ;
        int m = prerequisites.size() ;
        vector<vector<int>> g(n) ;
        for(int i=0; i<m; i++)
        {
            int a = prerequisites[i][0]  ;  
            int b = prerequisites[i][1]  ;  
            g[a].push_back(b) ;
        }
        for(int i=0; i<n; i++)
        {
            if(  g[i].size()>0 ) if(dfs(i,g)) return false ;
        }
        return true ;  
    }
};












































