



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                 // //  for each call here k is no of elements less than or equal to price 
// //                 // //  total  ==>  O(n^2)    when all prices are in ascending order but it is accepted
// // //  1st Method  ====>   Using vector  TC = O(k) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>   Using stack   TC = O(1) amortized ,   SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class StockSpanner {
// public:
//     StockSpanner() {
        
//     }
    
//     int next(int price) {
        
//     }
// };

// /**
//  * Your StockSpanner object will be instantiated and called as such:
//  * StockSpanner* obj = new StockSpanner();
//  * int param_1 = obj->next(price);
//  */



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using vector
// // //  1st Method    ======>    Using vector
// // //  1st Method    ======>    Using vector
// //                             
// // //   Time Complexity   = O(k) for each call here k is no of elements less than or equal to price   
// // //   Time Complexity   = O(n^2)  total =>   when all prices are in ascending order but it is accepted
// //                              
// // //   Space Complexity  = O(n)   total 
// //                               




// class StockSpanner {
// public:
//     vector<int> v ;
//     StockSpanner() 
//     {
//     }
//     int next(int price) 
//     {
//         v.push_back(price) ;
//         int n = v.size() ;
//         int ct = 0 ;
//         for(int i=n-1; i>=0 ; i--)
//         {
//             if(v[i]<=price) ct++;
//             else break ;
//         }
//         return ct ;
//     }
// };

// // /**
// //  * Your StockSpanner object will be instantiated and called as such:
// //  * StockSpanner* obj = new StockSpanner();
// //  * int param_1 = obj->next(price);
// //  */









// //                           
// //                           
// // //  2nd Method    ======>   Using stack
// // //  2nd Method    ======>   Using stack
// // //  2nd Method    ======>   Using stack
// //                             
// // //   Time Complexity   = O(1) amortized for each call 
// //                              
// // //   Space Complexity  = O(n)   
// //                               





class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() 
    {
    }
    int next(int price) 
    {
        int ans = 1 ;
        while(st.size() && st.top().first<= price)
        {
            ans += st.top().second ;
            st.pop(); 
        }
        st.push({price , ans}) ;
        return ans ;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */




























