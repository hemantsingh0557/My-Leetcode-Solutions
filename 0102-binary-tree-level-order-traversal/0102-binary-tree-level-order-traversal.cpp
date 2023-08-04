








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
//     vector<vector<int>> levelOrder(TreeNode* root) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using BFS(QUEUE)   TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using BFS(QUEUE)
// // //  1st Method    ======>   Using BFS(QUEUE)
// // //  1st Method    ======>   Using BFS(QUEUE)
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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if( !root ) return  {} ;
        vector<vector<int>>  ans ; 
        queue< TreeNode *> q ;
        q.push(root) ;
        while(q.size())
        {
            int sz = q.size() ;
            vector<int> temp ;
            for(int i=0; i<sz; i++)
            {
                TreeNode * node = q.front() ;
                temp.push_back( node->val ) ;
                q.pop() ;
                if(node->left) q.push(node->left) ;
                if(node->right) q.push(node->right) ;
            }
            ans.push_back(temp) ; 
        }
        return ans ; 
    }
};
































