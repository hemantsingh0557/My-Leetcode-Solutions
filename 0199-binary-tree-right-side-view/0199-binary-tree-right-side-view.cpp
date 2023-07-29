






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
//     vector<int> rightSideView(TreeNode* root) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Recursion    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Recursion 
// // //  1st Method    ======>   Using Recursion 
// // //  1st Method    ======>   Using Recursion 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
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
    void right(TreeNode * root , int level , vector<int> & ans)
    {
        if(root==NULL) return ;
        if(ans.size()==level) ans.push_back(root->val);
        //
        //
        //
        //  the below is for left view
        //  the below is for left view
        //  the below is for left view
        // right(root->left , level+1 , ans ) ;
        // right(root->right ,level+1 , ans ) ;
        //
        //
        //
        //  the below is for right view
        //  the below is for right view
        //  the below is for right view
        //
        right(root->right ,level+1 , ans ) ;
        right(root->left , level+1 , ans ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans ;
        right(root , 0 , ans) ;
        return ans ;
    }
};













































