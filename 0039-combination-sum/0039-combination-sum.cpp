




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                  //  k is average length and x is the no of combinatins 
// // 1st Method  ====> Simple Recursion and Backtracking   TC = O(target * (2^n)) , SC = O(k*x)  
// //                      
// //                      
// // 2nd Method  ====> Simple Recursion and Backtracking   TC = O((2^t)*k) ,  SC = O(k*x)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion and Backtracking 
// // //  1st Method    ======>   Simple Recursion and Backtracking 
// // //  1st Method    ======>   Simple Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O(target * (2^n))  (Probably) 
// //                              
// // //   Space Complexity  = O(k*x)  k is average length and x is the no of combinatins   
// //  

// // //  this method is equivalent as problem  322. Coin Change  link given below
// // //  https://leetcode.com/problems/coin-change/description/


// class Solution {
// public:
//     int n ; 
//     set<vector<int>>st ;
//     void combinations(int target , vector<int>& candidates, vector<int> subset )
//     {
//         if(target==0)
//         {
//             // sorting is must because here duplicates can be store in set if not sort
//             sort(subset.begin(), subset.end()) ;
//             // sorting is must because here duplicates can be store in set if not sort
//             //
//             st.insert(subset) ;
//             return ;
//         }
//         for(int cand : candidates)
//         {
//             if(target - cand >= 0 )
//             {
//                 subset.push_back(cand) ;
//                 combinations( target-cand , candidates , subset ) ;
//                 subset.pop_back() ;  // //  it is must 
//             } 
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
//     {
//         n = candidates.size() ;
//         vector<int> subset ;
//         combinations( target , candidates , subset ) ; 
//         vector<vector<int>>ans(st.begin(), st.end()) ; 
//         return ans ;
//     }
// };






















// //                           
// //                           
// // //  2nd Method    ======>  Simple Recursion and Backtracking 
// // //  2nd Method    ======>  Simple Recursion and Backtracking 
// // //  2nd Method    ======>  Simple Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O((2^t)*k)   (Probably)  
// //                              
// // //   Space Complexity  = O(k*x)  
// //                               




// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     int n ; 
//     set<vector<int>>st ;
//     void combinations(int i , int target , vector<int>& candidates, vector<int>& subset )
//     {
//         if(i==n )
//         {
//             if(target==0)
//             {
//                 // // can't sort because we pass vector by reference 
//                 // sort(subset.begin(), subset.end()) ;
//                 // // can't sort because we pass vector by reference 
//                 st.insert(subset) ;
//             }
//             return ;
//         }
//         if( candidates[i] <= target )
//         {
//             subset.push_back(candidates[i]) ;
//             combinations(i , target-candidates[i] , candidates , subset ) ;
//             subset.pop_back() ;
//         } 
//         combinations(i+1 , target , candidates , subset ) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
//     {
//         n = candidates.size() ;
//         vector<int> subset ;
//         combinations(0, target , candidates , subset ) ; 
//         vector<vector<int>>ans(st.begin(), st.end()) ; 
//         return ans ;
//     }
// };








// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 



class Solution {
public:
    int n ; 
    vector<vector<int>>ans ;
    void combinations(int i , int target , vector<int>& candidates, vector<int>& subset )
    {
        if(i==n )
        {
            if(target==0)
            {
                // // can't sort because we pass vector by reference 
                // sort(subset.begin(), subset.end()) ;
                // // can't sort because we pass vector by reference 
                //
                ans.push_back(subset) ;
            }
            return ;
        }
        if( candidates[i] <= target )
        {
            subset.push_back(candidates[i]) ;
            combinations(i , target-candidates[i] , candidates , subset ) ;
            subset.pop_back() ;
        } 
        combinations(i+1 , target , candidates , subset ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        n = candidates.size() ;
        vector<int> subset ;
        combinations(0, target , candidates , subset ) ; 
        return ans ;
    }
};










































