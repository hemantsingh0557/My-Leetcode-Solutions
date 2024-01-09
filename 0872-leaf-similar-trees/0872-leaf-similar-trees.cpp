






















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
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
//     }
// };

























// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// // // //  n1 and n2 are no of nodes of Tree1 and Tree2                    
// //                     
// // //  1st Method  ====> Simple Recursion (DFS)    TC = O(n1 + n2) , SC = O(n1 + n2)
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion (DFS)  
// // //  1st Method    ======>    Simple Recursion (DFS)  
// // //  1st Method    ======>    Simple Recursion (DFS)  
// //                             
// // // //  n1 and n2 are no of nodes of Tree1 and Tree2                    
// //                             
// // //   Time Complexity   = O(n1 + n2)  
// //                              
// // //   Space Complexity  = O(n1 + n2)  
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
    vector<int> v ;  
    void findleaf( TreeNode* root )
    {
        if( !root->left && !root->right )  
        {
            v.push_back( root->val ) ; 
            return  ;
        }
        if( root->left ) findleaf( root->left ) ;  
        if( root->right ) findleaf( root->right ) ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> v1 ;
        findleaf( root1 ) ;
        v1 = v; 
        v.clear() ; 
        findleaf( root2 ) ;
        if( v.size() != v1.size() ) return false ;
        int n = v.size() ;  
        for(int i=0; i<n; i++) if( v[i] != v1[i] ) return false  ; 
        return true ; 
    }
};





































































