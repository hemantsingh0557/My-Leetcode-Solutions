














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
//     int amountOfTime(TreeNode* root, int start) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two Pass Simple make Undirected graph and DFS    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Two Pass Simple make Undirected graph and DFS  
// // //  1st Method    ======>    Two Pass Simple make Undirected graph and DFS  
// // //  1st Method    ======>    Two Pass Simple make Undirected graph and DFS  
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
    vector<vector<int>> vp ; 
    int vis[100005] = {0} ; 
    int dfs( int i )
    {
        vis[i] = 1 ; 
        int ans = 0 ; 
        for(auto child : vp[i] )
        {
            if( vis[child] == 0 )
            ans = max( ans , 1 + dfs(child) ) ;
        }
        return ans ; 
    }  
    void storeNode(TreeNode * root) 
    { 
        if( ! root ) return ;       
        if( root->left )  
        { 
            vp[root->val].push_back(root->left->val) ;  
            vp[root->left->val].push_back(root->val) ;  
            storeNode( root->left ) ;  
        } 
        if( root->right )  
        { 
            vp[root->val].push_back(root->right->val) ;  
            vp[root->right->val].push_back(root->val) ;  
            storeNode( root->right ) ;  
        } 
    } 
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int amountOfTime(TreeNode* root, int start) 
    {
        vp.resize(100005) ; 
        storeNode( root ) ;  
        int ans = dfs(start) ;  
        return ans ;  
    }
};




















































