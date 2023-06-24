





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> sort() and Prefix Sum   TC = O(nlog(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> sort() and Prefix Sum   TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maxScore(vector<int>& nums) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  sort() and Prefix Sum
// // //  1st Method    ======>  sort() and Prefix Sum
// // //  1st Method    ======>  sort() and Prefix Sum
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int maxScore(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.rbegin(), nums.rend()) ;
//         vector<long long> pre(n+1,0)  ;
//         for(int i=0; i<n; i++) pre[i+1] = pre[i] + nums[i] ;
//         long long ans = 0 ;
//         for(int i=0; i<n+1; i++) if(pre[i]>0) ans ++ ;
//         return ans  ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   sort() and Prefix Sum
// // //  2nd Method    ======>   sort() and Prefix Sum
// // //  2nd Method    ======>   sort() and Prefix Sum
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int maxScore(vector<int>& nums) 
    {
        int n = nums.size() ;
        sort(nums.rbegin(), nums.rend()) ;
        long long ans = 0  , prev = 0 ;
        for(int i=0; i<n; i++)
        {
            if(prev+nums[i]>0) ans++;
            prev += nums[i] ;
        }
        return ans  ;
    }
};





















































