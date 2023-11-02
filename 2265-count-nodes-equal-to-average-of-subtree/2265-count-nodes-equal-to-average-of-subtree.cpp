









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
//     int averageOfSubtree(TreeNode* root) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple DFS Recursion   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Better Code Writing    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple DFS Recursion 
// // //  1st Method    ======>     Simple DFS Recursion 
// // //  1st Method    ======>     Simple DFS Recursion 
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
//     int ans = 0 ; 
//     pair<int,int> findnoOfNode( TreeNode * root  )
//     {
//         if( !root ) return {0,0} ;
//         int sum = root->val ;
//         int ct = 1 ;  
//         if( root->left )
//         {
//             pair<int,int> temp = findnoOfNode(root->left ) ;
//             sum += temp.first ;  
//             ct += temp.second ;  
//         } 
//         if( root->right ) 
//         {
//             pair<int,int> temp = findnoOfNode(root->right ) ;
//             sum += temp.first ;  
//             ct += temp.second ;  
//         } 
//         if( sum / ct ==  root->val ) ans++ ;
//         return  {sum , ct} ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int averageOfSubtree(TreeNode* root) 
//     {
//         pair<int,int> temp = findnoOfNode(root) ;
//         return ans ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    Better Code Writing 
// // //  2nd Method    ======>    Better Code Writing 
// // //  2nd Method    ======>    Better Code Writing 
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
    pair<int,int> findnoOfNode( TreeNode * root  )
    {
        if( !root ) return {0,0} ;
        pair<int,int> left = findnoOfNode(root->left ) ;
        pair<int,int> right = findnoOfNode(root->right ) ;
        int sum = root->val + left.first + right.first ;  
        int ct = 1 + left.second + right.second ;  
        if( sum / ct ==  root->val ) ans++ ;
        return  {sum , ct} ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int averageOfSubtree(TreeNode* root) 
    {
        pair<int,int> temp = findnoOfNode(root) ;
        return ans ;
    }
};

































































