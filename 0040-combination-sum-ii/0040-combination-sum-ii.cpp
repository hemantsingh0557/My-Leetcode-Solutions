





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // 1st Method ==> Simple Recursion and Backtracking (TLE TLE TLE)  TC = O((2^t)*k), SC = O(k*x) 
// //                      
// //                      
// // 2nd Method ==> sort() and Backtracking   TC = O( nlog(n) + (2^n) * k ) , SC = O(k*x) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion and Backtracking (TLE TLE TLE) 
// // //  1st Method    ======>  Simple Recursion and Backtracking (TLE TLE TLE) 
// // //  1st Method    ======>  Simple Recursion and Backtracking (TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O((2^t)*k)   (Probably)   
// //                              
// // //   Space Complexity  = O(k*x) 
// //                               


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
//                 vector<int> temp  = subset ;
//                 sort(temp.begin(), temp.end()) ;
//                 st.insert(temp) ;
//             }
//             return ;
//         }
//         combinations(i+1 , target , candidates , subset ) ;
//         if( candidates[i] <= target )
//         {
//             subset.push_back(candidates[i]) ;
//             combinations(i+1 , target-candidates[i] , candidates , subset ) ;
//             subset.pop_back() ;
//         } 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
//     {
//         n = candidates.size() ;
//         vector<int> subset ;
//         combinations(0, target , candidates , subset ) ; 
//         vector<vector<int>>ans(st.begin(), st.end()) ; 
//         return ans ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  sort() and Backtracking 
// // //  2nd Method    ======>  sort() and Backtracking 
// // //  2nd Method    ======>  sort() and Backtracking 
// //                             
// // //   Time Complexity   = O(nlog(n) + (2^n) * k)   
// //                              
// // //   Space Complexity  = O(k*x)   
// //                               




class Solution {
public:
    int n ; 
    vector<vector<int>>ans ; 
    void combinations( int i ,int target , vector<int>& candidates, vector<int> &subset )
    {
        if(target==0)
        {
            ans.push_back(subset) ;
            return ;
        }
        for(int j=i; j<n; j++)
        {
            if(j>i && candidates[j-1]==candidates[j]) continue ;
            if(target - candidates[j] < 0 ) break ;
            subset.push_back(candidates[j]) ;
            combinations(j+1 , target-candidates[j] , candidates , subset ) ;
            subset.pop_back() ;  // //  it is must 
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        n = candidates.size() ;
        sort(candidates.begin(), candidates.end()) ;
        vector<int> subset ;
        combinations(0, target , candidates , subset ) ; 
        return ans ;
    }
};






















