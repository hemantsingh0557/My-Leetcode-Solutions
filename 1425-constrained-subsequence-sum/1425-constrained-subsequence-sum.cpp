










// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed











// class Solution {
// public:
//     int constrainedSubsetSum(vector<int>& nums, int k) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Four   Method  ===>     
// // // // // // //  Solve Using  Four   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> (Two ways )  Recursion and Memoization (TLE TLE TLE)   
// //                      
// //                      
// // //  2nd Method  ====> Bottom Up DP ( TLE TLE TLE)    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Priority Queue(max Heap)    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
// // //  4th Method  ====> Deque ( monotonic Queue )     TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed
// // // // // only the first method was able to solve, and that too gives  time limit exceed















// //                           
// // //  1st Method    ======>     Recursion and Memoization (TLE TLE TLE) 
// // //  1st Method    ======>     Recursion and Memoization (TLE TLE TLE) 
// // //  1st Method    ======>     Recursion and Memoization (TLE TLE TLE) 
// // //  1st Method    ======>     Recursion and Memoization (TLE TLE TLE) 
// // //  1st Method    ======>     Recursion and Memoization (TLE TLE TLE) 
// //                           
                              



// // //   1st  Method   ====>      1st way   =====>  Only Recursion ( TLE TLE TLE )    
// // //   1st  Method   ====>      1st way   =====>  Only Recursion ( TLE TLE TLE )   
// // //   1st  Method   ====>      1st way   =====>  Only Recursion ( TLE TLE TLE )   
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// // 


// class Solution {
// public:
//     int n ; 
//     int  maxSumSeq( int i , int prev , vector<int>& nums , int k ) 
//     {
//         if( i >= n ) return 0 ;  
//         int ans = maxSumSeq( i+1 , prev , nums , k ) ; 
//         if( i - prev <= k ||  prev == -1 )
//         ans = max( ans , nums[i] + maxSumSeq( i+1 , i , nums , k ) )  ; 
//         return ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int constrainedSubsetSum(vector<int>& nums, int k) 
//     {
//         n = nums.size() ; 
//         int ans = maxSumSeq( 0 , -1 , nums , k ) ; 
//         // cout<<ans<<endl;
//         if( ans == 0 ) ans = * max_element(nums.begin() , nums.end() ) ; 
//         return ans ;  
//     }
// };




// // //   1st  Method   ====>   2nd way   =====>  Dp Memoization ( TLE TLE TLE )    
// // //   1st  Method   ====>   2nd way   =====>  Dp Memoization ( TLE TLE TLE )   
// // //   1st  Method   ====>   2nd way   =====>  Dp Memoization ( TLE TLE TLE )   
// //                             
// // //   Time Complexity   = O( (n^2) * log(n) )  == O(n^2)  
// //                              
// // //   Space Complexity  = O(n^2)   
// // 


// class Solution {
// public:
//     int n ; 
//     map<pair<int,int> , int> mp  ;     
//     int  maxSumSeq( int i , int prev , vector<int>& nums , int k ) 
//     {
//         if( i >= n ) return 0 ; 
//         if( mp[{i,prev}] != 0 ) return mp[{i,prev}] ;  
//         int ans = maxSumSeq( i+1 , prev , nums , k ) ; 
//         if( i - prev <= k ||  prev == -1 )
//         ans = max( ans , nums[i] + maxSumSeq( i+1 , i , nums , k ) )  ; 
//         return mp[{i,prev}] = ans ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int constrainedSubsetSum(vector<int>& nums, int k) 
//     {
//         n = nums.size() ; 
//         int ans = maxSumSeq( 0 , -1 , nums , k ) ; 
//         if( ans == 0 ) ans = * max_element(nums.begin() , nums.end() ) ; 
//         return ans ;  
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Bottom Up DP ( TLE TLE TLE)  
// // //  2nd Method    ======>   Bottom Up DP ( TLE TLE TLE)  
// // //  2nd Method    ======>   Bottom Up DP ( TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                              


// class Solution {
// public:
//     int constrainedSubsetSum(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         vector<int> dp(n,0) ; 
//         dp = nums ;
//         int ans  = dp[0] ;
//         for(int i=1; i<n; i++)
//         {
//             for(int j = i-1 ; i-j <= k && j>=0 ; j--)
//             {
//                 dp[i] = max( dp[i] , nums[i] + dp[j] ) ; 
//             }
//             ans = max( ans , dp[i]) ;
//         } 
//         return ans ;  
//     }
// };

















// //                           
// //                           
// // //  3rd Method  ==>  Priority Queue(max Heap)  (optimized of 2nd method bottom up dp )
// // //  3rd Method  ==>  Priority Queue(max Heap)  (optimized of 2nd method bottom up dp )
// // //  3rd Method  ==>  Priority Queue(max Heap)  (optimized of 2nd method bottom up dp )
// //                             
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// // //   3rd  Method   ====>   1st way   =====>       
// // //   3rd  Method   ====>   1st way   =====>       
// // //   3rd  Method   ====>   1st way   =====>       

// class Solution {
// public:
//     int constrainedSubsetSum(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         vector<int> dp(n,0) ; 
//         dp = nums ;
//         priority_queue<pair<int,int>> pq ;
//         pq.push({dp[0] , 0}) ;   
//         int ans  = dp[0] ;
//         for(int i=1; i<n; i++)
//         {
//             while( pq.size() &&  i - pq.top().second > k  )
//             {
//                 pq.pop() ; 
//             }
//             dp[i] = max( dp[i] , nums[i] + pq.top().first ) ; 
//             pq.push({dp[i] , i}) ;   
//             ans = max( ans , dp[i]) ;
//         } 
//         return ans ;  
//     }
// };



// // //   3rd  Method   ====>    2nd way   =====>       
// // //   3rd  Method   ====>    2nd way   =====>       
// // //   3rd  Method   ====>    2nd way   =====>       

// class Solution {
// public:
//     int constrainedSubsetSum(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         priority_queue<pair<int,int>> pq ;
//         pq.push({nums[0] , 0}) ;   
//         int ans  = nums[0] ;
//         for(int i=1; i<n; i++)
//         {
//             while( pq.size() &&  i - pq.top().second > k  )
//             {
//                 pq.pop() ; 
//             }
//             int curr =  max( nums[i]  , nums[i]  + pq.top().first )     ; 
//             // int curr =  nums[i]  +   max( 0 , pq.top().first )     ; 
//             pq.push({ curr , i}) ;   
//             ans = max( ans , curr ) ;
//         } 
//         return ans ;  
//     }
// };





















// //                           
// //                           
// // //  4th Method  ==>   Deque ( monotonic Queue )
// // //  4th Method  ==>   Deque ( monotonic Queue )
// // //  4th Method  ==>   Deque ( monotonic Queue )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        vector<int> dp(nums);
        deque<int> deq ;
        int ans  = nums[0] ;
        for(int i=0; i<n; i++)
        {
            // while( !deq.empty() && i - deq.front() > k  )  deq.pop_front();
            if( !deq.empty() && i - deq.front() > k  )  deq.pop_front();
            //
            //
            //
            if( !deq.empty() ) dp[i] = max( dp[i], nums[i] + dp[deq.front()]);
            //
            //
            //
            //we maintain the deque in descending order
            while( !deq.empty() && dp[i] >= dp[deq.back()]  )  deq.pop_back();
            //
            deq.push_back(i);  
            ans = max( ans , dp[i] ) ;
        } 
        return ans ;  
    }
};




































