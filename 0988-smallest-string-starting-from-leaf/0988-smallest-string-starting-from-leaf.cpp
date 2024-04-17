









// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    17th   April   2024   -   Wddnesday    .    











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
//     string smallestFromLeaf(TreeNode* root) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// // // h is height of tree                            
// //                     
// // //  1st Method  ====> Using DFS and map or set   TC = O(n*h) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using DFS and map or set   
// // //  1st Method    ======>   Using DFS and map or set   
// // //  1st Method    ======>   Using DFS and map or set   
// //                             
// // // h is height of tree                            
// //                             
// // //   Time Complexity   = O(n*h)   
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
    // string ans =  "" ;   
    map<string , int> mp ;
    void dfs( TreeNode * root , string s)
    {
        if( ! root ) return ; 
        if( ! root->left && ! root->right )
        {
            // if(  ans.size() == 0  || s.size() < ans.size() ) ans = s; 
            // else ans = min( ans , s ) ;
            s.push_back( root->val + 'a' ) ; 
            reverse(s.begin() , s.end() ) ;
            mp[s] ++ ; 
            return  ;
        }
        s.push_back( root->val + 'a' ) ;
        dfs( root->left , s ) ;
        dfs( root->right , s ) ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    string smallestFromLeaf(TreeNode* root) 
    {
        dfs( root , "" ) ;
        // for(auto it : mp ) cout<<it.first<<" ";
        // cout<<endl;
        // string ans = mp.begin()->first ;
        
        return mp.begin()->first  ;
    }
};












// //                           
// //                           
// // //  2nd Method    ======>    Try any other  
// // //  2nd Method    ======>    Try any other  
// // //  2nd Method    ======>    Try any other  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               












































































