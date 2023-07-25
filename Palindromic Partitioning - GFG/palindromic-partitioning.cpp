//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
    
    
    
public:
    int n ;
    int dp[500] ;
    // bool isPalindrome(int i , int j , string &str)
    bool isPalindrome( string &temp)
    {
        int i =0 , j = temp.size()-1 ;
        while(i<=j) if(temp[i++] != temp[j--]) return false ;
        return true; 
    }
    int solve(int i , string &str)
    {
        if(i==n) return 0 ;
        if(dp[i] != -1 ) return dp[i] ;
        int ans = INT_MAX ;
        for(int j=i; j<n; j++)
        {
            string temp = str.substr(i , j-i+1) ;
            if(isPalindrome(temp)) ans = min(ans , 1 + solve(j+1 , str)) ;
        }
        return dp[i] =  ans ;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(dp , -1 ,sizeof(dp)) ;
        n = str.size() ;
        int ans = solve(0 , str) ;
        return ans-1  ;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends