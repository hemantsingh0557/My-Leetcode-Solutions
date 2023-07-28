//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    
    // // // // //   Prim's Algorithm  Minimum Spanning Tree 
    // // // // //   Prim's Algorithm  Minimum Spanning Tree 
    // // // // //   Prim's Algorithm  Minimum Spanning Tree 
    // // // // //   Prim's Algorithm  Minimum Spanning Tree 
    
    
//     public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         // code here
//     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // // // // //   Kruskal's Algorithm: Minimum Spanning Tree 
    // // // // //   Kruskal's Algorithm: Minimum Spanning Tree 
    // // // // //   Kruskal's Algorithm: Minimum Spanning Tree 
    // // // // //   Kruskal's Algorithm: Minimum Spanning Tree 
    
	public:

   
    void make(int v , vector<int> &parent , vector<int> &Size)
    {
        parent[v] = v;
        Size[v] = 1;
    }
    int find(int v  , vector<int> &parent , vector<int> &Size)
    {
        if( v == parent[v] ) return v ;
        return  parent[v] = find(parent[v] , parent , Size) ;
    }
    void Union (int a , int b  , vector<int> &parent , vector<int> &Size) // union is reserved but Union is not
    {
        a = find(a , parent , Size) ;
        b = find(b , parent , Size) ;
        if(a != b)
        {
            if(Size[a]<Size[b])  swap(a,b) ;
            parent[b] = a ;
            Size[a] += Size[b] ;
        }
    }
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> parent(V+5 ) ;
        vector<int> Size(V+5 ) ;
        //
        vector<pair <int,pair<int,int> > > edges;
        for(int i = 0; i < V; i++) 
        {
            for(auto &ele : adj[i])
            {
                int u  = i ;
                int v  = ele[0];
                int wt = ele[1];
                // cout<<u<<" "<<v<<" "<<wt<<endl;
                edges.push_back({wt, {u,v}});
            }
        }
        sort(edges.begin(), edges.end());
        for(int i =0; i<V; i++) make(i , parent , Size) ;
    
        int total_cost = 0;
        for(auto &edge : edges)
        {
            int wt = edge.first;
            int u =  edge.second.first;
            int v =  edge.second.second;

            if(find(u , parent , Size) == find(v, parent , Size)) continue;
            Union(u, v , parent , Size);
            total_cost += wt;
            // cout<<u<<" "<<v<<endl;
        }
        return total_cost ;   
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends