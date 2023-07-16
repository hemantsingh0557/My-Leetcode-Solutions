






// //
// // // // // // //  Solve Using  Two Method  ===>     
// // // // // // //  Solve Using  Two Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using map or prefix sum    TC = O(nlog(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Sliding Window    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using map or prefix sum 
// // //  1st Method    ======>    Using map or prefix sum 
// // //  1st Method    ======>    Using map or prefix sum 
// //                             
// // //   Time Complexity   = O(nlog(n))   and  
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 



// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         map<int,int> mp;   // // ordered map is mandatory
//         for(int i=0; i<n; i++)
//         {
//             mp[nums[i]-k] ++;
//             mp[nums[i]+k+1] -- ; 
//         }
//         int len = 0 , ans = 0 ;
//         for(auto &it :mp) len += it.second , ans = max(ans , len) ;
//         return ans;
//     }
// };




// // //   1st  Method   ====>      2nd way   =====>                                 
// // //   1st  Method   ====>      2nd way   =====>                                 
// // //   1st  Method   ====>      2nd way   =====>                                 


// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         vector<int> pre(400000,0); // // we can also take till 3*100000 + 5
//         // int M = 100000;
//         // for(int i=0; i<n; i++)
//         // {
//         //     pre[M + nums[i]-k] ++;
//         //     pre[M + nums[i]+k+1] -- ; 
//         // }
//         for(int i=0; i<n; i++)
//         {
//             pre[ max(0, nums[i]-k) ] ++;
//             pre[ min(100000, nums[i]+k+1) ] -- ; 
//         }
//         //
//         // int len = 0  , ans = 0 ;
//         // for(int i=0; i<400000; i++) len += pre[i], ans = max(ans , len) ;
//         //
//         //
//         int ans = pre[0] ;
//         for(int i=1; i<400000; i++) pre[i] += pre[i-1], ans = max(ans , pre[i]) ;
//         return ans;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   Sliding Window  
// // //  2nd Method    ======>   Sliding Window  
// // //  2nd Method    ======>   Sliding Window  
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        sort(nums.begin(), nums.end()) ; 
        int i=0, j=0 , ans =0 ;
        while(j<n)
        {
            if(nums[j]-nums[i]>2*k) i++ ;
            else ans = max(ans , j-i+1) ;
            j++ ; 
        }
        return ans;
    }
};






















































