



















// class Solution {
// public:
//     long long minSum(vector<int>& nums1, vector<int>& nums2) 
//     {
        
//     }
// };










// //
// // // // // // //  Solve Using Only One Method  ===>     
// // // // // // //  Solve Using Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Calculation(Greedy)    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Calculation (Greedy) 
// // //  1st Method    ======>   Simple Calculation (Greedy) 
// // //  1st Method    ======>   Simple Calculation (Greedy) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1 = nums1.size()  ,  n2 = nums2.size() ;
        long long sum1 = 0 ; 
        long long sum2 = 0  ;
        int z1 = 0 ;
        int z2 = 0 ;
        for(int i=0; i<n1; i++)
        {
            sum1 += nums1[i] ; 
            if( nums1[i] == 0 ) z1 ++ ;
        }
        for(int i=0; i<n2; i++)
        {
            sum2 += nums2[i] ; 
            if( nums2[i] == 0 ) z2 ++ ;
        }
        sum1 += z1 ;
        sum2 += z2 ;
        if( z1 == 0 && sum1 < sum2  ) return -1 ; 
        if( z2 == 0 && sum2 < sum1  ) return -1 ; 
        return max( sum1 , sum2 ) ; 
    }
};

































