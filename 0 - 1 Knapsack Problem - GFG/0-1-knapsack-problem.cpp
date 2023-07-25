//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    
    
    // public:
    // //Function to return max value that can be put in knapsack of capacity W.
    // int solve(int i , int W, int wt[], int val[], int n )
    // {
    //     if(i==n) return  0 ;
    //     int ans =  solve( i+1 , W ,  wt , val , n ) ;
    //     if(W-wt[i]>=0) ans = max(ans , val[i] + solve( i+1 , W-wt[i] ,  wt , val , n ) ) ;
    //     return ans ;
    // }
    // int knapSack(int W, int wt[], int val[], int n) 
    // { 
    //   // Your code here
    //   int ans =  solve( 0 , W ,  wt , val , n ) ;
    //   return ans ;
    // }
   
   
   
   
   
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1010][1010] ;
    int solve(int i , int W, int wt[], int val[], int n )
    {
        if(i==n) return  0 ;
        if(dp[i][W] != -1) return dp[i][W] ;
        int ans =  solve( i+1 , W ,  wt , val , n ) ;
        if(W-wt[i]>=0) ans = max(ans , val[i] + solve( i+1 , W-wt[i] ,  wt , val , n ) ) ;
        return dp[i][W] = ans ;
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
      // Your code here
      memset(dp , -1  , sizeof(dp)) ;
      int ans =  solve( 0 , W ,  wt , val , n ) ;
      return ans ;
    }
};
































//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends