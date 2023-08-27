










// class Solution {
// public:
//     long long minimumPossibleSum(int n, int target) 
//     {
//         
//     }
// };

















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Set and  Simple  Iteration   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Set and  Simple  Iteration 
// // //  1st Method    ======>  Set and  Simple  Iteration 
// // //  1st Method    ======>  Set and  Simple  Iteration 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       


// class Solution {
// public:
//     long long minimumPossibleSum(int n, int target) 
//     {
//         long long ans = 0 ;
//         long long num = 1 ;
//         unordered_set<int> st  ;
//         for(int i=0; i<n; )
//         {
//             if( ! st.count(target - num) ) ans += num ,  st.insert(num)  , i++ ;
//             num ++ ;
//         }
//         return ans ;
//     }
// };







// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>     


class Solution {
public:
    long long minimumPossibleSum(int n, int target) 
    {
        long long ans = 0 ;
        unordered_set<int> st  ;
        for(int i=1; st.size() < n; i++ )
        {
            if( ! st.count(target - i) ) ans += i ,  st.insert(i)  ;
        }
        return ans ;
    }
};



















