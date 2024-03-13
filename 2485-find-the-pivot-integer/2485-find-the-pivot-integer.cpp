














// class Solution {
// public:
//     int pivotInteger(int n) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple check for each number    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using Two pointer    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method (Two ways) ====> Using binary Search    TC = O(log(n)) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple check for each number  
// // //  1st Method    ======>   Simple check for each number  
// // //  1st Method    ======>   Simple check for each number  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int pivotInteger(int n) 
//     {
//         int totalSum = n * (n+1) / 2 ; 
//         //
//         // 
//         // for(int i=1; i<=n; i++)
//         // // the above will takes slighly more time because we know that the pivot integer
//         // // always greater than n/2 or half of n (mostly for all numbers)
//         for(int i=n; i>=1; i--)
//         {
//             int sum = i * (i+1) /2  ; 
//             int remainingSum = totalSum - sum + i  ; 
//             if( sum ==  remainingSum ) return i  ;
//         }
//         return -1 ;    
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>    Using Two pointer   
// // //  2nd Method    ======>    Using Two pointer   
// // //  2nd Method    ======>    Using Two pointer   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int pivotInteger(int n) 
//     {
//         if( n == 1 ) return n ; 
//         int leftVal = 1 , rightVal = n  ;
//         int leftSum = leftVal  ,   rightSum = rightVal  ;
//         while( leftVal < rightVal )
//         {
//             if( leftSum < rightSum  ) leftVal++ ,  leftSum += leftVal ;  
//             else  rightVal-- ,  rightSum += rightVal ; 
//             //
//             if( leftSum == rightSum && leftVal+1 == rightVal-1  ) return leftVal+1  ;  
//             // cout<<leftSum<<"  sum  "<<rightSum<<endl;
//             // cout<<leftVal<<"  val  "<<rightVal<<endl;
//             // cout<<endl;
//         }
//         return -1 ;    
//     }
// };









// //                           
// //                           
// // //  3rd Method (Two ways)   ======>   Using binary Search 
// // //  3rd Method (Two ways)   ======>   Using binary Search 
// // //  3rd Method (Two ways)   ======>   Using binary Search 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// // //   3rd Method   ====>      1st way   =====>       
// // //   3rd Method   ====>      1st way   =====>       
// // //   3rd Method   ====>      1st way   =====>       

// class Solution {
// public:
//     int pivotInteger(int n) 
//     {
//         int totalSum = n * (n+1) / 2 ; 
//         int lo = 1 , hi = n ; 
//         while(hi - lo > 1)
//         {
//             int mid = (lo + hi) / 2  ;
//             int sum = mid * (mid+1) / 2 ;  
//             int remainingSum = totalSum - sum + mid  ; 
//             if( sum < remainingSum ) lo = mid+1 ;
//             else hi = mid; 
//         }
//         int sum = lo * (lo+1) / 2 ;  
//         int remainingSum = totalSum - sum + lo  ; 
//         if( sum == remainingSum ) return lo ;
//         sum = hi * (hi+1) / 2 ;  
//         remainingSum = totalSum - sum + hi  ; 
//         if( sum == remainingSum ) return hi ;
//         return -1 ;   
//     }
// };







// // //  3rd Method   ====>  2nd way   =====>       
// // //  3rd Method   ====>  2nd way   =====>       
// // //  3rd Method   ====>  2nd way   =====>       


class Solution {
public:
    int pivotInteger(int n) 
    {
        int totalSum = n * (n+1) / 2 ; 
        int lo = 1 , hi = n ; 
        while(hi >= lo )
        {
            int mid = (lo + hi) / 2  ;
            int sum = mid * (mid+1) / 2 ;  
            int remainingSum = totalSum - sum + mid  ; 
            if( sum == remainingSum ) return mid  ;
            else if( sum < remainingSum ) lo = mid+1 ;
            else if( sum > remainingSum ) hi = mid-1; 
        }
        return -1 ;   
    }
};
































