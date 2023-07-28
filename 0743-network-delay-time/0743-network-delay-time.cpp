






// class Solution {
// public:
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) 
//     {
//     }
// };





















// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  using Dijkstra algorithm   TC = O( V + Elog(E) ) , SC = O(5 *V) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    using Dijkstra algorithm
// // //  1st Method    ======>    using Dijkstra algorithm
// // //  1st Method    ======>    using Dijkstra algorithm
// //                             
// // //   Time Complexity   = O( V + Elog(E) )    
// //                              
// // //   Space Complexity  = O( 5*V )   
// //                               



class Solution {
public:
    void dijkstra(int source , vector<pair<int,int>>g[] , vector<int> & vis , vector<int> &dist )
    {
        set<pair<int,int>> st ;
        st.insert({0 , source}) ; 
        dist[source] = 0;
        while(st.size())
        {
            auto node = *st.begin() ;
            st.erase(st.begin()) ;
            int v = node.second ;
            int v_dist = node.first ;
            if(vis[v]) continue ;
            vis[v] = 1;
            for(auto child : g[v] )
            {
                int child_v = child.first ;
                int child_w = child.second ;
                // if( v_dist + child_w < dist[child_v] )
                if( dist[v] + child_w < dist[child_v] )
                {
                    dist[child_v] = v_dist + child_w ;
                    st.insert({dist[child_v] , child_v }) ;
                }
            }
        }
    }
    // // //  Main Function of Question ==>     Main Function of Question ==>
    // // //  Main Function of Question ==>     Main Function of Question ==>
    //
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        vector<pair<int,int>>g[n+5] ;
        for(int i=0; i<times.size(); i++)
        {
            g[times[i][0]].push_back( { times[i][1] , times[i][2] }) ;
        }
        vector<int> vis(n+5,0) ;
        vector<int> dist(n+5,INT_MAX) ;
        dijkstra( k , g ,  vis , dist ) ;
        int ans = 0 ;
        for(int i=1; i<=n; i++)
        {
            if(dist[i]==INT_MAX) return -1 ;
            ans = max(ans , dist[i]) ;  
        }
        return ans ;
    }
};






























