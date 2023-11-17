








// class Solution {
// public:
//     int minPairSum(vector<int>& nums) 
//     {
        
//     }
// };















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using in-built  sort() function    TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======>   Using in-built  sort() function   
// // //  1st Method    ======>   Using in-built  sort() function   
// // //  1st Method    ======>   Using in-built  sort() function   
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n)) // it it due to sort() function(check in internet)   
// //                               


class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end() ) ; 
        int ans = 0 ;    
        for(int i=0; i<n/2; i++)
        {
            ans = max( ans , nums[i]+nums[n-1-i] ) ;
        }
        return ans ;  
    }
};





















































