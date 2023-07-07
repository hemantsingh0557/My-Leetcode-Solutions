


// // This Question is very similiar to the Question link given below
//
//  https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
//
//






// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// //  1st Method  ====>  Binary Search    TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method(Three ways)  ==> Sliding Window(TWO PASS)   TC = O(2*n) , SC = O(1) constant
// //                     
// //                     
// //  3rd Method  ====> Sliding Window(ONE PASS)    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maxConsecutiveAnswers(string answerKey, int k) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Binary Search 
// // //  1st Method    ======>   Binary Search 
// // //  1st Method    ======>   Binary Search 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     bool isPossible(string answerKey, int k , int mid )
//     {
//         int n = answerKey.size() ;
//         int i=0 , j=0 ;
//         int mx = -1 ;  
//         int ct1 = 0 , ct2 = 0  ;
//         while(i<n)
//         {
//             if(answerKey[i]=='F') ct1++ ;
//             else ct2 ++ ;
//             while(ct1>k && ct2>k ) 
//             {
//                 if(answerKey[j]=='F') ct1-- ;
//                 else ct2 -- ;
//                 j++ ;
//             }
//             if(i-j+1==mid) return true ;
//             i++;
//         }
//         return false ; 

//     }
//     int maxConsecutiveAnswers(string answerKey, int k) 
//     {
//         int n = answerKey.size() ;
//         int lo =0 , hi =n ;
//         while(hi-lo>1)
//         {
//             int mid = (hi+lo)/2 ;
//             if(isPossible(answerKey , k , mid)) lo = mid ;
//             else hi = mid-1 ;
//         }
//         if(isPossible(answerKey , k , hi)) return hi ;
//         return lo ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   Sliding Window ( TWO PASS ) 
// // //  2nd Method    ======>   Sliding Window ( TWO PASS ) 
// // //  2nd Method    ======>   Sliding Window ( TWO PASS ) 
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 




// class Solution {
// public:
//     int maxConsecutiveAnswers(string answerKey, int k) 
//     {
//         int n = answerKey.size() ;
//         int i=0 , j=0 ;
//         int mx = -1 , ct = 0  ;
//         while(i<n)
//         {
//             if(answerKey[i]=='F') ct++ ;
//             while(ct>k) 
//             {
//                 if(answerKey[j]=='F') ct-- ;
//                 j++ ;
//             }
//             mx = max(mx , i-j+1) ;
//             i++;
//         }
//         i=0, j=0 ;
//         ct = 0 ;
//         while(i<n)
//         {
//             if(answerKey[i]=='T') ct++ ;
//             while(ct>k) 
//             {
//                 if(answerKey[j]=='T') ct-- ;
//                 j++ ;
//             }
//             mx = max(mx , i-j+1) ;
//             i++;
//         }
//         return mx ;
//     }
// };





// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 



// class Solution {
// public:
//     int maxConsecutiveAnswers(string answerKey, int k) 
//     {
//         int n = answerKey.size() ;
//         int i=0 , j=0  , l=0;
//         int mxT = -1 , mxF = -1 ; 
//         int ct1 = 0 , ct2 = 0  ;
//         while(i<n)
//         {
//             // here for T or True we check maximum subarray of T or True 
//             if(answerKey[i]=='F') ct1++ ;
//             while(ct1>k) 
//             {
//                 if(answerKey[j]=='F') ct1-- ;
//                 j++ ;
//             }
//             mxT = max(mxT , i-j+1) ;
//             //
//             // now for F or False we check maximum subarray of F or False 
//             if(answerKey[i]=='T') ct2++ ;
//             while(ct2>k) 
//             {
//                 if(answerKey[l]=='T') ct2-- ;
//                 l++ ;
//             }
//             mxF = max(mxF , i-l+1) ;
//             i++;
//         }
//         return max(mxT , mxF) ;
//     }
// };






// // //   2nd Method   ====>      3rd  way   =====>                                 
// // //   2nd Method   ====>      3rd  way   =====>                                 
// // //   2nd Method   ====>      3rd  way   =====>                                 



// class Solution {
// public:
//     int Countmax(string answerKey, int k , char c )
//     {
//         int n = answerKey.size() ;
//         int i=0 , j=0 ;
//         int mx = -1 , ct = 0  ;
//         while(i<n)
//         {
//             if(answerKey[i]==c) ct++ ;
//             while(ct>k) 
//             {
//                 if(answerKey[j]==c) ct-- ;
//                 j++ ;
//             }
//             mx = max(mx , i-j+1) ;
//             i++;
//         }
//         return mx ;
//     }
//     int maxConsecutiveAnswers(string answerKey, int k) 
//     {
//         return max(Countmax( answerKey, k , 'T') , Countmax( answerKey, k , 'F') ) ;  
//     }
// };













// //                           
// //                           
// // //  3rd Method    ======>   Sliding Window ( ONE PASS )
// // //  3rd Method    ======>   Sliding Window ( ONE PASS )
// // //  3rd Method    ======>   Sliding Window ( ONE PASS )
// //                            
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) 
    {
        int n = answerKey.size() ;
        int i=0 , j=0 ;
        int mx = -1 ;  
        int ct1 = 0 , ct2 = 0  ;
        while(i<n)
        {
            if(answerKey[i]=='F') ct1++ ;
            else ct2 ++ ;
            while(ct1>k && ct2>k ) 
            {
                if(answerKey[j]=='F') ct1-- ;
                else ct2 -- ;
                j++ ;
            }
            mx = max(mx , i-j+1) ;
            i++;
        }
        return mx ; 
    }
};





































