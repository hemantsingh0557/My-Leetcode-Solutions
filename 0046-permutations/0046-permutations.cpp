







// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // 1st Method ===> Simple Recursion and Backtracking   TC = O(n * n!) , SC = O(1) constant
// //                       
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
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
// // //   Time Complexity   = O( n * n! )   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int n ;
    vector<vector<int>> ans ;
    void solve(int i , vector<int>& nums )
    {
        if(i==n)
        {
            ans.push_back(nums) ;
            return ;
        }
        for(int j=i ; j<n; j++)
        {
            swap(nums[i], nums[j]) ;
            solve(i+1 , nums ) ;
            swap(nums[i], nums[j]) ;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        n = nums.size() ;
        solve(0 , nums) ;
        return ans ;
    }
};








































