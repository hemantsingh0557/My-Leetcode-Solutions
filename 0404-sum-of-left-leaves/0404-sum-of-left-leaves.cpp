










// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    14th   April   2024   -   Sunday    .    











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
//     int sumOfLeftLeaves(TreeNode* root) 
//     {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> DFS Recusrion    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try any Other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   DFS Recusrion  
// // //  1st Method    ======>   DFS Recusrion  
// // //  1st Method    ======>   DFS Recusrion  
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
    int ans = 0 ;  
    void dfs( TreeNode * root  )
    {
        if( ! root ) return  ;
        if( root->left ) 
        {
            if( ! root->left->left && ! root->left->right ) ans += root->left->val ; 
            else dfs( root->left ) ;
        }
        if( root->right ) dfs( root->right ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int sumOfLeftLeaves(TreeNode* root) 
    {
        dfs( root )  ;
        return ans ; 
    }
};






// //                           
// //                           
// // //  2nd Method    ======>  Try any Other
// // //  2nd Method    ======>  Try any Other
// // //  2nd Method    ======>  Try any Other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               









































