










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two For Loops    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Prefix Sum       TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Simple  Iteration   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int findMiddleIndex(vector<int>& nums) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Two For Loops       
// // //  1st Method    ======>     Two For Loops       
// // //  1st Method    ======>     Two For Loops       
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int findMiddleIndex(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         if(n==1 ) return 0 ;
//         int left = 0 , right = 0  ; 
//         int middleIndex = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             middleIndex = i ; 
//             if(i!=0) left += nums[i-1] ;
//             right = 0 ; 
//             for(int j=i+1; j<n; j++)
//             {
//                 right += nums[j] ;
//             }
//             if(left==right) return middleIndex ;
//         }
//         return -1 ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>    PreFix Sum  
// // //  2nd Method    ======>    PreFix Sum  
// // //  2nd Method    ======>    PreFix Sum  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int findMiddleIndex(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         if(n==1 ) return 0 ;
//         vector<int> pre(n+1 , 0 ) ;   
//         for(int i=0; i<n; i++) pre[i+1] = pre[i] + nums[i] ;
//         int left = 0 , right = 0  ; 
//         int middleIndex = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             middleIndex = i ; 
//             if(i!=0) left += nums[i-1] ;
//             right = pre[n] - left - nums[middleIndex] ;
//             if(left==right) return middleIndex ;
//         }
//         return -1 ;
//     }
// };







// //                           
// //                           
// // //  3rd Method    ======>    Simple  Iteration
// // //  3rd Method    ======>    Simple  Iteration
// // //  3rd Method    ======>    Simple  Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int n = nums.size() ;
        if(n==1 ) return 0 ;
        int totalsum = 0 ; 
        for(int i=0; i<n; i++) totalsum += nums[i] ;
        int left = 0 , right = 0  ; 
        int middleIndex = 0 ; 
        for(int i=0; i<n; i++)
        {
            middleIndex = i ; 
            if(i!=0) left += nums[i-1] ;
            right = totalsum - left - nums[middleIndex] ;
            if(left==right) return middleIndex ;
        }
        return -1 ;
    }
};

























