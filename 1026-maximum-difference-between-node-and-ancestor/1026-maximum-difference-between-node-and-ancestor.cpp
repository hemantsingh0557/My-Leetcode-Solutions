













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
//     int maxAncestorDiff(TreeNode* root) 
//     {
        
//     }
// };






















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
    void findMaxDiff( TreeNode * root , int mx , int mn )
    {
        if( ! root ) return  ;  
        mx = max( mx , root->val ) ;
        mn = min( mn , root->val ) ;
        ans = max( ans , mx-mn ) ;
        findMaxDiff( root->left , mx , mn ) ;
        findMaxDiff( root->right , mx , mn ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maxAncestorDiff(TreeNode* root) 
    {
        findMaxDiff( root , -1 , 5005 ) ;
        return ans ; 
    }
};



































