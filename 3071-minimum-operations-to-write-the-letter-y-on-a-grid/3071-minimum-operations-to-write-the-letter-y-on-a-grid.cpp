







// //  LeetCode  Weekly Contest 387 


// //  3rd Question ==> Solve during contest  


// //  Today's   Date   -    3rd   March   2024    -   Sunday    .    












// class Solution {
// public:
//     int minimumOperationsToWriteY(vector<vector<int>>& grid) 
//     {
//     }
// };













class Solution {
public:
    map<int, int> dia , nondia ; 
    int findMinOperation( int a , int  b , int c ) 
    {
        int ans = dia[b] + dia[c] ; 
        int mn = min( nondia[a] + nondia[b] , nondia[a] + nondia[c]  ) ; 
        ans += mn ; 
        // cout<<ans<<"   "<<a<<" "<<b<<" "<<c<<endl;
        return ans  ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumOperationsToWriteY(vector<vector<int>>& grid) 
    {
        int n = grid.size() ;  
        // cout<<n<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(  i <= n/2 && (i == j || n-1-i == j) ) dia[grid[i][j]]++ ; 
                else if( i > n/2 && j == n/2 ) dia[grid[i][j]]++ ; 
                else  nondia[grid[i][j]]++ ; 
            }
        }
        // // 
        // // 
        // // // here in findMinOperation first is for y and for grid either of 2nd and 3rd
        // 
        // // like here in y we place 0 and in grid either 1 or 2 which required min operation
        int ans = findMinOperation( 0 , 1 , 2 ) ; 
        //
        // //  like in y we place 1 and in grid either 2 or 0 which required min operation
        ans = min( ans , findMinOperation( 1 , 2 , 0 ) ) ; 
        //
        // // like here in y we place 2 and in grid either 0 or 1 which required min operation
        ans = min( ans , findMinOperation( 2 , 0 , 1 ) ) ; 
        //
        //
        return ans ; 
    }
};




















