










// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    16th   April   2024   -   Tuesday    .    













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
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
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
// // //  2nd Method  ====> Try other like BFS    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using DFS    
// // //  1st Method    ======>    Using DFS    
// // //  1st Method    ======>    Using DFS    
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
    void dfs( int currDepth ,  TreeNode * root , int val , int depth)
    {
        if( ! root ) return  ;
        currDepth ++ ;
        if( currDepth == depth-1 )
        {
            // TreeNode * temp1 = root->left ;
            // TreeNode * temp2 = root->right ;
            // TreeNode * newNode1 = new TreeNode(val , temp1 , NULL  ) ;
            // root->left = newNode1 ;
            // TreeNode * newNode2 = new TreeNode(val , NULL , temp2  ) ;
            // root->right = newNode2 ;
            // return ; 
            //
            //
            TreeNode * newNode1 = new TreeNode(val , root->left , NULL  ) ;
            root->left = newNode1 ;
            TreeNode * newNode2 = new TreeNode(val , NULL , root->right  ) ;
            root->right = newNode2 ;
            return ; 
        }
        
        dfs( currDepth , root->left , val , depth ) ;
        dfs( currDepth , root->right , val , depth ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if( depth == 1 )
        {
            TreeNode * newNode = new TreeNode(val , root , NULL ) ;
            return newNode ;
        }
        dfs( 0 , root , val , depth ) ;
        return root ;
    }
};
























// //                           
// //                           
// // //  2nd Method    ======>  Try other like BFS 
// // //  2nd Method    ======>  Try other like BFS 
// // //  2nd Method    ======>  Try other like BFS 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               








































