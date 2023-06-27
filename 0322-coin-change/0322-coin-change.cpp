






// //
// // // // // // //  Solve Using One Method  ===>     
// // // // // // //  Solve Using One Method  ===>     
// // // // // // //  Solve Using One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Dp Memoization   TC = O(amount * n) , SC = O(amount) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) 
//     {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Dp Memoization  
// // //  1st Method    ======>    Dp Memoization  
// // //  1st Method    ======>    Dp Memoization  
// //                             
// // //   Time Complexity   = O(amount * n) 
// //                              
// // //   Space Complexity  = O(amount)   
// //                               




class Solution {
public:
    int dp[10010] ;
    int func(int amount, vector<int> &coins)
    {
        if(amount ==0 ) return 0;
        if(dp[amount] != -1 ) return dp[amount];
        int ans = INT_MAX ;
        for(int coin : coins)
        {
            if(amount - coin >= 0 ) 
            ans = min (ans + 0LL , func(amount-coin, coins) +1LL) ;
        }
        return dp[amount] = ans ;
    }
    // // //  Main Function of Question ==>     Main Function of Question ==>
    // // //  Main Function of Question ==>     Main Function of Question ==>
    //
    int coinChange(vector<int>& coins, int amount) 
    {
        memset(dp, -1, sizeof(dp)) ;
        int ans = func(amount , coins) ;
        return ans == INT_MAX ? -1 : ans ;
    }
};




















