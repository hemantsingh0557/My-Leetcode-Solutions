










// class Solution {
// public:
//     int reductionOperations(vector<int>& nums) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Sort() and Simple Iteration    TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Sort() and Simple Iteration    TC = O(n*log(n)) , SC = O(log(n)) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Sort() and Simple Iteration   
// // //  1st Method    ======>    Sort() and Simple Iteration   
// // //  1st Method    ======>    Sort() and Simple Iteration   
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     int reductionOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         sort(nums.begin() , nums.end() ) ;
//         int mn = 0  ;   
//         for(int i=0; i<n; i++) 
//         {
//             if( nums[i] == nums[0] ) mn = i ;
//         }
//         int ans = 0 ; 
//         for(int i=n-1; i>=max(1 , mn); i--)
//         {
//             if( nums[i-1] == nums[i]  ) continue ;
//             ans += n - i ;
//         } 
//         return  ans ;  
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>    Sort() and Simple Iteration   
// // //  2nd Method    ======>    Sort() and Simple Iteration   
// // //  2nd Method    ======>    Sort() and Simple Iteration   
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    int reductionOperations(vector<int>& nums) 
    {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end() ) ;
        for(int i=0; i<n; i++) cout<<nums[i]<<" ";
        int ans = 0 ; 
        int ct = 0 ;  
        for(int i=1; i<n; i++)
        {
            if( nums[i-1] != nums[i]  ) ct++ ;
            ans += ct ;
        } 
        return  ans ;  
    }
};






























