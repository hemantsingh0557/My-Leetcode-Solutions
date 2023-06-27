



// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  Wrong Method  ====> Wrong Approach(ans is more than actual) same as given below question
// //     
// // //  322. Coin Change  ==>   https://leetcode.com/problems/coin-change/description/  
// //
// //
// //
// // //  1st Method(3 ways)  ====> Dp Memoization    TC = O() , SC = O() 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int change(int amount, vector<int>& coins)  {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  Wrong  Method    ======>  Wrong Approach      Wrong Approach      Wrong Approach  
// // //  Wrong  Method    ======>  Wrong Approach      Wrong Approach      Wrong Approach  
// // //  Wrong  Method    ======>  Wrong Approach      Wrong Approach      Wrong Approach  
// //                             
//                               
//
// // // // //    Wrong Approach   ====>   Wrong Approach   ====>   Wrong Approach   ====>
// // // // //    Wrong Approach   ====>   Wrong Approach   ====>   Wrong Approach   ====>
// // // // //    Wrong Approach   ====>   Wrong Approach   ====>   Wrong Approach   ====>
//
//// //  Because here many combinations repeate like
//
//  1 1 1 2 or 1 2 1 1 or 2 1 1 1    like these so our answer will more than the actual answer


// class Solution {
// public:
//     int dp[5010];
//     int numCombination(int amount, vector<int> &coins)
//     {
//         if(amount ==0 ) return 1 ;
//         if(dp[amount] != -1 ) return dp[amount];
//         int ans = 0 ;
//         for(int coin : coins)
//         {
//             if(amount - coin >= 0 ) 
//             ans += numCombination(amount-coin, coins) ;
//         }
//         return dp[amount] = ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int change(int amount, vector<int>& coins) 
//     {
//         memset(dp , -1 ,sizeof(dp) ) ;
//         int ans = numCombination(amount , coins) ;
//         return  ans ; 
//     }
// };
//
//










/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// //                           
// // //  1st  Method    ======>    Dp Memoization  
// // //  1st  Method    ======>    Dp Memoization  
// // //  1st  Method    ======>    Dp Memoization  
// // //  1st  Method    ======>    Dp Memoization  
// //                             
// // //   Time Complexity   = O() 
// //                              
// // //   Space Complexity  = O()   
// //                               



// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int dp[5010][310] ;
//     int numCombination(int amount, int index , vector<int>& coins)
//     {
//         if(amount==0) return 1 ;
//         if(index<0) return 0 ;
//         if(dp[amount][index] != -1 ) return dp[amount][index] ;
//         int ans = 0;
//         for(int coin_amount = 0 ; coin_amount<=amount; coin_amount += coins[index] )
//         {
//             ans += numCombination(amount-coin_amount , index-1 , coins) ;
//         }
//         return dp[amount][index] = ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int change(int amount, vector<int>& coins) 
//     {
//         memset(dp , -1 ,sizeof(dp) ) ;
//         int ans = numCombination(amount , coins.size() -1  , coins) ;
//         return  ans ; 
//     }
// };








// // //   1st  Method   ====>     2nd  way   =====>                                 
// // //   1st  Method   ====>     2nd  way   =====>                                 


// class Solution {
// public:
//     int dp[5010][310] ;
//     int numCombination(int amount, int index , vector<int>& coins)
//     {
//         if(amount==0) return 1 ;
//         if(index>=coins.size()) return 0 ;
//         if(dp[amount][index] != -1 ) return dp[amount][index] ;
//         int ans = 0;
//         for(int coin_amount = 0 ; coin_amount<=amount; coin_amount += coins[index] )
//         {
//             ans += numCombination(amount-coin_amount , index+1 , coins) ;
//         }
//         return dp[amount][index] = ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int change(int amount, vector<int>& coins) 
//     {
//         memset(dp , -1 ,sizeof(dp) ) ;
//         int ans = numCombination(amount , 0  , coins) ;
//         return  ans ; 
//     }
// };






// // //   1st  Method   ====>      3rd  way   =====>                                 
// // //   1st  Method   ====>      3rd  way   =====>                                 


class Solution {
public:
    int dp[310][10010] ;
    int func1(int index, int amount, vector<int> &coins)
    {
        if(amount ==0 ) return 1 ;
        if(index <0 ) return 0 ;
        if(dp[index][amount] != -1 ) return dp[index][amount];
        int ways = 0 ;
        for(int coin_amount =0; coin_amount <= amount; coin_amount += coins[index])
        {
            ways += func1(index-1 , amount-coin_amount, coins) ;
        }
        return dp[index][amount] = ways ;
    }
    // // //  Main Function of Question ==>     Main Function of Question ==>
    // // //  Main Function of Question ==>     Main Function of Question ==>
    //
    int change(int amount, vector<int>& coins) 
    {
        memset(dp, -1, sizeof(dp)) ;
        return func1(coins.size() -1 , amount , coins)  ;
    }
};
























