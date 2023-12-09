














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
//     vector<int> inorderTraversal(TreeNode* root) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Two Method  ===>     
// // // // // // //  Solve Using  Two Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Morris Traversal      TC = O(n) , SC = O(1) 
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
//     vector<int> ans ;
//     void inorder(TreeNode * root)
//     {
//         if(root ==NULL) return ;
//         inorder(root->left) ;
//         ans.push_back(root->val) ;
//         inorder(root->right) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> inorderTraversal(TreeNode* root) 
//     {
//         inorder(root) ;
//         return ans ;
//     }
// };









// //                           
// //                           
// // //  2nd  Method    ======>   Morris Traversal   
// // //  2nd  Method    ======>   Morris Traversal   
// // //  2nd  Method    ======>   Morris Traversal   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1)   
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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> ans ;
        TreeNode * cur = root ;
        while(cur != NULL)
        {
            if(cur->left == NULL)
            {
                ans.push_back(cur->val) ;
                cur = cur->right ;
            }
            else 
            {
                TreeNode * prev = cur->left ;
                while(prev->right && prev->right != cur)  prev = prev ->right ;  
                if(prev->right==NULL)
                {
                    prev ->right = cur ;  
                    cur = cur ->left ;  
                }
                else
                {
                    prev ->right = NULL ;  
                    ans.push_back(cur->val) ;
                    cur = cur ->right ;  
                }
            }
        }
        return ans ;
    }
};


































































