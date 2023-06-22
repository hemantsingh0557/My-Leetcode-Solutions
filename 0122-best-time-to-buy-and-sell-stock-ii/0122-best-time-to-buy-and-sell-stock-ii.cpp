


// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration  
// // //  1st Method    ======>   Simple Iteration  
// // //  1st Method    ======>   Simple Iteration  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size() ;   
        int profit = 0 , buy=INT_MAX ;  
        for(int i=0; i<n; i++)
        {
            buy = min(prices[i], buy) ;
            int sell = prices[i] ;
            if(sell>buy) profit += sell - buy , buy = prices[i] ; 
        }
        return profit ;
    }
};

























