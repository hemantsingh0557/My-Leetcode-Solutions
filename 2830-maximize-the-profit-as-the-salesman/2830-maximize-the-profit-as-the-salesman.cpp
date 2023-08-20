












// class Solution {
// public:
//     int maximizeTheProfit(int n, vector<vector<int>>& offers) 
//     {
//     }
// };
























// //
// // // // // // //  Solve Using  Only one  Method  ===>     
// // // // // // //  Solve Using  Only one  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  DP Memoization   TC = O(mlog(m))    , SC = O(m)
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    DP Memoization 
// // //  1st Method    ======>    DP Memoization 
// // //  1st Method    ======>    DP Memoization 
// //                             
// // //   Time Complexity   = O(mlog(m))   
// //                              
// // //   Space Complexity  = O(m)   
// //                               




class Solution {
public:
    int m  ; 
    bool static cmp(vector<int> &a , vector<int> &b)
    {
        return a[0] < b[0];
        // if( a[0] != b[0] )  return a[0] < b[0];
        // else return a[1] < b[1]; 
    }
    int dp[100005] ;
    int findHouse(int i , int target , vector<vector<int>>& offers )
    {
        int lo = i , hi = m-1 ;
        while(hi-lo>1)
        {
            int mid = (lo+hi)/2 ;
            if( offers[mid][0] > target ) hi = mid; 
            else lo = mid+1 ;
        }
        if( offers[lo][0] > target ) return lo ;
        if( offers[hi][0] > target ) return hi ;
        return m ; 
    }
    int profit(int i , vector<vector<int>>& offers )
    {
        if(i>=m) return 0 ;
        if(dp[i] != -1 ) return dp[i] ;
        int ans =   profit( i+1 , offers)  ;
        int nextHouse = findHouse(i , offers[i][1] ,  offers) ; 
        ans = max( ans , offers[i][2] +  profit( nextHouse , offers)  ) ;  
        return dp[i] = ans;
    }
    int maximizeTheProfit(int n, vector<vector<int>>& offers) 
    {
        m = offers.size() ; 
        memset(dp, -1 , sizeof(dp) ) ;
        sort(offers.begin() , offers.end() , cmp ) ;
        int ans =  profit( 0 , offers) ;
        return ans ;
    }
};





































