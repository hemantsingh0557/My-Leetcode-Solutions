














// class Solution {
// public:
//     int minimumSum(int n, int k) 
//     {
//     }
// };















// //
// // // // // // //  Solve Using  Two    Method  ===>     
// // // // // // //  Solve Using  Two    Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using unordered_set    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using unordered_set    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using unordered_set
// // //  1st Method    ======>   Using unordered_set
// // //  1st Method    ======>   Using unordered_set
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int minimumSum(int n, int k) 
//     {
//         unordered_set<int> st ;
//         int ans = 0 , num =1  ;
//         for(int ct= 1 ; ct<=n; )
//         {
//             if( st.count(k-num) ) num++ ;
//             else ans += num  , ct++ , st.insert(num) , num++ ;
//             // cout<<ct<<" "<<ans<<endl;
//         }
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>    Using unordered_set
// // //  2nd Method    ======>    Using unordered_set
// // //  2nd Method    ======>    Using unordered_set
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int minimumSum(int n, int k) 
    {
        unordered_set<int> st ;
        int ans = 0  ;
        for(int i= 1 ; st.size()<n; i++ )
        {
            if( ! st.count(k-i) ) ans += i , st.insert(i)  ;
        }
        return ans ;
    }
};












