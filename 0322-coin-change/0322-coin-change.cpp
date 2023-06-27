






// //
// // // // // // //  Solve Using Three Method  ===>     
// // // // // // //  Solve Using Three Method  ===>                        
// //                 
// //    
// // // don't take it or take it and if take it then again don't take it or take it
// // // and this will continue untill target will be 0 or less than zero here k is average length
// // // and t is average no of time a particular element can be  don't take it or take  it
// //
// // //  1st Method  ====>  Simple Recursion(TLE TLE TLE)   TC = O((2^t)*k) , SC = O(1) 
// //
// //
// // //  2nd Method  ====>  Simple Recursion(TLE TLE TLE)   TC = O(amount*(2^n)) , SC = O(1) 
// //                      
// //
// // //  3rd Method  ====>  Dp Memoization   TC = O(amount * n) , SC = O(amount) 
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
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE) 
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE) 
// // //  1st Method    ======>    Simple Recursion(TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O((2^t)  * k ) (Probably)
// //                              
// // //   Space Complexity  = O(1)   
// //                               



// class Solution {
// public:
//     int n , ans = INT_MAX  ; 
//     void func(int i , int ct ,  int amount, vector<int> &coins)
//     {
//         if(i==n && amount !=0) return  ;
//         if(amount==0) 
//         {
//             ans = min(ans, ct) ; 
//             return  ;
//         }
//         func(i+1 , ct , amount , coins) ;
//         if(amount - coins[i] >= 0 ) 
//         func(i , ct+1 , amount-coins[i] , coins) ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int coinChange(vector<int>& coins, int amount) 
//     {
//         n = coins.size() ; 
//         func(0, 0 , amount , coins) ;
//         return ans == INT_MAX ? -1 : ans ;
//     }
// };







// //                           
// //                           
// // //  2nd  Method    ======>   Simple Recursion(TLE TLE TLE)  
// // //  2nd  Method    ======>   Simple Recursion(TLE TLE TLE)  
// // //  2nd  Method    ======>   Simple Recursion(TLE TLE TLE)  
// //                             
// // //   Time Complexity   = O(amount * (2^n))   (Probably)
// //                              
// // //   Space Complexity  = O(1)   
// //                               


// class Solution {
// public:
//     int func(int amount, vector<int> &coins)
//     {
//         if(amount ==0 ) return 0;
//         int ans = INT_MAX ;
//         for(int coin : coins)
//         {
//             if(amount - coin >= 0 ) 
//             ans = min (ans + 0LL , func(amount-coin, coins) +1LL) ;
//         }
//         return  ans ;
//     }
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     // // //  Main Function of Question ==>     Main Function of Question ==>
//     //
//     int coinChange(vector<int>& coins, int amount) 
//     {
//         int ans = func(amount , coins) ;
//         return ans == INT_MAX ? -1 : ans ;
//     }
// };







// //                           
// //                           
// // //  3rd  Method    ======>    Dp Memoization  
// // //  3rd  Method    ======>    Dp Memoization  
// // //  3rd  Method    ======>    Dp Memoization  
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














