






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using DFS    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using BFS    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



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
//     int minDepth(TreeNode* root) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using DFS 
// // //  1st Method    ======>   Using DFS 
// // //  1st Method    ======>   Using DFS 
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
//     int minDepth(TreeNode* root) 
//     {
//         if(root==NULL) return 0 ;
//         int leftdepth = minDepth(root->left) ;
//         int rightdepth = minDepth(root->right) ;
//         if(root->left && root->right) return min(leftdepth+1 , rightdepth+1 ) ;
//         return max(leftdepth+1 , rightdepth+1 ) ;
//     }
// };
















// //                           
// //                           
// // //  2nd Method    ======>   Using  BFS
// // //  2nd Method    ======>   Using  BFS
// // //  2nd Method    ======>   Using  BFS
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
    int minDepth(TreeNode* root) 
    {
        if(root==NULL) return 0 ;
        queue<TreeNode *> q;
        q.push(root) ;
        int ans = 0 ;
        while(q.size())
        {
            int n = q.size() ;
            ans ++ ;  
            while(n--)
            {
                TreeNode *temp = q.front() ; 
                q.pop() ;
                if(temp->left) q.push(temp->left) ; 
                if(temp->right) q.push(temp->right) ; 
                if( !temp->left &&  !temp->right) return ans ; 
            }
        }
        return ans ;
    }
};





































