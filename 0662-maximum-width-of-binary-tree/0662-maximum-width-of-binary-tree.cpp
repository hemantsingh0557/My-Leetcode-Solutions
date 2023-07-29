




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
// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) 
//     {
        
//     }
// };







// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly
// // /// /// //    try to understand it more clearly ,  not able to understand properly




// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Level Order Traversal   TC = O(n) , SC = O(1) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Level Order Traversal 
// // //  1st Method    ======>     Level Order Traversal 
// // //  1st Method    ======>     Level Order Traversal 
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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL) return 0;
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            int mini=q.front().second;
            int first,last;
            for(int i=0;i<sz;i++){
                auto front=q.front();
                q.pop();
                auto node=front.first;
                int curr_id=front.second-mini;
                // for avoiding the overflow we have initialised the index by taking the minimum from the level 
                // and substracting with the previous value to get the index in the range.
                if(i==0) first=curr_id;
                if(i==sz-1) last=curr_id;
                if(node->left) q.push({node->left,2*1LL*curr_id+1});
                if(node->right) q.push({node->right,2*1LL*curr_id+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};









































