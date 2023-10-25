












// class Solution {
// public:
//     int kthGrammar(int n, int k) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion (accepted)   TC = O(n) , SC = O(n)
// //                      
// //                      
// // //  other Method  ====> there are some other method also but not very intuitive so i have skipped
// // // like   1.  simple recursion        (above method 1st method)       
// // // like   2.  recursion to iteration             
// // // like   3.  math
// // // like   4.  Binary Tree Traversal 
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Recursion  (accepted) 
// // //  1st Method    ======>    Simple Recursion  (accepted) 
// // //  1st Method    ======>    Simple Recursion  (accepted) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





class Solution {
public:
    int kthGrammar(int n, int k) 
    {
        if( n == 1 ) return 0  ;
        int m = pow(2, n-1)/2  ;
        // cout<<n<<" "<<k<<" "<<m<<endl;
        if( k > m ) return kthGrammar( n-1 , k - m  ) == 1 ? 0 : 1  ;   
        return kthGrammar( n-1 , k  ) ; 
    }
};






















// //                           
// //                           
// // //  others  Method    ======>       some other method                 
// // //  others  Method    ======>       some other method                 
// // //  others  Method    ======>       some other method                 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               









// //                           
// //                           
// // //   1.   recursion to iteration  method   ==>               
// // //   1.   recursion to iteration  method   ==>               
// // //   1.   recursion to iteration  method   ==>               
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1)  constant   
// //                               



// class Solution {
// public:
//     int kthGrammar(int n, int k) {
//         if (n == 1) {
//             return 0;
//         }

//         // We assume the symbol at the target position is '1'.
//         int symbol = 1;

//         for (int currRow = n; currRow > 1; --currRow) {
//             int totalElements = pow(2, (currRow - 1));
//             int halfElements = totalElements / 2;

//             // If 'k' lies in the right half symbol, then we flip over to the respective left half symbol.
//             if (k > halfElements) {
//                 // Flip the symbol.
//                 symbol = 1 - symbol;
//                 // Change the position after flipping.
//                 k -= halfElements;
//             }
//         }

//         // We reached the 1st row; if the symbol is not '0', we started with the wrong symbol.
//         if (symbol != 0) {
//             // Thus, the start symbol was '0' not '1'.
//             return 0;
//         } 

//         // Start symbol was indeed what we started with, a '1'.
//         return 1;
//     }
// };




















// //                           
// //                           
// // //  2 .   math  method    ==>              
// // //  2 .   math  method    ==>              
// // //  2 .   math  method    ==>              
// //                             
// //            The number of bits in number k is log⁡k
// //           
// //           
// // //   Time Complexity   = O(log(k))   
// //                              
// // //   Space Complexity  = O(1)  or O(log(k))   
// //                               



// class Solution {
// public:
//     int kthGrammar(int n, int k) {
//         int count = __builtin_popcount(k - 1);
//         return count % 2 == 0 ? 0 : 1;
//     }
// };















// //                           
// //                           
// // //  3.   Binary Tree Traversal  method  ==>               
// // //  3.   Binary Tree Traversal  method  ==>               
// // //  3.   Binary Tree Traversal  method  ==>               
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int depthFirstSearch(int n, int k, int rootVal) {
//         if (n == 1) {
//             return rootVal;
//         }

//         int totalNodes = pow(2, n - 1);

//         // Target node will be present in the right half sub-tree of the current root node.
//         if (k > (totalNodes / 2)) {
//             int nextRootVal = (rootVal == 0) ? 1 : 0;
//             return depthFirstSearch(n - 1, k - (totalNodes / 2), nextRootVal);
//         }
//         // Otherwise, the target node is in the left sub-tree of the current root node.
//         else {
//             int nextRootVal = (rootVal == 0) ? 0 : 1;
//             return depthFirstSearch(n - 1, k, nextRootVal);
//         }
//     }

//     int kthGrammar(int n, int k) {
//         return depthFirstSearch(n, k, 0);
//     }
// };








































