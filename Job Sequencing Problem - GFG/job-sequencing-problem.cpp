//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    
    
    
    
    
    // public:
    // static bool cmp(Job a , Job b)
    // {
    //     return a.dead < b.dead ;
    // }
    // vector<int> solve(int i , int prev , Job arr[], int n )
    // {
    //     if(i==n) return {0,0} ; 
    //     vector<int> ans1 = solve( i+1 , prev , arr , n ) ;
    //     vector<int> ans2 = {0,0} ; 
    //     if(prev==-1 || arr[i].dead>arr[prev].dead)
    //     {
    //         ans2 = solve( i+1 , i , arr , n ) ; 
    //         ans2[0] ++ ;
    //         ans2[1] += arr[i].profit ;
    //     }
    //     vector<int> ans ;
    //     if( ans2[1] > ans1[1] ) ans = ans2 ;
    //     else ans = ans1 ; 
    //     return  ans ;
    // }
    // //Function to find the maximum profit and the number of jobs done.
    // vector<int> JobScheduling(Job arr[], int n) 
    // { 
    //     // your code here
    //     sort(arr , arr+n , cmp ) ; 
    //     // for(int i=0; i<n; i++) cout<<arr[i].profit<<endl;
    //     // cout<<n<<endl;
    //     vector<int> ans = solve( 0 , -1 , arr , n ) ;
    //     return ans  ; 
    // } 
    
    
    
    
    
    
    public:
    static bool cmp(Job a , Job b)
    {
        return a.profit > b.profit ;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr , arr+n , cmp ) ; 
        int ct = 0 , maxprofit = 0  ;
        vector<int> done(n,0) ;
        for(int i=0; i<n; i++) 
        {
            // for(int j=0 ; j<arr[i].dead-1; j++)
            for(int j=arr[i].dead-1 ; j>=0; j--)
            {
                if(!done[j])
                {
                    ct++ ;
                    maxprofit += arr[i].profit ;
                    done[j] = 1 ;
                    break ;
                }
            }
        }
        return  { ct , maxprofit }  ; 
    } 
    
    
    
    
    
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends