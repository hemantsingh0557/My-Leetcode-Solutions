














// //  LeetCode  Weekly Contest  391 


// //  2nd  Question  ===> Able to solve in contest using DP method


// //  Today's  Date   -    31st March 2024  -  Sunday    .    















// class Solution {
// public:
//     int maxBottlesDrunk(int numBottles, int numExchange) 
//     {
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //             
// // //  n is numBottles , m is numExchange  , p is  emptybottles
// //                    
// // //  1st Method  ====> Simple Recursion ( TLE TLE TLE )    TC = O(2^n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization    TC = O(n*m*p) , SC = O(n*m*p) 
// //                     
// //                     
// // //  3rd Method  ====> Simple Simulate it    TC = O(n) , SC = O(1) constant  
// //                     
// //                     
// // //  4th Method  ====> Try any other    TC = O() , SC = O()  
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion ( TLE TLE TLE ) 
// // //  1st Method    ======>  Simple Recursion ( TLE TLE TLE ) 
// // //  1st Method    ======>  Simple Recursion ( TLE TLE TLE ) 
// //             
// // //  n is numBottles , m is numExchange  , p is  emptybottles
// //             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int maxDrink( int numBottles, int numExchange , int emptybottles )
//     {
//         if(  numBottles == 0 && emptybottles < numExchange ) return  0 ;
//         int ans = 0 ;
//         for(int i=1; i<=numBottles ; i++)
//         {
//             int n = numBottles ; 
//             ans = max( ans , i + maxDrink( numBottles - i , numExchange  , i )  ) ; 
//         }
//         if( emptybottles >= numExchange )
//         ans = max( ans , maxDrink( numBottles+1 , numExchange+1  , emptybottles - numExchange )  ) ; 
//         return ans  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxBottlesDrunk(int numBottles, int numExchange) 
//     {
//         int ans = maxDrink( numBottles , numExchange  , 0 ) ;
//         return ans  ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// // //  2nd Method    ======>   DP Memoization  
// //             
// // //  n is numBottles , m is numExchange  , p is  emptybottles
// //                             
// // //   Time Complexity   = O(n*m*p)   
// //                              
// // //   Space Complexity  = O(n*m*p)   
// //                               

// class Solution {
// public:
//     int dp[105][105][105] ;
//     int maxDrink( int numBottles, int numExchange , int emptybottles )
//     {
//         if(  numBottles == 0 && emptybottles < numExchange ) return  0 ;
//         if( dp[numBottles][numExchange][emptybottles] != -1 ) return dp[numBottles][numExchange][emptybottles]  ;
//         int ans = 0 ;
//         for(int i=1; i<=numBottles ; i++)
//         {
//             int n = numBottles ; 
//             ans = max( ans , i + maxDrink( numBottles - i , numExchange  , i )  ) ; 
//         }
//         if( emptybottles >= numExchange )
//         ans = max( ans , maxDrink( numBottles+1 , numExchange+1  , emptybottles - numExchange )  ) ; 
//         return dp[numBottles][numExchange][emptybottles] = ans  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int maxBottlesDrunk(int numBottles, int numExchange) 
//     {
//         memset(dp, -1, sizeof(dp));
//         int ans = maxDrink( numBottles , numExchange  , 0 ) ;
//         return ans  ;
//     }
// };















// //                           
// //                           
// // //  3rd Method    ======>  Simple Simulate it
// // //  3rd Method    ======>  Simple Simulate it
// // //  3rd Method    ======>  Simple Simulate it
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) 
    {
        int ans = 0 , emptyBottles = 0 ;
        while( numBottles > 0 || emptyBottles >= numExchange )
        {
            if( emptyBottles >= numExchange  )
            {
                emptyBottles -= numExchange ;
                numExchange ++ ; 
                numBottles ++ ;  
            }
            ans += numBottles ;
            emptyBottles += numBottles ;
            numBottles = 0 ; 
        }
        return ans  ; 
    }
};















// //                           
// //                           
// // //  3rd Method    ======>  Try any other
// // //  3rd Method    ======>  Try any other
// // //  3rd Method    ======>  Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


































































