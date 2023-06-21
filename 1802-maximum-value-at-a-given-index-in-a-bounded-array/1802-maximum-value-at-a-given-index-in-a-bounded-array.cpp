





// //
// //
// //
// // // // // // //  Solve Using  only one  Method  ===>
// // // // // // //  Solve Using  only one  Method  ===>
// 
//
// // // //    1st Method    ======>  Binary Search   TC = O(nlog(n)),n=maxSum , SC = O(1) constant 
// // 
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maxValue(int n, int index, int maxSum) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //
// //
// // // //    1st Method    ======>  Binary Search      
// // // //    1st Method    ======>  Binary Search      
// // // //    1st Method    ======>  Binary Search      
// // // //    1st Method    ======>  Binary Search     
// //
// //
// // //   Time Complexity   = O(nlog(n))   where n = maxSum 
// //
// //
// // //   Space Complexity  = O(1) constant
// //


class Solution {
public:
    int maxValue(int n, int index, int maxSum) 
    {
        int left = index , right = n-index-1 ;
        long long totalSum = 0, leftSum = 0 , rightSum = 0 ;
        long long  lo = 1 , hi = maxSum  , mid , num ;
        while(hi-lo>1)
        {
            mid = (hi+lo)/2 ;
            num = mid - 1 ;
            totalSum = 0, leftSum = 0 , rightSum = 0 ;
            if(right>=num) rightSum = num*(num+1)/2 + right - num ;
            else   rightSum = num*(num+1)/2 - (num-right)*(num-right+1)/2 ;  
            if(left>=num) leftSum = num*(num+1)/2 + left - num ;
            else   leftSum = num*(num+1)/2 - (num-left)*(num-left+1)/2 ;  
            totalSum = leftSum + mid + rightSum ;  
            if(totalSum <= maxSum) lo = mid ;
            else hi = mid-1 ;
        }
        num = hi-1 ;
        if(right>=num) rightSum = num*(num+1)/2 + right - num ;
        else   rightSum = num*(num+1)/2 - (num-right)*(num-right+1)/2 ;  
        if(left>=num) leftSum = num*(num+1)/2 + left - num ;
        else   leftSum = num*(num+1)/2 - (num-left)*(num-left+1)/2 ;  
        totalSum = leftSum + hi + rightSum ;   
        if(totalSum <= maxSum) return hi  ;
        return lo  ;
    }
};


























