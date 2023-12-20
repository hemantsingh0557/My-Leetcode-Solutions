














// class Solution {
// public:
//     int buyChoco(vector<int>& prices, int money) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort() function   TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====>  Simple Find min and 2nd min   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using sort() function
// // //  1st Method    ======>    Using sort() function
// // //  1st Method    ======>    Using sort() function
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     int buyChoco(vector<int>& prices, int money) 
//     {
//         int n = prices.size() ; 
//         sort(prices.begin() , prices.end() ) ;  
//         int totalPrice = prices[0] + prices[1] ;
//         if( totalPrice > money ) return money ; 
//         return money - totalPrice ;  
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>    Simple Find min and 2nd min
// // //  2nd Method    ======>    Simple Find min and 2nd min
// // //  2nd Method    ======>    Simple Find min and 2nd min
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        int n = prices.size() ; 
        int mn = 101, secondMn = 101 ;
        for(int i=0; i<n; i++)
        {
            if( prices[i] < mn )
            {
                secondMn = mn ;
                mn = prices[i] ;
            }
            else secondMn = min( secondMn , prices[i] ) ; 
        }
        int totalPrice = mn + secondMn ;
        if( totalPrice > money ) return money ; 
        return money - totalPrice ;  
    }
};

































