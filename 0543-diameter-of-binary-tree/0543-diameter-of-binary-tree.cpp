






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
//     int diameterOfBinaryTree(TreeNode* root) {
        
//     }
// };






















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using DFS    TC = O(n^2) or O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //                           
// // //  1st Method    ======>   Using DFS 
// // //  1st Method    ======>   Using DFS 
// // //  1st Method    ======>   Using DFS 
// //                             
                           




// //
// // //  1st  Method   ====>      1st way   =====>   accepted      
// // //  1st  Method   ====>      1st way   =====>   accepted      
// // //  1st  Method   ====>      1st way   =====>   accepted      
// //                             
// // //   Time Complexity   = O(n^2)   
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
//     int findheight( TreeNode * root )
//     {
//         if( !root ) return 0;
//         return   max( 1 + findheight(root->left) , 1 + findheight(root->right) ) ;  
//     }
//     int ans = 0 ;
//     void maxDepth( TreeNode* root )
//     {
//         if( !root ) return  ;
//         int left_height = findheight( root->left ) ;
//         int right_height = findheight( root->right ) ;
//         ans = max( ans , left_height + right_height ) ; 
//         maxDepth(root->left) ;
//         maxDepth(root->right) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int diameterOfBinaryTree(TreeNode* root) 
//     {
//         maxDepth( root ) ;    
//         return ans ;
//     }
// };








// // //  1st  Method   ====>      2nd way   =====>       
// // //  1st  Method   ====>      2nd way   =====>       
// // //  1st  Method   ====>      2nd way   =====>       
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
    int maxDepth( TreeNode* root )
    {
        if( !root ) return 0 ;
        int left_height = maxDepth( root->left ) ;
        int right_height = maxDepth( root->right ) ;
        ans = max( ans , left_height + right_height ) ; 
        return  1 + max( left_height , right_height ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int diameterOfBinaryTree(TreeNode* root) 
    {
        maxDepth( root ) ;    
        return ans ;
    }
};




















































