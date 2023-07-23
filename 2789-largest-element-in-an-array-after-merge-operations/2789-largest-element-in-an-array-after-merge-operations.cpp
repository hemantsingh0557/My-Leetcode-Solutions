





// //
// // // // // // //  Solve Using Only One  Method  ===>     
// // // // // // //  Solve Using Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Reverse Traversal   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     long long maxArrayValue(vector<int>& nums)  {
//     }
// };





/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st Method    ======>  Simple Reverse Traversal   
// // //  1st Method    ======>  Simple Reverse Traversal   
// // //  1st Method    ======>  Simple Reverse Traversal   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    long long maxArrayValue(vector<int>& nums) 
    {
        int n = nums.size() ;
        long long res = 0  ; 
        long long ans = -1 ; 
        for(int i=n-1; i>=0; i--)
        {
            // if(nums[i]>res )  res = nums[i]; 
            // else  res  = nums[i] + res ;
            // 
            if(nums[i]>res )  res = 0 ; 
            res += nums[i] ; 
            ans = max(ans , res) ;
        }
        ans = max(ans , res) ; 
        return ans; 
    }
};







































