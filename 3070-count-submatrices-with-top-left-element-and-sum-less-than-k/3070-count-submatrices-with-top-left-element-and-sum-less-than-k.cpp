




// //  LeetCode  Weekly Contest 387 


// //  2nd Question ==> Solve during contest  


// //  Today's   Date   -    3rd   March   2024    -   Sunday    .    










// class Solution {
// public:
//     int countSubmatrices(vector<vector<int>>& grid, int k) 
//     {
        
//     }
// };






class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) 
    {
        int m = grid.size()  , n = grid[0].size() ; 
        vector<vector<int>> pref ( m+2 , vector<int>(n+2 , 0) )  ; 
        for(int i=0; i<m; i++)
        {
            for(int j =0; j<n; j++)
            {
                pref[i][j+1] = grid[i][j] + pref[i][j] ; 
            }
        }
        int ans = 0  ; 
        for(int j=0; j<n; j++)
        {
            int sum = 0 ;
            for(int i=0; i<m; i++)
            {
                sum += pref[i][j+1]  ; 
                if(  sum <= k ) ans++ ; 
                else break; 
            }
        }
        return ans ; 
    }
};




















