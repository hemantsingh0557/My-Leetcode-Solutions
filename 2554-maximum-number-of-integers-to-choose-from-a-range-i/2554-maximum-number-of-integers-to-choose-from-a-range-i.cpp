




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using  Hash    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using sort()  function     TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) 
//     {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) 
//     {
//         int sz = banned.size() ;
//         vector<int> v(10005 , 0) ;
//         for(int i=0; i<sz; i++) v[banned[i]] = 1 ;
//         int i= 1; 
//         int ans = 0 , sum = 0 ; 
//         while(i<=n && sum<=maxSum)
//         {
//             if(v[i] != 1) 
//             {
//                 sum += i ;
//                 if(sum<=maxSum)  ans++ ;
//             }
//             i++ ;
//         }
//         return ans  ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>    Using sort()  function    
// // //  2nd Method    ======>    Using sort()  function    
// // //  2nd Method    ======>    Using sort()  function    
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) 
    {
        int sz = banned.size() ;
        sort(banned.begin(), banned.end());
        int ans = 0 , sum = 0 ;
        int j = 1 ;
        for(int i=0; i<sz; i++)
        {
            if( j<=n && j<banned[i]  && sum+j<= maxSum ) 
            {
                while( j<=n && j<banned[i]  && sum+j<= maxSum ) 
                {
                    ans++ , sum += j , j++ ;
                }
            }
            if(j==banned[i]) j++  ;
        }
        while(j<=n && sum+j <= maxSum) ans ++ , sum += j , j++  ;
        return ans  ;
    }
};






























