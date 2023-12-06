








// class Solution {
// public:
//     int totalMoney(int n) {
        
//     }
// };








// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simulation    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Maths(AP)    TC = O(1) constant , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simulation
// // //  1st Method    ======>    Simulation
// // //  1st Method    ======>    Simulation
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int totalMoney(int n) 
//     {
//         int week = n/7 ;
//         int halfweek = n%7 ;  
//         int ans = 0 ;
//         int sum = 28 ; 
//         while(week--) ans += sum , sum+= 7 ;
//         sum = n/7 + 1 ;
//         while(halfweek--) ans += sum , sum++ ;
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   Maths(AP) 
// // //  2nd Method    ======>   Maths(AP) 
// // //  2nd Method    ======>   Maths(AP) 
// //                             
// // //   Time Complexity   = O(1) Constant   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int totalMoney(int n) 
    {
        int week = n/7 ;
        int halfweek = n%7 ;  
        int ans = week * ( 56 + (week-1)*7 ) / 2 ;   // 2 * 28 == 56  because in one week total sum = 28
        int a = n/7 + 1 ;
        ans += halfweek * ( 2*a + (halfweek-1)*1 ) / 2 ;
        return ans ;
    }
};





















