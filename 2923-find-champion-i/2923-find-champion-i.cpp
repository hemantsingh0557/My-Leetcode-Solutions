












// class Solution {
// public:
//     int findChampion(vector<vector<int>>& grid) 
//     {
//         
//     }
// };














// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple using map    TC = O(n^2) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Without map    TC = O(n^2) , SC = O(1) constant
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple using map   
// // //  1st Method    ======>     Simple using map   
// // //  1st Method    ======>     Simple using map   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)  
// //                               


// class Solution {
// public:
//     int findChampion(vector<vector<int>>& grid) 
//     {
//         int n = grid.size() ;
//         unordered_map<int,int> mp ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 if( i == j ) continue ;
//                 else if( grid[i][j] == 1 ) mp[i] ++ ;
//                 else mp[j] ++ ;
//             }
//         }
//         int mx = -1 ;
//         for(auto it : mp ) mx = max( mx , it.second) ;
//         cout<<endl;
//         for(auto it : mp ) if( mx == it.second ) return it.first ;
//         return 0 ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Without map 
// // //  2nd Method    ======>    Without map 
// // //  2nd Method    ======>    Without map 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// // //  take any big test case like  n =4 or 5 and see if is only possible if the team i is
// // //  is stronger than other teams then in ith row each will be 1 except when i==j


class Solution {
public:
    int findChampion(vector<vector<int>>& grid) 
    {
        int n = grid.size() ;
        for(int i=0; i<n; i++)
        {
            int check = 1 ; 
            for(int j=0; j<n; j++)
            {
                if( i == j ) continue ;
                else if( grid[i][j] != 1 ) check = 0 ;
            }
            if( check ) return i ;
        }
        return -1 ; 
    }
};











































