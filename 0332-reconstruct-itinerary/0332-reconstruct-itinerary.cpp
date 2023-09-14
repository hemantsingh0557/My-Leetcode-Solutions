











// class Solution {
// public:
//     vector<string> findItinerary(vector<vector<string>>& tickets) {
        
//     }
// };







// //  First  learn  Eulerian Circuit  and  Euler Path 
// //  First  learn  Eulerian Circuit  and  Euler Path 
// //  First  learn  Eulerian Circuit  and  Euler Path 
// //  First  learn  Eulerian Circuit  and  Euler Path 
// //  First  learn  Eulerian Circuit  and  Euler Path 


// // // //  take some help from solution tab  ======>     
// // // //  take some help from solution tab  ======>     
// // // //  take some help from solution tab  ======>     
// // // //  take some help from solution tab  ======>     
// // // //  take some help from solution tab  ======>     
// // // //  take some help from solution tab  ======>     














// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// //           // here n is total map size of key and e is total key's values
// //                     
// //  1st Method ==> DFS(Recursion) and  Euler Path  TC = O( n^2 * log(n) ) , SC = O(n+e) 
// //
// //
// //  2nd Method ==> DFS(Recursion) and  Euler Path  TC = O( n^2 * log(n) ) , SC = O(n+e) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    DFS(Recursion) and  Euler Path 
// // //  1st Method    ======>    DFS(Recursion) and  Euler Path 
// // //  1st Method    ======>    DFS(Recursion) and  Euler Path 
// //                             
// //                             
// //        // here n is total map size of key and e is total key's values                        
// //                             
// // //   Time Complexity   = O( n^2 * log(n) )   
// //                              
// // //   Space Complexity  =  O(n+e) 
// //                               


class Solution {
public:
    unordered_map<string , vector<string> > mp  ;  
    vector<string> ans ; 
    int n ; 
    bool dfs( string airport , vector<string> &path )
    {
        path.push_back( airport ) ;
        if( path.size() == n+1)
        {
            ans = path ;
            return true ;
        }
        vector<string> &neighbours = mp[airport] ;
        int sz = neighbours.size() ;
        for(int i=0; i<sz; i++)
        {
            string nextAirport = neighbours[i] ;
            neighbours.erase(neighbours.begin() + i) ;
            if( dfs(nextAirport , path ) )  return true ;;
            neighbours.insert(neighbours.begin()+i , nextAirport ) ;
        }
        path.pop_back() ; 
        return false ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<string> findItinerary(vector<vector<string>>& tickets) 
    {
        n = tickets.size() ;
        for(int i=0; i<n; i++)
        {
            mp[tickets[i][0]].push_back( tickets[i][1] ) ;   
        }  
        for(auto &it : mp)
        {
            sort( it.second.begin() , it.second.end() ) ;   
        }
        vector<string>path ; 
        bool find  = dfs( "JFK" , path ) ;
        return ans ;  
    }
};












// //                           
// //                           
// // //  2nd  Method    ======>    DFS(Recursion) and  Euler Path 
// // //  2nd  Method    ======>    DFS(Recursion) and  Euler Path 
// // //  2nd  Method    ======>    DFS(Recursion) and  Euler Path 
// //                             
// //                             
// //        // here n is total map size of key and e is total key's values                        
// //                             
// // //   Time Complexity   = O( n^2 * log(n) )   
// //                              
// // //   Space Complexity  =  O(n+e) 
// //                               


// class Solution {
// public:
//     unordered_map<string , vector<string> > mp  ;  
//     vector<string> ans ; 
//     void dfs( string airport )
//     {
//         vector<string> &Airports = mp[airport] ;
//         while( Airports.size() )
//         {
//             string nextAirport = Airports.back() ;
//             Airports.pop_back() ;
//             dfs(nextAirport) ;
//         }
//         ans.push_back(airport) ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<string> findItinerary(vector<vector<string>>& tickets) 
//     {
//         int n = tickets.size() ;
//         for(int i=0; i<n; i++)
//         {
//             mp[tickets[i][0]].push_back( tickets[i][1] ) ;   
//         }  
//         for(auto &it : mp)
//         {
//             sort( it.second.rbegin() , it.second.rend() ) ;   
//         }
//         dfs( "JFK" ) ;
//         reverse( ans.begin() , ans.end() ) ;  
//         return ans ;  
//     }
// };





































