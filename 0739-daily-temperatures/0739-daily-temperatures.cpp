













// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Nested for loops ( TLE TLE TLE )    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using priority queue    TC = O(n*log(n)) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Try other optimal if possible   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Nested for loops ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Nested for loops ( TLE TLE TLE ) 
// // //  1st Method    ======>   Simple Nested for loops ( TLE TLE TLE ) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) 
//     {
//         int n = temperatures.size() ;  
//         vector<int> ans(n,0)  ; 
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 if( temperatures[i] < temperatures[j] ) 
//                 {
//                     ans[i] = j-i ;
//                     break ; 
//                 } 
//             } 
//         }
//         return ans ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using priority queue  
// // //  2nd Method    ======>   Using priority queue  
// // //  2nd Method    ======>   Using priority queue  
// //                             
// // //   Time Complexity   = O(n*log(n)) 
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size() ;  
        vector<int> ans(n,0)  ; 
        priority_queue<int> pq ;  
        for(int i=0; i<n; i++)
        {
            while( pq.size() && temperatures[pq.top()] < temperatures[i] )
            {
                ans[pq.top()] = i - pq.top() ;
                pq.pop() ; 
            }
            pq.push(i) ; 
        }
        return ans ; 
    }
};










// //                           
// //                           
// // //  3rd Method    ======>   Try other optimal if possible
// // //  3rd Method    ======>   Try other optimal if possible
// // //  3rd Method    ======>   Try other optimal if possible
// //                             
// // //   Time Complexity   = O() 
// //                              
// // //   Space Complexity  = O()   
// //     






























