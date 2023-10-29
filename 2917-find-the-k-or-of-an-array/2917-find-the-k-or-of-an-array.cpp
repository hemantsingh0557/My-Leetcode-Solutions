

















// class Solution {
// public:
//     int findKOr(vector<int>& nums, int k) 
//     {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Check bit is set or not    TC = O(32*n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Check bit is set or not  
// // //  1st Method    ======>   Check bit is set or not  
// // //  1st Method    ======>   Check bit is set or not  
// //                             
// // //   Time Complexity   = O(32*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int findKOr(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        int ans = 0 ; 
        for(int i=0; i<32; i++)
        {
            int ct =  0 ;
            for(int j=0; j<n; j++)
            {
                if( (nums[j] >> i) & 1 ) ct++ ;
            }
            if( ct >= k ) ans += pow(2 ,i)  ;
        }
        return ans ; 
    }
};




























































