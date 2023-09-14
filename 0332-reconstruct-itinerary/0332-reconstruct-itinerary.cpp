











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
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// //           // here n is total map size of key and e is total key's values
// //                     
// //  1st Method ==> DFS(Recursion) and  Euler Path  TC = O( n^2 * log(n) ) , SC = O(n+e) 
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
    void dfs( string airport )
    {
        vector<string> &Airports = mp[airport] ;
        while( Airports.size() )
        {
            string nextAirport = Airports.back() ;
            Airports.pop_back() ;
            dfs(nextAirport) ;
        }
        ans.push_back(airport) ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<string> findItinerary(vector<vector<string>>& tickets) 
    {
        int n = tickets.size() ;
        for(int i=0; i<n; i++)
        {
            mp[tickets[i][0]].push_back( tickets[i][1] ) ;   
        }  
        for(auto &it : mp)
        {
            sort( it.second.rbegin() , it.second.rend() ) ;   
        }
        dfs( "JFK" ) ;
        reverse( ans.begin() , ans.end() ) ;  
        return ans ;  
    }
};





































