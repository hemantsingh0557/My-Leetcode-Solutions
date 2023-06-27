




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Only Recursion       TC = O(2^n) , SC = O(2^n * n) 
// //                      
// //                      
// // //  2nd Method  ====>  Recursion and Backtracking       TC = O(2^n) , SC = O(2^n * n) 
// //                     
// //                   
// // //  3rd Method  ====>  Bit masking    TC = O(2^n) , SC = O(2^n * n)
// //  
// //                   
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Only Recursion(not good)  
// // //  1st Method    ======>   Only Recursion(not good)  
// // //  1st Method    ======>   Only Recursion(not good)  
// //                             
// // //   Time Complexity  = O(2^n) 
// //                              
// // //   Space Complexity  =  O(2^n * n) 
// //                               


// //  but it is not efficient because  here we do not pass subset  by reference  so on each call
// //  subset make its copy which increase the complexity
// //  that's why no need to  subset.pop_back(); 



// class Solution {
// public:
//     int n ;
//     set<vector<int>> st ;
//     //
//     /////////   Without Backtracking     Without Backtracking
//     //  here we do not pass subset  by reference 
//     void findSubset(int i ,vector<int>& nums , vector<int> subset )
//     {
//         if( i == n )
//         {
//             sort(subset.begin() , subset.end()) ;
//             st.insert(subset);
//             return ;
//         }
//         findSubset( i+1 , nums , subset ) ; 
//         subset.push_back(nums[i]) ;
//         findSubset( i+1 , nums , subset ) ; 
//         // subset.pop_back();    /////////   Without Backtracking     Without Backtracking  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         vector<int> subset ;
//         findSubset(0 , nums , subset ) ;
//         vector<vector<int>> allsubsets(st.begin(),st.end()) ;
//         return allsubsets ; 
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>  Recursion and Backtracking 
// // //  2nd Method    ======>  Recursion and Backtracking 
// // //  2nd Method    ======>  Recursion and Backtracking 
// //                             
// // //   Time Complexity  = O(2^n) 
// //                              
// // //   Space Complexity  =  O(2^n * n) 
// //                             




// //  it is  efficient because  here we  pass subset  by reference  so on each call
// //  subset does not make its copy which will be efficient 
// //  that's why we need to  subset.pop_back(); 



// class Solution {
// public:
//     int n ;
//     set<vector<int>> st ;
//     //
//     /////////    Backtracking      Backtracking      Backtracking
//     //  here we  pass subset  by reference
//     void findSubset(int i ,vector<int>& nums , vector<int>& subset )
//     {
//         if( i == n )
//         {
//             sort(subset.begin() , subset.end()) ;
//             st.insert(subset);
//             return ;
//         }
//         findSubset( i+1 , nums , subset ) ; 
//         subset.push_back(nums[i]) ;
//         findSubset( i+1 , nums , subset ) ; 
//         subset.pop_back();           /////////  Backtracking  Backtracking   Backtracking
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         vector<int> subset ;
//         findSubset(0 , nums , subset ) ;
//         vector<vector<int>> allsubsets(st.begin(),st.end()) ;
//         return allsubsets ; 
//     }
// };












// //                           
// //                           
// // //  3rd Method    ======>    Bit masking
// // //  3rd Method    ======>    Bit masking
// // //  3rd Method    ======>    Bit masking
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(2^n *n)    
// //                               



class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        int n = nums.size() ;
        int sunset_ct = 1<<n ;
        set<vector<int>> st ;
        for(int mask=0; mask<sunset_ct ; mask++)
        {
            vector<int> subset ;
            for(int i=0; i<n; i++)
            {
                if(mask & 1<<i) subset.push_back(nums[i]) ;  
            }
            sort(subset.begin() , subset.end()) ;
            st.insert(subset);
        }
        vector<vector<int>> allsubsets(st.begin(),st.end()) ;
        return allsubsets ;
    }
};




























