










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
//     vector<int> findMode(TreeNode* root) {
        
//     }
// };








 

// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)
// // //  try to solve follow-up( space optimization)



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //            // //  n is no of nodes        
// //                     
// // //  1st Method  ====> Simple DFS Recursion    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> (Try to solve) Follow-up    TC = O(n) , SC = O(1) constant
// //                 // //  ( see below )  Morris Traversal   it is an editorial solution
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple DFS Recursion 
// // //  1st Method    ======>   Simple DFS Recursion 
// // //  1st Method    ======>   Simple DFS Recursion 
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
//     map<int,int> mp ;
//     void solve(TreeNode* root)
//     {
//         if( !root ) return  ;
//         mp[root->val]++ ;
//         if( root->left ) solve(root->left) ;   
//         if( root->right ) solve(root->right) ;   
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> findMode(TreeNode* root) 
//     {
//         solve(root) ; 
//         int mx = -1 ;
//         for(auto it : mp) mx = max( mx , it.second ) ; 
//         vector<int> ans ; 
//         for(auto it : mp) if( it.second == mx ) ans.push_back(it.first) ; 
//         return ans ;  
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>  ( Morris Traversal see after this)  (Try to solve) Follow-up   
// // //  2nd Method    ======>  ( Morris Traversal see after this)  (Try to solve) Follow-up   
// // //  2nd Method    ======>  ( Morris Traversal see after this)  (Try to solve) Follow-up   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
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
//     vector<int> findMode(TreeNode* root) {
        
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Morris Traversal ( space optimized) ( Copy From Editorial )
// // //  2nd Method    ======>   Morris Traversal ( space optimized) ( Copy From Editorial )
// // //  2nd Method    ======>   Morris Traversal ( space optimized) ( Copy From Editorial )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:   
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int maxStreak = 0;
        int currStreak = 0;
        int currNum = 0;
        
        TreeNode* curr = root;
        while (curr != nullptr) {
            if (curr->left != nullptr) {
                // Find the friend
                TreeNode* friendNode = curr->left;
                while (friendNode->right != nullptr) {
                    friendNode = friendNode->right;
                }
                
                friendNode->right = curr;
                
                // Delete the edge after using it
                TreeNode* left = curr->left;
                curr->left = nullptr;
                curr = left;
            } else {
                // Handle the current node
                int num = curr->val;
                if (num == currNum) {
                    currStreak++;
                } else {
                    currStreak = 1;
                    currNum = num;
                }

                if (currStreak > maxStreak) {
                    ans = {};
                    maxStreak = currStreak;
                }

                if (currStreak == maxStreak) {
                    ans.push_back(num);
                }
                
                curr = curr->right;
            }
        }
        
        return ans;
    }
};













































