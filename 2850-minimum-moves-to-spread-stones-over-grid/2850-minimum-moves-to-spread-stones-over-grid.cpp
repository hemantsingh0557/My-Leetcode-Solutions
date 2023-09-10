










// class Solution {
// public:
//     int minimumMoves(vector<vector<int>>& grid) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Recursion and Backtracking   TC = O(3^(n^2)) , SC = O(n^2) ( max recursion call )  
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Recursion and Backtracking 
// // //  1st Method    ======>    Recursion and Backtracking 
// // //  1st Method    ======>    Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O(3^(n^2))
// //                              
// // //   Space Complexity  = O(n^2) ( max recursion call ) 
// //                               



class Solution {
public:
    vector<pair<int,int>> zeros, extras ;
    int CalculateMoves( int ind , vector<vector<int>>& grid  )
    {
        if( ind== zeros.size() ) return  0 ; 
        int n = extras.size() ;
        int currZeroX = zeros[ind].first ;  
        int currZeroY = zeros[ind].second  ;  
        int ans = 1000000 ; 
        for(int i=0; i<n; i++)
        {
            int currX = extras[i].first ;
            int currY = extras[i].second ;
            if( grid[currX][currY] > 1 )
            {
                grid[currX][currY] -- ; 
                grid[currZeroX][currZeroY] = 1 ; 
                ans = min(ans, abs(currZeroX-currX) + abs(currZeroY-currY) + CalculateMoves( ind+1 , grid ) ); 
                //
                // Backtracking 
                //
                grid[currX][currY] ++ ; 
                grid[currZeroX][currZeroY] = 0 ; 
            }
        }
        return ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumMoves(vector<vector<int>>& grid) 
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if( grid[i][j]==0) zeros.push_back({i,j}) ;
                else if( grid[i][j] > 1 ) extras.push_back({i,j}) ;
            }
        }
        int ans = CalculateMoves( 0 , grid ) ;
        return ans; 
    }
};































