











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
//     int rangeSumBST(TreeNode* root, int low, int high) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// // // // //    n is the no of nodes and h id the maximum height of the tree 
// //     
// // //  1st Method  ====> Simple Recusrion    TC = O(n) , SC = O(h)   
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Recusrion   
// // //  1st Method    ======>    Simple Recusrion   
// // //  1st Method    ======>    Simple Recusrion   
// //                             
// // // // //    n is the no of nodes and h id the maximum height of the tree 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(h)   
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
    int calculateSum( TreeNode* root, int low, int high )
    {
        if( ! root ) return  0 ; 
        int ans = 0 ;
        if( root->val >= low && root->val <= high ) ans += root->val ; 
        if( root->left  ) ans += calculateSum(root->left , low , high ) ;
        if( root->right ) ans += calculateSum(root->right , low , high ) ;
        return ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int ans = calculateSum(root , low , high ) ;
        return ans ; 
    }
};




























