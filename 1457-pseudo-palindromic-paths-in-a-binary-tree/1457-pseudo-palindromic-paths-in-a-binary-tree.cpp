
















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
//     int pseudoPalindromicPaths (TreeNode* root) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion ( TLE or MLE )    TC = O() , SC = O() 
// //                      
// //        
// //              
// // //  n is no od nodes and H is the height of tree and m is the no of nodes in each path
// //
// // //  2nd Method  ====>  Using Hashing and Recursion   TC = O(n) , SC = O(H*m) 
// //                     
// //         
// //            
// // //  n is no od nodes and H is the height of tree 
// //
// // //  3rd Method  ====> (Try to clear more) Using XOR operator and Recursion   TC = O(n) , SC = O(H)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion ( TLE or MLE ) 
// // //  1st Method    ======>   Simple Recursion ( TLE or MLE ) 
// // //  1st Method    ======>   Simple Recursion ( TLE or MLE ) 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// // //   1st Method   ====>      1st way   =====>  ( MLE MLE MLE )    Simple Recursion    
// // //   1st Method   ====>      1st way   =====>  ( MLE MLE MLE )    Simple Recursion    
// // //   1st Method   ====>      1st way   =====>  ( MLE MLE MLE )    Simple Recursion    

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
//     vector<vector<int>> AllPaths ; 
//     void dfs( TreeNode * root , vector<int> path )
//     {
//         if( ! root ) return  ; 
//         //
//         path.push_back(root->val) ;
//         if( ! root->left &&  ! root->right )
//         {
//             AllPaths.push_back(path) ;
//             return ; 
//         }
//         dfs( root->left , path ) ; 
//         dfs( root->right , path ) ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int pseudoPalindromicPaths (TreeNode* root) 
//     {
//         vector<int> path ;
//         dfs(root , path ) ;
//         int sz = AllPaths.size() ;
//         int ans = 0 ; 
//         for(int i=0; i<sz; i++)
//         {
//             unordered_map<int,int> freq ; 
//             int m = AllPaths[i].size() ; 
//             for(int j =0; j<m; j++) cout<<AllPaths[i][j] <<" " ,  freq[ AllPaths[i][j] ] ++ ; 
//             cout<<endl;
//             // for(int j =0; j<m; j++)  freq[ AllPaths[i][j] ] ++ ; 
//             int odd = 0 ;
//             for(auto it : freq )
//             {
//                 if( it.second % 2 == 1 ) odd ++ ;
//             }
//             if( odd <= 1 ) ans ++ ; 
//         }
//         return ans ; 
//     }
// };






// // //   1st Method   ====>    2nd way   =====>    ( TLE TLE TLE )    Simple Recursion     
// // //   1st Method   ====>    2nd way   =====>    ( TLE TLE TLE )    Simple Recursion     
// // //   1st Method   ====>    2nd way   =====>    ( TLE TLE TLE )    Simple Recursion     


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
//     int ans  = 0 ;
//     bool checkPath(vector<int> & path)
//     {
//         int m = path.size() ; 
//         unordered_map<int,int> freq ; 
//         // for(int j =0; j<m; j++) cout<<path[j] <<" " ,  freq[path[j]] ++ ; 
//         // cout<<endl;
//         for(int j=0; j<m; j++) freq[path[j]] ++ ; 
//         int odd = 0 ;
//         for(auto it : freq )
//         {
//             if( it.second % 2 == 1 ) odd ++ ;
//         }
//         if( odd <= 1 ) return true ;
//         return false ; 
//     }
//     void dfs( TreeNode * root , vector<int> & path )
//     {
//         if( ! root ) return  ; 
//         //
//         path.push_back(root->val) ;
//         if( ! root->left &&  ! root->right )
//         {
//             if( checkPath(path) ) ans++ ; 
//             path.pop_back() ;  
//             return ; 
//         }
//         dfs( root->left , path ) ; 
//         dfs( root->right , path ) ; 
//         path.pop_back() ;  
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int pseudoPalindromicPaths (TreeNode* root) 
//     {
//         vector<int> path ;
//         dfs(root , path ) ;
//         return ans ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>  Using Hashing and Recursion
// // //  2nd Method    ======>  Using Hashing and Recursion
// // //  2nd Method    ======>  Using Hashing and Recursion
// //                             
// // //  n is no od nodes and H is the height of tree and m is the no of nodes in each path
// //
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O( H * m )   
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
//     int ans  = 0 ;
//     void dfs( TreeNode * root , int odd , unordered_map<int,int> path )
//     {
//         if( ! root ) return  ; 
//         //
//         path[root->val] ++ ;
//         if( path[root->val] % 2 == 1 ) odd ++ ;
//         else odd -- ; 
//         if( ! root->left &&  ! root->right )
//         {
//             if( odd <= 1 ) ans++ ;  
//             return ; 
//         }
//         dfs( root->left , odd , path ) ; 
//         dfs( root->right , odd , path ) ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int pseudoPalindromicPaths (TreeNode* root) 
//     {
//         unordered_map<int,int> path ;
//         dfs(root , 0 , path ) ;
//         return ans ; 
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>  ( Try to understand )  Using  XOR operator and Recursion
// // //  3rd Method    ======>  ( Try to understand )  Using  XOR operator and Recursion
// // //  3rd Method    ======>  ( Try to understand )  Using  XOR operator and Recursion
// //                             
// // //  n is no od nodes and H is the height of tree
// //
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(H)   
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
    int ans  = 0 ;
    void dfs( TreeNode * root , int odd )
    {
        if( ! root ) return  ; 
        odd = odd ^ ( 1 << root->val ) ; 
        if( ! root->left &&  ! root->right )
        {
            if( (odd & (odd-1)) == 0 ) ans++ ;  
            return ; 
        }
        dfs( root->left , odd  ) ; 
        dfs( root->right , odd  ) ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        dfs(root , 0 ) ;
        return ans ; 
    }
};


























