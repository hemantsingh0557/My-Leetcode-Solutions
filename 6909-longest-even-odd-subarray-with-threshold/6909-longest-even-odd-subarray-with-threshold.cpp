



// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Simple Iteration    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int longestAlternatingSubarray(vector<int>& nums, int threshold) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Simple Iteration
// // //  1st Method    ======>     Simple Iteration
// // //  1st Method    ======>     Simple Iteration
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) 
    {
        int n = nums.size() ;
        int ans = 0 ;
        for(int i=0; i<n; i++)
        {
            int len=0;
            if(nums[i]%2==0 && nums[i]<=threshold) 
            {
                len++;
                int j = i+1 ;
                while(j<n && nums[j-1]%2 != nums[j]%2 && nums[j]<=threshold) len++ , j++ ;
                ans = max(ans , len) ;
            }
        }
        return ans ; 
    }
};











