












// //  LeetCode  Biweekly Contest  128  (  Able To Solve Two Question )


// //  3rd  Question  ===> Not Not Able to solve in contest


// //  Today's  Date   -    13th April 2024  -  Saturday     .    

















// class Solution {
// public:
//     vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) 
//     {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using dfs    TC = O() , SC = O() 
// //                      
// //                      
// // //  2nd Method  ====> Try other like dijkstra's algorithm    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Try any other    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using dfs  
// // //  1st Method    ======>   Using dfs  
// // //  1st Method    ======>   Using dfs  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               

class Solution {
public:
    void dfs( int u, int t, vector<int>&disappear, vector<vector<pair<int,int>>>&graph , vector<int>&ans )
    {
        if( ans[u] == -1 ) ans[u] = t; 
        else ans[u] = min( ans[u] , t ) ;
        for(auto [v, w] : graph[u] )
        {
            if( t+w < disappear[v] && ( ans[v] == -1 || t+w < ans[v] )  )
            {
                ans[v] = t+w; 
                dfs( v , t+w , disappear , graph , ans ) ;
            }
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) 
    {
        int m = edges.size() ; 
        vector<vector<pair<int,int>>> graph( n ) ;
        for(int i=0; i<m; i++)
        {
            graph[edges[i][0]].push_back( { edges[i][1] , edges[i][2] } ) ;
            graph[edges[i][1]].push_back( { edges[i][0] , edges[i][2] } ) ;
        }
        vector<int> ans( n , -1 ) ; 
        dfs( 0 , 0 , disappear , graph , ans ) ;
        return ans  ; 
    }
};








// //                           
// //                           
// // //  2nd Method    ======>   Try other like dijkstra's algorithm  
// // //  2nd Method    ======>   Try other like dijkstra's algorithm  
// // //  2nd Method    ======>   Try other like dijkstra's algorithm  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>   Try any other   
// // //  3rd Method    ======>   Try any other   
// // //  3rd Method    ======>   Try any other   
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               






































