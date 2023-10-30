





















// class Solution {
// public:
//     vector<int> sortByBits(vector<int>& arr) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using in built sort function    TC = O(nlog(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Using loops    TC = O(nlog(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////










// //                           
// //                           
// // //  1st Method    ======>   Using in built sort function 
// // //  1st Method    ======>   Using in built sort function 
// // //  1st Method    ======>   Using in built sort function 
// //                             
// // //   Time Complexity   = O(nlog(n)) 
// //                              
// // //   Space Complexity  = O(log(n))  
// //                               


// class Solution {
// public:
//     static bool cmp( int a  , int b)
//     {
//         if( __builtin_popcount(a) == __builtin_popcount(b) ) return a < b ;
//         return __builtin_popcount(a) < __builtin_popcount(b)  ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> sortByBits(vector<int>& arr) 
//     {
//         int n = arr.size() ;  
//         sort(arr.begin() , arr.end() , cmp ) ;
//         return arr ; 
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>    Using loops 
// // //  2nd Method    ======>    Using loops 
// // //  2nd Method    ======>    Using loops 
// //                             
// // //   Time Complexity   = O(nlog(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        int n = arr.size() ;  
        vector<int> ans ; 
        for(int i=0; i<32; i++)
        {
            vector<int> temp ;
            for(int j=0; j<n; j++)
            {
                if( __builtin_popcount(arr[j]) == i ) temp.push_back(arr[j]) ;
            }
            sort(temp.begin() , temp.end() ) ;
            for(int k=0; k<temp.size(); k++) ans.push_back(temp[k]) ;  
        }
        return ans ; 
    }
};
















































