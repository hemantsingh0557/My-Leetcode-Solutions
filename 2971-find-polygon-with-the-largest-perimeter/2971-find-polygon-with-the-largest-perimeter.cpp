













// class Solution {
// public:
//     long long largestPerimeter(vector<int>& nums) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using sort() function   TC = O(n*log(n)) , SC = O(log(n))
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using sort() function  
// // //  1st Method    ======>  Using sort() function  
// // //  1st Method    ======>  Using sort() function  
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    long long largestPerimeter(vector<int>& nums) 
    {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ;
        // long long totalSum = 0 ; 
        // for(int i=0; i<n; i++)  totalSum += nums[i]  ;
        long long totalSum = accumulate(nums.begin() , nums.end() , 0LL ) ; 
        for(int i=n-1 ;  i>=2; i--)
        {
            long long remSum =  totalSum - nums[i] ; 
            if( nums[i] < remSum ) return totalSum ; 
            totalSum -= nums[i] ; 
        }
        return -1 ; 
    }
};

























