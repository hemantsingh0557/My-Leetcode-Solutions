






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     // // //  not possible to make grid of m*n
// // //  1st Method  ====> Brute Force can't make a vector of this much size (TLE and MLE )    TC = O(m*n) , SC = O(m*n) 
// //                      
// //
// //                      // // here N is size() of coordinates vector
// // //  2nd Method  ====>  Using  map   TC = O(Nlog(N)) , SC = O(N) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                            // // //  not possible to make grid of m*n
// //                            // // //  not possible to make grid of m*n
// //                            // // //  not possible to make grid of m*n
// //
// // //  1st Method    ======>  Brute Force can't make a vector of this much size (TLE and MLE )
// // //  1st Method    ======>  Brute Force can't make a vector of this much size (TLE and MLE )
// // //  1st Method    ======>  Brute Force can't make a vector of this much size (TLE and MLE )
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


// class Solution {
// public:
//     vector<long long> countBlackBlocks(int m, int n, vector<vector<int>>& coordinates) 
//     {
//         vector<vector<int>>grid(m , vector<int>(n,0)) ;
//         for(int i=0; i<coordinates.size(); i++)
//         {
//             for(int j=0; j<coordinates[i].size(); j++)
//             {
//                 int x = coordinates[i][0];
//                 int y = coordinates[i][1] ;
//                 grid[x][y] = 1 ;
//             }
//         }
//         vector<long long > ans(5,0) ;
//         for(int i=0; i<=m-2; i++)
//         {
//             for(int j=0; j<=n-2; j++)
//             {
//                 long long  ct = 0 ;
//                 if(grid[i][j]==1) ct ++ ;
//                 if(grid[i+1][j]==1) ct ++ ;
//                 if(grid[i][j+1]==1) ct ++ ;
//                 if(grid[i+1][j+1]==1) ct ++ ;
//                 ans[ct] +=1 ;
//             }
//         }
//         return ans ;
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>        Using  map  
// // //  2nd Method    ======>        Using  map  
// // //  2nd Method    ======>        Using  map 
// //                             
// // //   Time Complexity   = O(Nlog(N))     // // here N is size() of coordinates vector
// //                              
// // //   Space Complexity  = O(N)   
// //                               




class Solution {
public:
    vector<long long> countBlackBlocks(int m, int n, vector<vector<int>>& coordinates) 
    {
        map<pair<int,int> , int> mp ;
        for(int i=0; i<coordinates.size(); i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1] ;
            // if(x-1>=0 && y-1>=0) mp[{ x-1 , y-1 }] ++ ;   
            // if(x-1>=0 && y+1<n)  mp[{ x-1 , y }] ++ ;   
            // if(x+1<m && y-1>=0)  mp[{ x , y-1 }] ++ ;   
            // if(x+1<m && y+1<n)   mp[{ x , y }] ++ ;  
            //
            //
            //  both are same use above conditions or below 
            //
            // 
            if(x-1>=0 && y-1>=0) mp[{ x-1 , y-1 }] ++ ;   
            if(x-1>=0 && y<n-1)  mp[{ x-1 , y }] ++ ;   
            if(x<m-1 && y-1>=0)  mp[{ x , y-1 }] ++ ;   
            if(x<m-1 && y<n-1)   mp[{ x , y }] ++ ;   
        }
        vector<long long > ans(5,0) ;
        for(auto it : mp) ans[it.second]++; 
        long long totalblock = (m-1) * 1LL * (n-1) ;
        ans[0] = totalblock - ans[1] - ans[2] - ans[3] - ans[4] ;
        return ans ;
    }
};














