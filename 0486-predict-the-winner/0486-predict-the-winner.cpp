






// class Solution {
// public:
//     bool PredictTheWinner(vector<int>& nums) {
        
//     }
// };





// // // // // //  also see the one more wrong method at the last
// // // // // //  also see the one more wrong method at the last
// // // // // //  also see the one more wrong method at the last
// // // // // //  also see the one more wrong method at the last
// // // // // //  also see the one more wrong method at the last












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways )  ====> Simple Recursion    TC = O(2^n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method ( Two Ways )  ====> Dp Memoization    TC = O(n^2) , SC = O(n^2) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// //                           
// //                           
// // //  1st Method  ( Two Ways )    ======>    Simple Recursion  
// // //  1st Method  ( Two Ways )    ======>    Simple Recursion  
// // //  1st Method  ( Two Ways )    ======>    Simple Recursion  
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       


// class Solution {
// public:
//     int n ;
//     int findscore(int i , int j , vector<int> & nums)
//     {
//         if(i>j) return 0 ;
//         int take_leftEnd = nums[i] + min( findscore(i+1 , j-1 , nums )  , findscore(i+2 , j , nums ) ) ;
//         int take_rightEnd = nums[j] + min( findscore(i+1 , j-1 , nums )  , findscore(i , j-2 , nums ) ) ;
//         int ans = max( take_leftEnd , take_rightEnd ) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool PredictTheWinner(vector<int>& nums) 
//     {
//         n = nums.size() ; 
//         int totalScore = accumulate(nums.begin() , nums.end() , 0 ) ;     
//         int pl1_Score = findscore(0 , n-1 , nums ) ;
//         int pl2_Score = totalScore - pl1_Score ;
//         return pl1_Score >= pl2_Score ;
//     }
// };





// // //   1st  Method   ====>      2nd  way   =====>       
// // //   1st  Method   ====>      2nd  way   =====>       
// // //   1st  Method   ====>      2nd  way   =====>       


// class Solution {
// public:
//     int n ;
//     int maximumDifference(int i , int j , vector<int> & nums)
//     {
//         if(i>j) return 0 ;
//         // if(i == j ) return nums[i] ;  // // optional condition
//         int take_leftEnd  = nums[i] - maximumDifference(i+1 , j , nums )  ;
//         int take_rightEnd = nums[j] - maximumDifference(i , j-1 , nums )  ;
//         int ans = max( take_leftEnd , take_rightEnd ) ;
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool PredictTheWinner(vector<int>& nums) 
//     {
//         n = nums.size() ; 
//         int maxDiff = maximumDifference(0 , n-1 , nums ) ;     
//         if( maxDiff>=0 )  return true ;
//         return false ;
//     }
// };










// //                           
// //                           
// // //  2nd Method  ( Two Ways )    ======>    Dp Memoization 
// // //  2nd Method  ( Two Ways )    ======>    Dp Memoization 
// // //  2nd Method  ( Two Ways )    ======>    Dp Memoization 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)   
// //                               



// // //   2nd  Method   ====>      1st  way   =====>       
// // //   2nd  Method   ====>      1st  way   =====>       
// // //   2nd  Method   ====>      1st  way   =====>       


// class Solution {
// public:
//     int n ;
//     int dp[25][25] ;
//     int findscore(int i , int j , vector<int> & nums)
//     {
//         if(i>j) return 0 ;
//         if(i == j ) return nums[i] ;  // // optional condition
//         if( dp[i][j] != -1 )  return dp[i][j] ;  
//         int take_leftEnd = nums[i] + min( findscore(i+1 , j-1 , nums )  , findscore(i+2 , j , nums ) ) ;
//         int take_rightEnd = nums[j] + min( findscore(i+1 , j-1 , nums )  , findscore(i , j-2 , nums ) ) ;
//         int ans = max( take_leftEnd , take_rightEnd ) ;
//         return dp[i][j] =  ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool PredictTheWinner(vector<int>& nums) 
//     {
//         memset( dp , -1 , sizeof(dp) ) ;   
//         n = nums.size() ; 
//         int totalScore = accumulate(nums.begin() , nums.end() , 0 ) ;     
//         int pl1_Score = findscore(0 , n-1 , nums ) ;
//         int pl2_Score = totalScore - pl1_Score ;
//         return pl1_Score >= pl2_Score ;
//     }
// };






// // //   2nd  Method   ====>      2nd  way   =====>       
// // //   2nd  Method   ====>      2nd  way   =====>       
// // //   2nd  Method   ====>      2nd  way   =====>       


class Solution {
public:
    int n ;
    int dp[25][25] ;
    int maximumDifference(int i , int j , vector<int> & nums)
    {
        if(i>j) return 0 ;
        // if(i == j ) return nums[i] ;  // // optional condition
        if( dp[i][j] != -1 )  return dp[i][j] ;  
        int take_leftEnd  = nums[i] - maximumDifference(i+1 , j , nums )  ;
        int take_rightEnd = nums[j] - maximumDifference(i , j-1 , nums )  ;
        int ans = max( take_leftEnd , take_rightEnd ) ;
        return dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool PredictTheWinner(vector<int>& nums) 
    {
        memset( dp , -1 , sizeof(dp) ) ;   
        n = nums.size() ; 
        int maxDiff = maximumDifference(0 , n-1 , nums ) ;     
        if( maxDiff>=0 )  return true ;
        return false ;
    }
};













// // // // // // // // // //   wrong method
// // // // // // // // // //   wrong method
// // // // // // // // // //   wrong method
// // // // // // // // // //   wrong method



// // // // //  in the below approach players are not play optimally
// // // // //  the below code is showing all the possibility of how will both the players play
// // // // //  because it is showing all possibility that't why we can not find the answer
// // // // //  so here no player is playing optimally



// class Solution {
// public:
//     int n ;
//     bool ans = false ;
//     int ans1 = -1  , ans2  = -1 ;
//     void score(int i , int j , int sc1 , int sc2 , int pl1 , int pl2 ,  vector<int>& nums)
//     {
//         if(i>j)
//         {
//             cout<<sc1<<" "<<sc2<<endl ;        
//             if(sc1 >= sc2) ans = true ;             
//             return ;              
//         }
//         if(pl1)
//         {
//             pl1 = 0 ,pl2 = 1 ;
//             sc1 += nums[i] ;
//             score( i+1 , j , sc1 , sc2 , pl1 , pl2 , nums) ;
//             sc1 -= nums[i] ;
//             //
//             sc1 += nums[j] ;
//             score( i , j-1 , sc1 , sc2 , pl1 , pl2 , nums) ;
//             sc1 -= nums[j] ;
//         }
//         else 
//         {
//             pl1 = 1 ,pl2 = 0 ;
//             sc2 += nums[i] ;
//             score( i+1 , j , sc1 , sc2 , pl1 , pl2 , nums) ;
//             sc2 -= nums[i] ;
//             //
//             sc2 += nums[j] ;
//             score( i , j-1 , sc1 , sc2 , pl1 , pl2 , nums) ;
//             sc2 -= nums[j] ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool PredictTheWinner(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         int sc1 = 0 , sc2 = 0 , pl1 = 1 , pl2 =0   ;
//         int i=0 , j= n-1 ;
//         score( i , j , sc1 , sc2 , pl1 , pl2 , nums) ;
//         // cout<<ans1<<" "<<ans2<<endl;
//         // if(ans1 >= ans2) return true ;
//         if(ans) return true ;
//         return false ;
//     }
// };























































