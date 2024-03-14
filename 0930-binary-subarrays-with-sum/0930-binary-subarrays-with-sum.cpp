











// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Normal Sliding Window   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> (Two Pass) Sliding Window   TC = O(2*n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> One Pass Sliding Window   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Normal Sliding Window 
// // //  1st Method    ======>  Normal Sliding Window 
// // //  1st Method    ======>  Normal Sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) 
//     {
//         int n = nums.size()  ;
//         if( goal == 0 )
//         {
//             int ans = 0 , j =0  ; 
//             while( j < n )
//             {
//                 int  ct = 1 ;
//                 while(  j < n && nums[j] == 0 ) ans += ct ,  ct++ , j++ ; 
//                 j++ ; 
//             }
//             return ans ; 
//         } 
//         vector<int> ind  ; 
//         for(int i=0; i<n; i++) if( nums[i] == 1 ) ind.push_back(i) ;
//         int m = ind.size() ; 
//         // for(int i=0; i<ind.size() ; i++) cout<<ind[i]<<" "; 
//         // cout<<endl;
//         int ans = 0 , sum = 0  ; 
//         int i= 0 , j = 0 ; 
//         while( j < m )
//         {
//             if( j-i+1 == goal )
//             {
//                 int ct_leftZero =  ( i>0 ? ind[i] - ind[i-1] : ind[i]+1 )   ;   
//                 int ct_rightZero = ( j<m-1 ? ind[j+1] : n ) - ind[j]  ; 
//                 // cout<< ct_leftZero <<"  "<< ct_rightZero <<endl ; 
//                 ans += ct_leftZero * ct_rightZero  ; 
//                 i++ ; 
//             }
//             j++ ; 
//         }
//         return ans  ; 
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   (Two Pass) Sliding Window
// // //  2nd Method    ======>   (Two Pass) Sliding Window
// // //  2nd Method    ======>   (Two Pass) Sliding Window
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int slidingWindowSum( vector<int>& nums, int goal )
//     {
//         int n = nums.size()  ;
//         int i=0 , j= 0; 
//         int res = 0 , sum = 0;  
//         while( j < n  )
//         {
//             sum += nums[j] ; 
//             //
//             // //  the below sum > goal  will ensure that we add only that subarrays in res
//             // //  which have sum less or equal to goal 
//             while( i <= j && sum > goal ) sum -= nums[i] , i++ ; 
//             res += j - i + 1 ; 
//             j++ ;  
//         }
//         return res ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int numSubarraysWithSum(vector<int>& nums, int goal) 
//     {
//         // // find all the subarrays with max sum as goal means  all subarrays which have
//         // // sum less than or equal to goal   
//         // // means sum = 0 , 1 , 2 ....... goal-2 , goal-1 , goal .
//         int subarrays1 = slidingWindowSum(nums , goal ) ; 
//         //
//         //
//         //
//         // // find all the subarrays with max sum as (goal-1) means  all subarrays which have
//         // // sum less than or equal to (goal-1)   
//         // // means sum = 0 , 1 , 2 ....... goal-2 , goal-1 .
//         int subarrays2 = slidingWindowSum(nums , goal-1 ) ;
//         //
//         //
//         // // ans =  all subarrys with sum exactly equal to goal
//         // // ans = all subarrays with sum till goal - all subarrays with sum till (goal-1)
//         // // ans = (sum = 0,1 .... goal-2, goal-1, goal ) - (sum = 0,1 .... goal-2, goal-1)
//         int ans =  subarrays1 - subarrays2 ; 
//         return ans  ; 
//     }
// };









// //                           
// //                           
// // //  3rd Method    ======>    One Pass Sliding Window 
// // //  3rd Method    ======>    One Pass Sliding Window 
// // //  3rd Method    ======>    One Pass Sliding Window 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int n = nums.size()  ;
        int i =0 , j=0 ; 
        int ans = 0 , sum =0 , prefixZero = 0 ; 
        while( j < n )
        {
            sum += nums[j] ; 
            while( i < j && (sum > goal || nums[i] == 0)  )
            {
                if( nums[i] == 0 ) prefixZero ++ ; 
                else prefixZero = 0 ; 
                sum -= nums[i] ; 
                i++ ; 
            }
            if( sum == goal ) ans += 1 + prefixZero ;
            j++ ;  
        }
        return ans  ; 
    }
};





























































