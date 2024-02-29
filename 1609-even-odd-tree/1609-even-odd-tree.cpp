
















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
//     bool isEvenOddTree(TreeNode* root) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> (Two Pass) Store Value and check (Using DFS)    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method ( Two ways )  ====> (One pass) Using DFS    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Try to solve using BFS    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    (Two Pass) Store Value and check (Using DFS)
// // //  1st Method    ======>    (Two Pass) Store Value and check (Using DFS)
// // //  1st Method    ======>    (Two Pass) Store Value and check (Using DFS)
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
//     int n = 100005 ; 
//     vector<vector<int>> v ;
//     void storeValue( int i , TreeNode * root )
//     {
//         if( ! root ) return   ; 
//         v[i].push_back( root -> val ) ; 
//         if( root -> left ) storeValue( i+1 , root->left ) ;
//         if( root -> right ) storeValue( i+1 , root->right ) ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool isEvenOddTree(TreeNode* root) 
//     {
//         v.resize(n) ; 
//         storeValue( 0 , root ) ;
//         for(int i=0; i<n; i++)
//         {
//             if( v[i].size() == 0 ) break ;
//             int prev ;
//             if( i % 2 == 0 ) prev = -1 ; 
//             else prev = 1e7 ; 
//             // cout<<i<<" ok ok    ";
//             for(auto it : v[i])
//             {
//                 // cout<<it<<" ";
//                 if( i % 2 == 0 )
//                 {
//                     if( prev >= it || it % 2 == 0 ) return false  ;
//                     prev = it ;  
//                 }
//                 else 
//                 {
//                     if( prev <= it || it % 2 == 1 ) return false  ;
//                     prev = it ;  
//                 }
//             }
//             // cout<<endl;
//         }
//         return true ; 
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   (One pass) Using DFS  
// // //  2nd Method    ======>   (One pass) Using DFS  
// // //  2nd Method    ======>   (One pass) Using DFS  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// // //   2nd Method   ====>   1st way   =====>    (One pass) Using DFS     
// // //   2nd Method   ====>   1st way   =====>    (One pass) Using DFS     
// // //   2nd Method   ====>   1st way   =====>    (One pass) Using DFS     

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
//     int n = 100005 ; 
//     vector<vector<int>> v ;
//     bool storeValue( int i , TreeNode * root )
//     {
//         if( ! root ) return true  ; 
//         // cout<<i<< "   "<<root->val<<endl;
//         if( v[i].size() > 0 )
//         {
//             if( i % 2 == 0 && root->val % 2 == 1 && v[i].back() < root->val ) 
//             {
//                 v[i].push_back(root->val) ;
//             } 
//             else if( i % 2 == 1 && root->val % 2 == 0 && v[i].back() > root->val ) 
//             {
//                 v[i].push_back(root->val) ; 
//             }
//             else return false  ; 
//         }
//         else 
//         {
//             if( i % 2 == 0 && root->val % 2 == 1 ) v[i].push_back(root->val) ;
//             else if( i % 2 == 1 && root->val % 2 == 0  ) v[i].push_back(root->val) ; 
//             else return false  ;
//         }
//         // cout<<i<<endl; 
//         bool ans = true ; 
//         if( root -> left ) ans &= storeValue( i+1 , root->left ) ;
//         if( root -> right ) ans &= storeValue( i+1 , root->right ) ;
//         return ans ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     bool isEvenOddTree(TreeNode* root) 
//     {
//         v.resize(n) ;      
//         int ans = storeValue( 0 , root ) ;
//         return ans ; 
//     }
// };






// // //  2nd Method  ====>  2nd way  =====> ( Better Code Quality) (One pass) Using DFS       
// // //  2nd Method  ====>  2nd way  =====> ( Better Code Quality) (One pass) Using DFS       
// // //  2nd Method  ====>  2nd way  =====> ( Better Code Quality) (One pass) Using DFS       

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
    int n = 100005 ; 
    vector<vector<int>> v ;
    bool checkCondition( int i , int val )
    {
        if( i % 2 == val % 2 ) return false ; 
        if( v[i].size() == 0 ) return true ; 
        if( i % 2 == 0 && v[i].back() < val )   return true ;
        if( i % 2 == 1 && v[i].back() > val )  return true ;
        return false   ;
    }
    bool storeValue( int i , TreeNode * root )
    {
        if( ! root ) return true  ; 
        if( ! checkCondition( i , root->val) ) return false ;
        else v[i].push_back(root->val) ;         
        bool ans = true ; 
        if( root -> left ) ans &= storeValue( i+1 , root->left ) ;
        if( root -> right ) ans &= storeValue( i+1 , root->right ) ;
        return ans ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    bool isEvenOddTree(TreeNode* root) 
    {
        v.resize(n) ;      
        int ans = storeValue( 0 , root ) ;
        return ans ; 
    }
};
















// //                           
// //                           
// // //  3rd Method    ======>    Try to solve using BFS 
// // //  3rd Method    ======>    Try to solve using BFS 
// // //  3rd Method    ======>    Try to solve using BFS 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               














































