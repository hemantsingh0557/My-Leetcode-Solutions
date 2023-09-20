





// class Solution {
// public:
//     int minOperations(vector<int>& nums, int x) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Recursion( TLE TLE TLE)    TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Simple Sliding Window    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st Method    ======>   Using Recursion ( TLE TLE TLE )  
// // //  1st Method    ======>   Using Recursion ( TLE TLE TLE )  
// // //  1st Method    ======>   Using Recursion ( TLE TLE TLE )  
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int n ;
//     int calculateOperation(int i , int j , vector<int>& nums, int x )
//     {
//         if( x==0 ) return 0 ;
//         if(i>j || x<0 ) return 1e9  ;
//         // cout<<i<<"  "<<j<<endl;
//         int ans = 1 +  calculateOperation( i+1 , j , nums , x-nums[i] ) ;
//         ans = min( ans , 1 + calculateOperation( i , j-1 , nums , x-nums[j] ) ) ;   
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minOperations(vector<int>& nums, int x) 
//     {
//         n = nums.size() ; 
//         int ans = calculateOperation( 0 , n-1 , nums , x ) ;  
//         return  ans >= 1e9 ? -1 : ans  ;    
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>   Simple Sliding Window 
// // //  2nd Method    ======>   Simple Sliding Window 
// // //  2nd Method    ======>   Simple Sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int n = nums.size() ; 
        int totalSum =0 ;     
        for(int i=0; i<n; i++) totalSum += nums[i] ;
        int target = totalSum - x ;
        if( target < 0  ) return -1 ;
        int i = 0 , j =0 , currSum =0 , maxLength = -1 ;
        while( j < n )
        {
            currSum += nums[j]   ;
            while( currSum > target ) currSum -= nums[i++] ;
            if( currSum == target ) maxLength = max( maxLength , j - i + 1 ) ;
            j++ ; 
        }
        return  maxLength==-1 ? -1 :  n - maxLength  ;    
    }
};





























