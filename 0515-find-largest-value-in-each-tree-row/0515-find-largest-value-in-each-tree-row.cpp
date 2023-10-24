

















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
//     vector<int> largestValues(TreeNode* root) {
        
//     }
// };






















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using BFS   TC = O(n) , SC = O(n) 
// //                      
// //                      
// //           // //  h is max depth of the tree           
// // //  2nd Method  ====>(try to solve ) Using DFS(recursion)  TC = O(n) , SC = O(h) 
// //                     
// //                     
// // //  3rd Method  ====>(try to solve ) Using DFS(iterative)  TC = O(n) , SC = O(h)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using BFS 
// // //  1st Method    ======>  Using BFS 
// // //  1st Method    ======>  Using BFS 
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
    vector<int> largestValues(TreeNode* root) 
    {
        vector<int> ans ;    
        queue<TreeNode*> q ; 
        if( root ) q.push(root) ;
        while( q.size() )
        {
            int n = q.size() ;
            int mx = INT_MIN ; 
            while( n-- )
            {
                TreeNode * temp = q.front() ; 
                mx = max( mx , temp->val )  ;  
                q.pop() ; 
                if( temp->left ) q.push(temp->left) ;
                if( temp->right ) q.push(temp->right) ;
            }
            ans.push_back( mx ) ;   
        }
        return ans ;   
    }
};
























// //                           
// //                           
// // //  2nd Method    ======>   ( try to solve )   Using DFS(recursion) 
// // //  2nd Method    ======>   ( try to solve )   Using DFS(recursion) 
// // //  2nd Method    ======>   ( try to solve )   Using DFS(recursion) 
// // 
// //                             
// // //   h is max depth of the tree           
// //                             
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(h)   
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
//     vector<int> largestValues(TreeNode* root) {
        
//     }
// };





// // /// // //   below is from the editorial solution
// // /// // //   below is from the editorial solution
// // /// // //   below is from the editorial solution

// class Solution {
// public:
//     vector<int> ans;
    
//     vector<int> largestValues(TreeNode* root) {
//         dfs(root, 0);
//         return ans;
//     }
    
//     void dfs(TreeNode* node, int depth) {
//         if (node == nullptr) {
//             return;
//         }
        
//         if (depth == ans.size()) {
//             ans.push_back(node->val);
//         } else {
//             ans[depth] = max(ans[depth], node->val);
//         }
        
//         dfs(node->left, depth + 1);
//         dfs(node->right, depth + 1);
//     }
// };




















// //                           
// //                           
// // //  3rd Method    ======>  (try to solve ) Using DFS(iterative)
// // //  3rd Method    ======>  (try to solve ) Using DFS(iterative)
// // //  3rd Method    ======>  (try to solve ) Using DFS(iterative)
// //                             
// //                             
// // //   h is max depth of the tree           
// //                             
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(h)   
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
//     vector<int> largestValues(TreeNode* root) {
        
//     }
// };




// // /// // //   below is from the editorial solution
// // /// // //   below is from the editorial solution
// // /// // //   below is from the editorial solution

// class Solution {
// public:
//     vector<int> largestValues(TreeNode* root) {
//         if (root == nullptr) {
//             return vector<int>{};
//         }
        
//         vector<int> ans;
//         stack<pair<TreeNode*, int>> stack;
//         stack.push(make_pair(root, 0));
        
//         while (!stack.empty()) {
//             pair<TreeNode*, int> pair = stack.top();
//             stack.pop();
//             TreeNode* node = pair.first;
//             int depth = pair.second;
            
//             if (depth == ans.size()) {
//                 ans.push_back(node->val);
//             } else {
//                 ans[depth] = max(ans[depth], node->val);
//             }
            
//             if (node->left) {
//                 stack.push(make_pair(node->left, depth + 1));
//             }
            
//             if (node->right) {
//                 stack.push(make_pair(node->right, depth + 1));
//             }
//         }
        
//         return ans;
//     }
// };
































