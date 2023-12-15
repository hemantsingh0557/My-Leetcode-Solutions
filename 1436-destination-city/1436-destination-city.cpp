
















// class Solution {
// public:
//     string destCity(vector<vector<string>>& paths) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Using Hash set(map)     TC = O(n) , SC = O(n) 
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Using Hash set(map) 
// // //  1st Method    ======>  Simple Using Hash set(map) 
// // //  1st Method    ======>  Simple Using Hash set(map) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        int n = paths.size() ;
        unordered_map<string , int> mp ;
        for(int i=0; i<n; i++)
        {
            mp[paths[i][0]]++ ;
            mp[paths[i][1]] ;
        }
        for(auto it : mp)
        {
            if( it.second == 0 ) return it.first ;
        }
        return "" ;  
    }
};


























