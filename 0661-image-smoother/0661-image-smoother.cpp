














// class Solution {
// public:
//     vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
//     }
// };
// 






// //
// // // // // // //  Solve Using  Two Method   Method  ===>     
// // // // // // //  Solve Using  Two Method   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(m*n) , SC = O(m*n) 
// //                      
// //                      
// // //  2nd Method  ====> (Good Quality Code)  Simple Iteration    TC = O(m*n) , SC = O(m*n) 
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration 
// // //  1st Method    ======>    Simple Iteration 
// // //  1st Method    ======>    Simple Iteration 
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               



// class Solution {
// public:
//     int calculateAverage(int x , int y , vector<vector<int>>& img )
//     {
//         int m = img.size()  , n = img[0].size() ; 
//         int total = img[x][y] , ct = 1 ;
//         if( x-1 >=0 && y-1>=0 ) total += img[x-1][y-1] , ct++ ;      
//         if( x-1 >=0 && y>=0 ) total += img[x-1][y] , ct++ ;      
//         if( x-1 >=0 && y+1<n ) total += img[x-1][y+1] , ct++ ;      
//         if( x >=0 && y-1>=0 ) total += img[x][y-1] , ct++ ;      
//         if( x >=0 && y+1<n ) total += img[x][y+1] , ct++ ;      
//         if( x+1 <m && y-1>=0 ) total += img[x+1][y-1] , ct++ ;      
//         if( x+1 <m && y>=0 ) total += img[x+1][y] , ct++ ;      
//         if( x+1 <m && y+1<n ) total += img[x+1][y+1] , ct++ ;  
//         return total/ct ;     
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
//     {
//         int m = img.size()  , n = img[0].size() ; 
//         vector<vector<int>> ans( m , vector<int>(n,0) ) ;
//         for(int i =0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 ans[i][j] = calculateAverage(i, j , img) ;
//             }
//         }   
//         return ans ; 
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    (Good Quality Code)  Simple Iteration        
// // //  2nd Method    ======>    (Good Quality Code)  Simple Iteration        
// // //  2nd Method    ======>    (Good Quality Code)  Simple Iteration        
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


class Solution {
public:
    int m , n ; 
    vector<pair<int,int>> vp = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1} } ; 
    bool isValid(int x , int y)
    {
        return x >= 0 && y >= 0 && x < m && y < n ;
    } 
    int calculateAverage(int x , int y , vector<vector<int>>& img )
    {
        int total = img[x][y] , ct = 1 ;
        for(auto it : vp )
        {
            int newX = it.first + x ; 
            int newY = it.second + y ;
            if( isValid(newX , newY) ) total += img[newX][newY] , ct++ ; 
        }  
        return total/ct ;     
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        m = img.size()  , n = img[0].size() ; 
        vector<vector<int>> ans( m , vector<int>(n,0) ) ;
        for(int i =0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                ans[i][j] = calculateAverage(i, j , img) ;
            }
        }   
        return ans ; 
    }
};



























