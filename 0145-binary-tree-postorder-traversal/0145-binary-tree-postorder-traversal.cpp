





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
//     vector<int> postorderTraversal(TreeNode* root) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion   
// // //  1st Method    ======>  Simple Recursion   
// // //  1st Method    ======>  Simple Recursion   
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
    vector<int> ans ;
    void preorder(TreeNode * root)
    {
        if(root ==NULL) return ;
        preorder(root->left) ;
        preorder(root->right) ;
        ans.push_back(root->val) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<int> postorderTraversal(TreeNode* root) 
    {
        preorder(root) ;
        return ans ;
    }
};






























































