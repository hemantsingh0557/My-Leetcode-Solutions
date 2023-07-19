//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends





// // //// // //    BFS  and DFS Topological sort
// // //// // //    BFS  and DFS Topological sort
// // //// // //    BFS  and DFS Topological sort
// // //// // //    BFS  and DFS Topological sort
// // //// // //    BFS  and DFS Topological sort






// /// ///  don't use global declaration
// /// ///  don't use global declaration
// /// ///  don't use global declaration
// /// ///  don't use global declaration



// class Solution
// {
// 	public:
// 	int vis[100000] = {0} ; 
//     vector<int> ans ;
//     void dfs(int node , int V , vector<int> adj[])
//     {
//         vis[node] = 1 ;
//         for(int child : adj[node])
//         {
//             if(vis[child]) continue ;
//             dfs(child, V , adj) ;
//         }
//         ans.push_back(node) ;
//     }
// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    // code here
// 	    for(int i=0; i<V; i++)
//  	    {
//  	        if(vis[i]) continue ;
// 	        dfs(i , V , adj) ; 
// 	    }
// 	    reverse(ans.begin() , ans.end()) ;  
//         return ans ;
// 	}
// };








// class Solution
// {
// 	public:
	
//     void dfs(int node ,  vector<int> adj[] ,vector<int> &vis, stack<int> &st)
//     {
//         vis[node] = 1 ;
//         for(int child : adj[node])
//         {
//             if( ! vis[child]) dfs(child, adj, vis , st) ;
//         }
//         st.push(node) ;
//     }
// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    // code here
// 	    vector<int> vis(V,0) ; 
//         stack<int> st ;  
//         for (int i = 0; i < V; i++) 
//         {
//             if (!vis[i])  dfs(i, adj, vis , st);
//         }
//         vector<int> ans ;
//         while(st.size()) ans.push_back(st.top()) , st.pop() ; 
//         return ans ;
// 	}
// };







class Solution
{
	public:
	
    vector<int> bfs(vector<int> adj[] ,vector<int> &indegree, queue<int> &q )
    {
        vector<int> topo ;
        while(q.size())
        {
            int node = q.front() ; 
            q.pop() ;
            topo.push_back(node) ;  
            for(int child : adj[node])
            {
                indegree[child] -- ;
                if( indegree[child] ==0) q.push(child) ;
            }
        }
        return topo ;
    }
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(V,0) ; 
	    for(int i=0;i<V; i++)
	    {
	        for(auto it : adj[i]) indegree[it] ++ ;
	    }
        queue<int> q ;  
	    for(int i=0;i<V; i++)
	    {
	        if(indegree[i]==0) q.push(i) ;
	    }
	    
        vector<int> ans = bfs(adj , indegree , q) ;
        return ans ;
	}
};














//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends