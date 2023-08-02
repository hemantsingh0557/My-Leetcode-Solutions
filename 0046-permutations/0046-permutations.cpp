







// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
//     }
// };

























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
    void allpermutation( int i , vector<int> &nums )
    {
        if(i==n)
        {
            ans.push_back(nums) ;
            return ; 
        }
        for(int j = i ; j<n; j++)
        {
            swap(nums[i] , nums[j]) ;
            allpermutation( i+1 , nums ) ;
            swap(nums[i] , nums[j]) ;
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<vector<int>> permute(vector<int>& nums) 
    {
        n = nums.size() ;
        allpermutation(0 , nums) ;
        return ans ;
    }
};









































