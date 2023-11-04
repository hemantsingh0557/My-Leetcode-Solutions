












// class Solution {
// public:
//     int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort function    TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Simple Iteration    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using sort function 
// // //  1st Method    ======>   Using sort function 
// // //  1st Method    ======>   Using sort function 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// class Solution {
// public:
//     int getLastMoment(int n, vector<int>& left, vector<int>& right) 
//     {
//         sort(left.begin() , left.end() ) ;  
//         sort(right.begin() , right.end() ) ; 
//         int leftlast = 0 ;   
//         if( left.size() ) leftlast = left[left.size()-1] ;   
//         int rightstart = n ;   
//         if( right.size() )  rightstart = right[0] ;   
//         int ans = max( leftlast , n - rightstart ) ; 
//         return ans ; 
//     }
// };






// class Solution {
// public:
//     int getLastMoment(int n, vector<int>& left, vector<int>& right) 
//     {
//         sort(left.begin() , left.end() ) ;  
//         sort(right.begin() , right.end() ) ; 
//         int ans = 0 ;  
//         if( left.size() ) ans = left[left.size()-1] ;   
//         if( right.size() ) ans = max( ans , n - right[0] ) ;   
//         return ans ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>    Simple Iteration  
// // //  2nd Method    ======>    Simple Iteration  
// // //  2nd Method    ======>    Simple Iteration  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        int l = left.size() , r = right.size() ; 
        int ans = 0 ;  
        for(int i=0; i<l; i++) ans = max( ans , left[i] ) ; 
        for(int i=0; i<r; i++) ans = max( ans , n - right[i] ) ; 
        return ans ; 
    }
};


























































