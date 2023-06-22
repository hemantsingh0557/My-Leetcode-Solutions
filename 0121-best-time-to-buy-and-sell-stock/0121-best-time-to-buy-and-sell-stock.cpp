


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
//     int maxProfit(vector<int>& prices) 
//     {
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
        int profit = 0 , buy = prices[0]  ;
        for(int i= 1; i<n ; i++)
        {
            // if(buy>prices[i]) 
            // {
            //     buy = prices[i];
            //     continue  ;
            // }
            buy = min(buy , prices[i]) ;
            profit = max(profit , prices[i] - buy ) ;
        }
        return profit  ;
    }
};




















