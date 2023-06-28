





// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> BFS and  Dijkstra Algorithm   TC = O(V+E) , SC = O(V+E) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   BFS and  Dijkstra Algorithm 
// // //  1st Method    ======>   BFS and  Dijkstra Algorithm 
// // //  1st Method    ======>   BFS and  Dijkstra Algorithm 
// //                             
// // //   Time Complexity   = O(V+E)   
// //                              
// // //   Space Complexity  = O(V+E + V + V) == O(V+E) = O(V+E)  
// //                               




class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) 
    {
        int m = edges.size() ;
        vector<pair<int,double>> g[n+5] ;
        for(int i=0; i<m; i++)
        {
            g[edges[i][0]].push_back({edges[i][1] , succProb[i] }) ; 
            g[edges[i][1]].push_back({edges[i][0] , succProb[i] }) ; 
        }
        vector<double> probability(n,0.0);
        probability[start] = 1.0 ;
        queue<int> q ; 
        q.push(start) ;
        while(q.size())
        {
            int vertex = q.front();
            q.pop() ;
            for(auto child : g[vertex] )
            {
                pair<int, double> temp = child ;
                int newVertex = temp.first ;
                double Prob = temp.second ;
                double newProb = Prob * probability[vertex] ;
                if(newProb >probability[newVertex] )
                {
                    probability[newVertex]  = newProb ;
                    q.push(newVertex) ;
                }
            }
        }
        double ans = probability[end] ;
        return ans ;
    }
};







































