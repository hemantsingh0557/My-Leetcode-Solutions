













// class Solution {
// public:
//     int maxSubarrays(vector<int>& nums) 
//     {
//     }
// };














// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways ) ====> Simple Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //
// // Here main idea is that we take the AND operation of any two no then the result is always
// // less than or equal to both the no
//
//
// so first we take the AND of whole th array and then we see if the score of the whole the
// array is not zero it means on spilting the array we get the score grater than this score
// so in this case we return the ans 1 and here this whole array gives min score
//
//
// now if the score is zero(0) means we got the minimum score and on spilliting the array
// we have chance that score remains same as 0 but we can get the subarray which we want
// because minimum score and max subarray and if on splitting also we got the many subarray
// then we return that ans
//  
//
//
//
//   for this we initialize the score variable either -1 or INT_MAX or greater than 10^6
//   because we want at first score will have all bits set to 1 .
//
//
//










// //                           
// //                           
// // //  1st Method ( Two Ways )   ======> 
// // //  1st Method ( Two Ways )   ======> 
// // //  1st Method ( Two Ways )   ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               






// // //   1st  Method   ====>      1st way   =====>    Two  Pass     
// // //   1st  Method   ====>      1st way   =====>    Two  Pass     
// // //   1st  Method   ====>      1st way   =====>    Two  Pass     





// class Solution {
// public:
//     int maxSubarrays(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         //
//         //  
//         // int INF = INT_MAX ;  
//         // int INF = (1<<20) - 1 ;  
//         int INF = -1 ;    
//         int score = INF ;
//         for(int i=0; i<n; i++) score &=  nums[i] ; 
//         if( score != 0 ) return 1 ; 
//         int ans = 0 ;
//         score = INT_MAX ;   
//         for(int i=0; i<n; i++) 
//         {
//             score &= nums[i] ;
//             if( score == 0 ) score = INT_MAX  ,  ans ++ ;
//         }
//         return ans ; 
//     }
// };








// // //   1st  Method   ====>      2nd way   =====>   One  Pass     
// // //   1st  Method   ====>      2nd way   =====>   One  Pass     
// // //   1st  Method   ====>      2nd way   =====>   One  Pass     



class Solution {
public:
    int maxSubarrays(vector<int>& nums) 
    {
        int n = nums.size() ; 
        //
        //  
        // int INF = INT_MAX ;  
        // int INF = (1<<20) - 1 ;  
        int INF = -1 ;    
        int score = INF ;
        int ans = 0 ;
        for(int i=0; i<n; i++) 
        {
            score &= nums[i] ;
            if( score == 0 ) score = INF  ,  ans ++ ;
        }
        return max( 1 , ans) ; 
    }
};







































