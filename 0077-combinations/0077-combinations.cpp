














// class Solution {
// public:
//     vector<vector<int>> combine(int n, int k) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion ( Memory Limit Exceeded )  TC = O(nCk) , SC = O() 
// //                      
// //                      
// // //  2nd Method  ====> Recursion + Backtracking    TC = O(nCk) , SC = O(nCk) 
// //                     
// //                     
// // //  3rd Method  ====> Bit Manipulation    TC = O(nCk) , SC = O(nCk) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion   ( Memory Limit Exceeded )
// // //  1st Method    ======>   Simple Recursion   ( Memory Limit Exceeded )
// // //  1st Method    ======>   Simple Recursion   ( Memory Limit Exceeded )
// //                             
// // //   Time Complexity   = O( nCk )   
// //                              
// // //   Space Complexity  = O() MLE   
// //                               



// class Solution {
// public:
//     vector<vector<int>>  ans ;
//     void combinations(int i , vector<int>comb ,  int n , int k)
//     {
//         if(k==0)
//         {
//             ans.push_back( comb ) ;  
//             return ;
//         }
//         if(i>n) return  ;
//         combinations(i+1 , comb , n , k ) ;
//         comb.push_back( i ) ;
//         combinations(i+1 , comb , n , k-1 ) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> combine(int n, int k) 
//     {
//         vector<int> comb ;
//         combinations(1 , comb , n , k ) ;
//         return ans ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Recursion + Backtracking 
// // //  2nd Method    ======>   Recursion + Backtracking 
// // //  2nd Method    ======>   Recursion + Backtracking 
// //                             
// // //   Time Complexity   = O( nCk )   
// //                              
// // //   Space Complexity  = O( nCk )   
// //                               



// class Solution {
// public:
//     vector<vector<int>>  ans ;
//     void combinations(int i , vector<int>&comb ,  int n , int k)
//     {
//         if(k==0)
//         {
//             ans.push_back( comb ) ;  
//             return ;
//         }
//         if(i>n) return  ;
//         combinations(i+1 , comb , n , k ) ;
//         comb.push_back( i ) ;
//         combinations(i+1 , comb , n , k-1 ) ;
//         comb.pop_back() ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> combine(int n, int k) 
//     {
//         vector<int> comb ;
//         combinations(1 , comb , n , k ) ;
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  3rd  Method    ======>    Bit Manipulation 
// // //  3rd  Method    ======>    Bit Manipulation 
// // //  3rd  Method    ======>    Bit Manipulation 
// //                             
// // //   Time Complexity   = O( 2^n )   
// //                              
// // //   Space Complexity  = O( nCk )   
// //                               



class Solution {
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> ans ; 
        set<vector<int>> st ; 
        int subset_ct = (1<<n) ;
        for( int mask=0 ; mask < subset_ct ;  mask++ )
        {
            int ct = __builtin_popcountll(mask) ;   
            if( ct != k ) continue ;      
            vector<int> comb ;     
            for(int i=0; i<n; i++)
            {
                if(  mask & (1<<i) ) comb.push_back(i+1) ;
            }
            ans.push_back(comb) ;
        }
        return ans ;
    }
};

































