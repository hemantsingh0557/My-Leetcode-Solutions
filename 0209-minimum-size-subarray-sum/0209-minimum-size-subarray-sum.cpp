



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method ==> Variable size Sliding Window     TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method ==> Binary Search and Fixed size Sliding Window    TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Variable size Sliding Window    
// // //  1st Method    ======>    Variable size Sliding Window    
// // //  1st Method    ======>    Variable size Sliding Window    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int i=0, j=0 ;
//         int ans = INT_MAX , sum = 0 ;
//         while(j<n)
//         {
//             sum+= nums[j++] ;
//             while(i<=j && sum>=target)
//             {
//                 ans = min(ans , j-i ) ;
//                 sum  -= nums[i++] ;
//             }
//         }
//         return ans==INT_MAX ? 0 : ans ;
//     }
// };







// //                           
// //                           
// // //  2nd  Method    ======>     Binary Search and Fixed size Sliding Window 
// // //  2nd  Method    ======>     Binary Search and Fixed size Sliding Window 
// // //  2nd  Method    ======>     Binary Search and Fixed size Sliding Window 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int n ;
    bool isPossible(int len , int target, vector<int>& nums )
    {
        int i=0, j=0 ,  sum = 0 ;
        while(j<len) sum += nums[j++] ;
        if(sum>=target) return true ;
        while(j<n)
        {
            sum += nums[j++] ;
            sum -= nums[i++] ;
            if(sum>=target) return true ;
        }
        return false  ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        n = nums.size() ;
        int lo = 1 , hi = n ;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2 ;
            if(!isPossible(mid , target , nums)) lo = mid+1 ;
            else hi = mid ;
        }
        if(isPossible(lo , target , nums)) return lo ;
        if(isPossible(hi , target , nums)) return hi ;
        return 0 ;
    }
};



























