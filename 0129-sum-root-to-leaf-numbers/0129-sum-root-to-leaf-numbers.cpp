








// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    15th   April   2024   -   Monday    .    


















// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int sumNumbers(TreeNode* root) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using DFS    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using DFS    
// // //  1st Method    ======>   Using DFS    
// // //  1st Method    ======>   Using DFS    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long ans = 0 ;
    void dfs( TreeNode * root , string s)
    {
        if( ! root ) return  ;
        if( ! root->left && ! root->right ) 
        {
            s.push_back( root->val + '0' ) ;
            if( s.size() ) ans += stoi(s) ;
            return  ;
        }
        s.push_back(  root->val + '0'  ) ;
        dfs( root->left , s) ;
        dfs( root->right , s ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //'
    int sumNumbers(TreeNode* root) 
    {
        dfs( root , "" ) ;
        return ans  ; 
    }
};










// //                           
// //                           
// // //  2nd Method    ======>   Try any other 
// // //  2nd Method    ======>   Try any other 
// // //  2nd Method    ======>   Try any other 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               







































