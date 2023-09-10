






// class Solution {
// public:
//     int numberOfPoints(vector<vector<int>>& nums) 
//     {
//     }
// };















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Brute Force   TC = O(n^2) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using  PrefixSum   TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple Brute Force  
// // //  1st Method    ======>     Simple Brute Force  
// // //  1st Method    ======>     Simple Brute Force  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int numberOfPoints(vector<vector<int>>& nums) 
//     {
//         int n = nums.size() ; 
//         int hsh[150] = {0} ;
//         int ans = 0 ;  
//         for(int i=0; i<n; i++)
//         {
//             for(int j=nums[i][0]; j<=nums[i][1]; j++) hsh[j] =1  ;
//         }
//         for(int i=0; i<150; i++) if(hsh[i]) ans++ ;
//         return ans ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>  Using  PrefixSum
// // //  2nd Method    ======>  Using  PrefixSum
// // //  2nd Method    ======>  Using  PrefixSum
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) 
    {
        int n = nums.size() ; 
        int pref[150] = {0} ;
        int ans = 0 ;  
        for(int i=0; i<n; i++)
        {
            pref[nums[i][0]]++ ;
            pref[nums[i][1] +1 ]-- ;
        }
        for(int i=0; i<110; i++)
        {
            pref[i+1] += pref[i] ;
            if(pref[i]>0) ans++ ;
            cout<<pref[i]<<" ";
        }
        return ans ;
    }
};




















