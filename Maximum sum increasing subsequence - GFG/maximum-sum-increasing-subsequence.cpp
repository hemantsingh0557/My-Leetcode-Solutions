//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	

// 	public:
// 	int solve(int i , int arr[] , int n)
// 	{
// 	    int ans = 0 ;
// 	    for(int j=i+1; j<n; j++)
// 	    {
// 	        if(arr[j]>arr[i])
// 	        ans = max(ans , arr[j] + solve(j , arr , n) ) ; 
// 	    }
// 	    return ans ;
// 	}
	
// 	int maxSumIS(int arr[], int n)  
// 	{
// 	    // Your code goes here
// 	    int ans = 0 ;
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        ans = max(ans , arr[i] + solve(i, arr , n) ) ; 
// 	    }
// 	    return ans ;
// 	} 
	
	
	
	
	public:
	int dp[1200] ;
	int solve(int i , int arr[] , int n)
	{
	    if(dp[i] != -1 ) return dp[i] ; 
	    int ans = 0 ;
	    for(int j=i+1; j<n; j++)
	    {
	        if(arr[j]>arr[i])
	        ans = max(ans , arr[j] + solve(j , arr , n) ) ; 
	    }
	    return dp[i] = ans ;
	}
	
	int maxSumIS(int arr[], int n)  
	{
	    // Your code goes here
	    memset(dp , -1 , sizeof(dp)) ;
	    int ans = 0 ;
	    for(int i=0; i<n; i++)
	    {
	        ans = max(ans , arr[i] + solve(i, arr , n) ) ; 
	    }
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
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends