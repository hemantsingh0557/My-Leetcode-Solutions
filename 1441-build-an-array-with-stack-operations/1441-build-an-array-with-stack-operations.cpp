


















// class Solution {
// public:
//     vector<string> buildArray(vector<int>& target, int n) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Loop and Simulate   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Simple Loop and Simulate     TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Simple Loop and Simulate     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Loop and Simulate
// // //  1st Method    ======>   Simple Loop and Simulate
// // //  1st Method    ======>   Simple Loop and Simulate
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     vector<string> buildArray(vector<int>& target, int n) 
//     {
//         int m = target.size() ;  
//         vector<string> ans ;
//         stack<int> st ;
//         int j = 0 ; 
//         for(int i=1; i<=n; i++)
//         {
//             ans.push_back("Push") ; 
//             st.push(i) ;
//             if( target[j] == st.top() ) j++ ; 
//             else
//             {
//                 ans.push_back("Pop") ; 
//                 if( st.size())st.pop() ;
//             }  
//             if( j == m ) break ; 
//         }
//         return ans ;  
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>    Simple Loop and Simulate
// // //  2nd Method    ======>    Simple Loop and Simulate
// // //  2nd Method    ======>    Simple Loop and Simulate
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     vector<string> buildArray(vector<int>& target, int n) 
//     {
//         int m = target.size() ;  
//         vector<string> ans ;
//         int j = 0 ; 
//         for(int i=1; i<=n; i++)
//         {
//             ans.push_back("Push") ; 
//             if( target[j] == i ) j++ ; 
//             else  ans.push_back("Pop") ; 
//             if( j == m ) break ; 
//         }
//         return ans ;  
//     }
// };








// //                           
// //                           
// // //  3rd Method    ======>    Simple Loop and Simulate
// // //  3rd Method    ======>    Simple Loop and Simulate
// // //  3rd Method    ======>    Simple Loop and Simulate
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        int m = target.size() ;  
        vector<string> ans ;
        int i = 1 ; 
        for(int j=0; j<m; j++)
        {
            while( i < target[j] )
            {
                ans.push_back("Push") ;   
                ans.push_back("Pop") ;
                i++ ;    
            }
            ans.push_back("Push") ; 
            i++ ; 
        }
        return ans ;  
    }
};














































