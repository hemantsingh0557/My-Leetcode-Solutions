



// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Two ways)  ====> Using BFS (make Undirected Graph)    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method (Two ways)  ====> Using DFS (make Undirected Graph)    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Add Parent Pointer To Each Node   TC = O(n) , SC = O(n)  
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
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method  (Two ways)     ======>   Using BFS (make Undirected Graph) 
// // //  1st Method  (Two ways)     ======>   Using BFS (make Undirected Graph) 
// // //  1st Method  (Two ways)     ======>   Using BFS (make Undirected Graph) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





// // //  1st  Method   ====>      1st way   =====>                                 
// // //  1st  Method   ====>      1st way   =====>                                 
// // //  1st  Method   ====>      1st way   =====>                                 
// //    
// //                         
// // //   Time Complexity   = O(n+n) = O(n)   
// //                              
// // //   Space Complexity  = O(n + 3*n + n + n)   = O(n)
// //                    // // n for queue
// //                    // // when we make undirecetd graph then each node can have maixmum 3 child
// //                    // // for vistes it has n nodes
// //                    // // n for queue
// // 



// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
//     {
//         if(k==0) return {target->val} ;
//         vector<int> g[505] ;
//         queue<TreeNode *> q ;
//         q.push(root) ;
//         while(q.size())
//         {
//             TreeNode * temp = q.front() ;
//             q.pop() ;
//             int v , vl , vr ;
//             v = temp->val ;
//             if(temp->left) 
//             {
//                 vl = temp->left->val ;
//                 g[v].push_back(vl);
//                 g[vl].push_back(v);
//             }
//             if(temp->right) 
//             {
//                 vr = temp->right->val ;
//                 g[v].push_back(vr);
//                 g[vr].push_back(v);
//             }
//             if(temp->left) q.push(temp->left) ;
//             if(temp->right) q.push(temp->right) ;
//         }
//         vector<int> vis(505,0) ;
//         queue<int> qq ;
//         qq.push(target->val) ;
//         vis[target->val] = 1 ;
//         while(qq.size() && k--)
//         {
//             int sz = qq.size() ;
//             while(sz--)
//             {
//                 int v = qq.front() ;
//                 vis[v] =  1 ;   // //   we can mark visited here or inside the for loop
//                 qq.pop() ;
//                 for(auto child : g[v])
//                 {
//                     if(vis[child]) continue ;
//                     qq.push(child) ;
//                     // vis[child]= 1 ;  // //   we can mark visited here or before for loop
//                 }
//             }
//         }
//         vector<int> ans  ;
//         while(qq.size()) ans.push_back(qq.front()) , qq.pop() ;
//         return ans ;
//     }
// };









// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 
// //    
// //                         
// // //   Time Complexity   = O(n+n) = O(n)   
// //                              
// // //   Space Complexity  = O(3*n + n + n)   = O(n)
// //                    // // when we make undirecetd graph then each node can have maixmum 3 child
// //                    // // for vistes it has n nodes
// //                    // // n for queue
// // 



// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     void dfsGraph(TreeNode* root , vector<int>(&g)[505] )
//     {
//         if(!root) return ;
//         int v = root->val ;
//         if(root->left) 
//         {
//             int vl = root->left->val ;
//             g[v].push_back(vl) ;
//             g[vl].push_back(v) ;
//             dfsGraph(root->left , g) ;
//         }
//         if(root->right) 
//         {
//             int vr = root->right->val ;
//             g[v].push_back(vr) ;
//             g[vr].push_back(v) ;
//             dfsGraph(root->right , g) ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
//     {
//         if(k==0) return {target->val} ;
//         vector<int> g[505] ;
//         dfsGraph(root , g) ;
//         vector<int> vis(505,0) ;
//         queue<int> q ;
//         q.push(target->val) ;
//         vis[target->val] = 1 ;
//         while(q.size() && k--)
//         {
//             int sz = q.size() ;
//             while(sz--)
//             {
//                 int v = q.front() ;
//                 vis[v] =  1 ;   // //   we can mark visited here or inside the for loop
//                 q.pop() ;
//                 for(auto child : g[v])
//                 {
//                     if(vis[child]) continue ;
//                     q.push(child) ;
//                     // vis[child]= 1 ;  // //   we can mark visited here or before for loop
//                 }
//             }
//         }
//         vector<int> ans  ;
//         while(q.size()) ans.push_back(q.front()) , q.pop() ;
//         return ans ;
//     }
// };

















// //                           
// //                           
// // //  2nd Method   (Two ways)    ======>   Using DFS  (make Undirected Graph) 
// // //  2nd Method   (Two ways)    ======>   Using DFS  (make Undirected Graph) 
// // //  2nd Method   (Two ways)    ======>   Using DFS  (make Undirected Graph) 
// //                             
// // //   Time Complexity   =  O(n)   
// //                              
// // //   Space Complexity  =  O(n)
// //                    
// //                    
// //                               







// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// //    
// //                         
// // //   Time Complexity   = O(n+n) = O(n)   
// //                              
// // //   Space Complexity  = O(n + 3*n + n)   = O(n)
// //                    // // n for queue
// //                    // // when we make undirecetd graph then each node can have maixmum 3 child
// //                    // // for vistes it has n nodes
// // 


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> ans ;
//     void dfsAnswer(int value , int ct , int k , vector<int>(&g)[505] , vector<int>&vis)
//     {
//         if(ct==k)
//         {
//             ans.push_back(value);
//             return ;
//         }
//         vis[value] = 1 ;
//         for(int child : g[value])
//         {
//             if(vis[child]) continue ;
//             dfsAnswer(child , ct+1 , k , g , vis) ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
//     {
//         if(k==0) return {target->val} ;
//         vector<int> g[505] ;
//         queue<TreeNode *> q ;
//         q.push(root) ;
//         while(q.size())
//         {
//             TreeNode * temp = q.front() ;
//             q.pop() ;
//             int v , vl , vr ;
//             v = temp->val ;
//             if(temp->left) 
//             {
//                 vl = temp->left->val ;
//                 g[v].push_back(vl);
//                 g[vl].push_back(v);
//             }
//             if(temp->right) 
//             {
//                 vr = temp->right->val ;
//                 g[v].push_back(vr);
//                 g[vr].push_back(v);
//             }
//             if(temp->left) q.push(temp->left) ;
//             if(temp->right) q.push(temp->right) ;
//         }
//         vector<int> vis(505,0) ;
//         dfsAnswer(target->val , 0 , k , g , vis) ;
//         return ans ;
//     }
// };









// // //   2nd Method   ====>     2nd  way   =====>                                   
// // //   2nd Method   ====>     2nd  way   =====>                                   
// // //   2nd Method   ====>     2nd  way   =====>                                   
// //                      
// //       
// // //   Time Complexity   = O(n+n) = O(n)   
// //                              
// // //   Space Complexity  = O(3*n + n)   = O(n)
// //                    // // when we make u direcetd graph then each node can have maixmum 3 child
// //                    // // for vistes it has n nodes
// // 


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> ans ;
//     void dfsAnswer(int value , int ct , int k , vector<int>(&g)[505] , vector<int>&vis)
//     {
//         if(ct==k)
//         {
//             ans.push_back(value);
//             return ;
//         }
//         vis[value] = 1 ;
//         for(int child : g[value])
//         {
//             if(vis[child]) continue ;
//             dfsAnswer(child , ct+1 , k , g , vis) ;
//         }
//     }
//     void dfsGraph(TreeNode* root , vector<int>(&g)[505] )
//     {
//         if(!root) return ;
//         int v = root->val ;
//         if(root->left) 
//         {
//             int vl = root->left->val ;
//             g[v].push_back(vl) ;
//             g[vl].push_back(v) ;
//             dfsGraph(root->left , g) ;
//         }
//         if(root->right) 
//         {
//             int vr = root->right->val ;
//             g[v].push_back(vr) ;
//             g[vr].push_back(v) ;
//             dfsGraph(root->right , g) ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
//     {
//         if(k==0) return {target->val} ;
//         vector<int> g[505] ;
//         dfsGraph(root , g) ;
//         vector<int> vis(505,0) ;
//         dfsAnswer(target->val , 0 , k , g , vis) ;
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>   Add Parent Pointer To Each Node 
// // //  3rd Method    ======>   Add Parent Pointer To Each Node 
// // //  3rd Method    ======>   Add Parent Pointer To Each Node 
// //                           
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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        unordered_map<TreeNode * , TreeNode*> par ;
        queue<TreeNode*> q;
        q.push(root) ;
        while(q.size())
        {
            int sz = q.size() ;
            while(sz--)
            {
                TreeNode * temp = q.front() ;
                q.pop() ;
                if(temp->left)
                {
                    par[temp->left] = temp ;
                    q.push(temp->left) ;
                }
                if(temp->right)
                {
                    par[temp->right] = temp ;
                    q.push(temp->right) ;
                }
            }
        }
        int vis[505] = {0} ;
        q.push(target) ;
        while(q.size() && k--)
        {
            int sz = q.size() ;
            while(sz--)
            {
                TreeNode* v = q.front() ;
                q.pop() ;
                vis[v->val] = 1 ;
                if(v->left && !vis[v->left->val])  q.push(v->left) ;
                if(v->right && !vis[v->right->val])  q.push(v->right) ;
                if(par[v] && !vis[par[v]->val])  q.push(par[v]) ;
            }
        }
        vector<int> ans  ;
        while(q.size()) ans.push_back(q.front()->val) , q.pop() ;
        return ans ;
    }
};























































































