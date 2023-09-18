












// class Solution {
// public:
//     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
//     }
// };






















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method ==>  Using sort() and pair   TC = O( m * log(m) )  , SC = O(2*m) 
// //                      
// //                      
// // 2nd Method ==>  Using multimap   TC = O( m * log(m) )  , SC = O( 2*m ) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using sort() and pair  
// // //  1st Method    ======>   Using sort() and pair 
// // //  1st Method    ======>   Using sort() and pair 
// //                             
// // //   Time Complexity   = O( m * log(m) )   
// //                              
// // //   Space Complexity  = O( 2*m )   
// //                               



class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        int m = mat.size()  ,   n = mat[0].size() ; 
        vector<pair<int,int> > allSum ;
        for(int i=0; i<m; i++)
        {
            int sum = accumulate( mat[i].begin() , mat[i].end() , 0 ) ;
            allSum.push_back({sum, i}) ;  
        }
        sort( allSum.begin() , allSum.end()  )  ;
        vector<int> ans ;    
        for(int i=0; i<k; i++) ans.push_back( allSum[i].second ) ;  
        return ans ;
    }
};









// //                           
// //                           
// // //  2nd Method    ======>   Using  multimap 
// // //  2nd Method    ======>   Using  multimap 
// // //  2nd Method    ======>   Using  multimap 
// //                             
// // //   Time Complexity   = O( m * log(m) )   
// //                              
// // //   Space Complexity  = O( 2*m )   
// //                               



// class Solution {
// public:
//     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
//     {
//         int m = mat.size()  ,   n = mat[0].size() ; 
//         multimap<int,int> mp  ;
//         for(int i=0; i<m; i++)
//         {
//             int sum = accumulate( mat[i].begin() , mat[i].end() , 0 ) ;
//             mp.insert( {sum , i} ) ;   
//         }
//         vector<int> ans ;    
//         for(auto & it : mp ) if( k-- > 0 ) ans.push_back( it.second )   ;  
//         return ans ;
//     }
// };







