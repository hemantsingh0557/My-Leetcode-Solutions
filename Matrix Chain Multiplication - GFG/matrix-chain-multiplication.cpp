//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
    
    
    
// public:
//     int Operations(int i , int j , int arr[])
//     {
//         if(i>=j) return 0 ;
//         int ans  = INT_MAX ;
//         for(int k=i; k<j ; k++)
//         {
//             int res = Operations(i, k, arr) + Operations(k+1, j, arr) + ( arr[i-1] * arr[k] * arr[j] ) ; 
//             ans = min(ans , res) ;
//         }
//         return ans ;
//     }
//     int matrixMultiplication(int N, int arr[])
//     {
//         // code here
//         int ans = Operations(1, N-1 , arr) ; 
//         return ans ;
//     }
    
    
    
    
public:
    int dp[200][200] ;
    int Operations(int i , int j , int arr[])
    {
        if(i>=j) return 0 ;
        int ans  = INT_MAX ;
        if(dp[i][j] != -1) return dp[i][j] ;   
        for(int k=i; k<j ; k++)
        {
            int res = Operations(i, k, arr) + Operations(k+1, j, arr) + ( arr[i-1] * arr[k] * arr[j] ) ; 
            ans = min(ans , res) ;
        }
        return dp[i][j] = ans ;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp, -1 ,sizeof(dp)) ;
        int ans = Operations(1, N-1 , arr) ; 
        return ans ;
    }
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends