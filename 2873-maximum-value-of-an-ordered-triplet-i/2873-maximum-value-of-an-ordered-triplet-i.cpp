










// class Solution {
// public:
//     long long maximumTripletValue(vector<int>& nums) 
//     {
//     }
// };

















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Brute Force ( TLE TLE TLE )   TC = O(n^3) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Prefix max and suffix max    TC = O(2*n) , SC = O(2*n) 
// //                     
// //                     
// // //  3rd Method  ====> Simple Iteration    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force   ( TLE TLE TLE ) 
// // //  1st Method    ======>   Brute Force   ( TLE TLE TLE ) 
// // //  1st Method    ======>   Brute Force   ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     long long maximumTripletValue(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         long long  ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 long long diff = nums[i] - nums[j] ; 
//                 for(int k= j+1; k<n; k++)
//                 {
//                     long long  val = diff * nums[k] ;
//                     ans = max( ans , val) ; 
//                 }
//             }
//         }
//         return ans ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Prefix max and suffix max 
// // //  2nd Method    ======>    Prefix max and suffix max 
// // //  2nd Method    ======>    Prefix max and suffix max 
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               







// class Solution {
// public:
//     long long maximumTripletValue(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         vector<int> premax( n+5, 0) ;
//         vector<int> surfmax( n+5, 0) ;
//         premax[0] = 0  , surfmax[n] = 0 ;  
//         for(int i=0; i<n; i++)
//         {
//             premax[i+1] = max( premax[i] , nums[i] ) ;  
//             surfmax[n-1-i] = max( surfmax[n-i] , nums[n-1-i] ) ;  
//         }
//         long long  ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             // cout<<premax[i]<<" "<<i<<" "<<surfmax[i+1]<<endl;
//             long long diff = premax[i] - nums[i] ; 
//             long long  val = diff * surfmax[i+1] ;
//             ans = max( ans , val) ; 
//         }
//         return ans ; 
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>   Simple Iteration  
// // //  3rd Method    ======>   Simple Iteration  
// // //  3rd Method    ======>   Simple Iteration  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size() ;
        int mx= 0, mxab = 0 ;
        long long  ans = 0 ;
        for(int i=0; i<n; i++)
        {
            ans = max( ans , mxab * 1LL * nums[i] ) ;
            mxab = max( mxab , mx - nums[i] ) ;  
            mx = max( mx , nums[i]) ; 
        }
        return ans ; 
    }
};
















































