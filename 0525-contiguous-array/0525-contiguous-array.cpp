










// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Brute Force ( TLE TLE TLE )   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using extra array    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Using hashing   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Brute Force ( TLE TLE TLE ) 
// // //  1st Method    ======>  Brute Force ( TLE TLE TLE ) 
// // //  1st Method    ======>  Brute Force ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             int ones = 0 , zeros = 0 , len = 0 ; ; 
//             for(int j=i; j<n; j++)
//             {
//                 if( nums[j] ) ones++ ; 
//                 else zeros ++ ; 
//                 if( ones == zeros ) len = 2 * ones ; 
//             }
//             ans = max( ans , len  ) ;  
//         }
//         return ans   ; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Using extra array(see form editorial)
// // //  2nd Method    ======>   Using extra array(see form editorial)
// // //  2nd Method    ======>   Using extra array(see form editorial)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         vector<int> v (2*n + 1 ) ;
//         for(int i=0; i<2*n+1 ; i++) v[i] = -2 ; 
//         v[n] = -1 ;  
//         int ans = 0 , sum = 0 ;  
//         for(int i=0; i<n; i++)
//         {
//             if( nums[i] == 1 ) sum ++ ;
//             else sum -- ;
//             //
//             if( v[sum + n] >= -1 ) ans = max( ans , i - v[sum+n] ) ; 
//             else v[sum+n] = i ; 
//         }
//         return ans  ; 
//     }
// };






// //                           
// //                           
// // //  3rd Method    ======>   Using hashing( see from the editorial)
// // //  3rd Method    ======>   Using hashing( see from the editorial)
// // //  3rd Method    ======>   Using hashing( see from the editorial)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int ans = 0 , sum = 0 ;  
        unordered_map<int,int> mp  ;
        mp[sum] = -1 ; 
        for(int i=0; i<n; i++)
        {
            if( nums[i] == 1 ) sum ++ ;
            else sum -- ;
            //
            if( mp.count(sum) ) ans = max( ans , i - mp[sum] ) ; 
            else mp[sum] = i ; 
        }
        return ans  ; 
    }
};




























