
















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
//     int findBottomLeftValue(TreeNode* root) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using DFS   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using BFS ( try to solve )   TC = O(n) , SC = O(n) 
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using  DFS  
// // //  1st Method    ======>    Using  DFS  
// // //  1st Method    ======>    Using  DFS  
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
    int ans = 0 ,  mxDepth = 0 ;
    void leftMostBottom( TreeNode * root , int depth )
    {
        if( ! root ) return ; 
        depth ++ ; 
        // // //
        // // //
        // // //
        // mxDepth = max( mxDepth , depth ) ;
        // if( depth == mxDepth ) ans = root->val ; 
        // // don't change the call of the function means first call right then call left
        // // otherwise right will override the value of left and ans will be wrong
        // if( root->right ) leftMostBottom( root->right , depth ) ;
        // if( root->left ) leftMostBottom( root->left , depth ) ;
        // //
        // //
        // //
        // //
        if( depth > mxDepth ) mxDepth = depth ,  ans = root->val ;
        // // // here also don't change the call here one time ans will become left 
        // // // and then it will not override by the right 
        if( root->left ) leftMostBottom( root->left , depth ) ;
        if( root->right ) leftMostBottom( root->right , depth ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int findBottomLeftValue(TreeNode* root) 
    {   
        leftMostBottom( root , 0 ) ;
        return ans  ; 
    }
};














// //                           
// //                           
// // //  2nd Method    ======>  Using BFS ( try to solve )
// // //  2nd Method    ======>  Using BFS ( try to solve )
// // //  2nd Method    ======>  Using BFS ( try to solve )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               
























































