//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int UsedCoin(int dp[] , int coins[], int M, int V) 
	{
	    if(V==0) return 0 ;
	    if(dp[V] != -1 ) return dp[V] ;
	    int ans = INT_MAX ;
	    for(int i=0; i<M; i++)
	    {
	        if(V-coins[i]>=0) ans = min(ans +0LL , 1LL + UsedCoin( dp , coins,  M,  V-coins[i]) ) ;
	    }
	    return dp[V] = ans ;
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int dp[V+5] ;
	    for(int i=0; i<=V; i++) dp[i] = -1 ;
	    int ans = UsedCoin(dp, coins,  M,  V) ; 
	    if(ans == INT_MAX) return -1 ;
	    return ans ;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends