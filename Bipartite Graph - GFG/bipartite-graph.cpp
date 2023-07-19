//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution {
public:
    bool bfs(int vertex , vector<int> &nodeColor , vector<int>adj[])
    {
        queue<int> q ;
        q.push(vertex) ;
        while(q.size())
        {
            int node = q.front() ;
            q.pop() ;
            if(nodeColor[node]==0)   nodeColor[node] = 1 ;
            for(int child : adj[node])
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
	bool isBipartite(int V, vector<int>adj[])
	{
	    // Code here
        vector<int>nodeColor(V, 0) ;
        for(int i=0; i<V; i++)
        {
            if( nodeColor[i] ==0 && ! bfs(i , nodeColor , adj) )   return false ;
        }
        return true ;
	}

};








//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends