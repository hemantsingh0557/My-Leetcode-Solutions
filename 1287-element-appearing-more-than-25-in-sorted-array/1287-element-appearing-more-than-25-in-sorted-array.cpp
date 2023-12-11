














// class Solution {
// public:
//     int findSpecialInteger(vector<int>& arr) {
        
//     }
// };



















// /// // // //  Solve only using one method try others and optimized method also
// /// // // //  Solve only using one method try others and optimized method also
// /// // // //  Solve only using one method try others and optimized method also
// /// // // //  Solve only using one method try others and optimized method also
// /// // // //  Solve only using one method try others and optimized method also
// /// // // //  Solve only using one method try others and optimized method also








// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Hashing   TC = O(n) , SC = O(10^5) 
// //                      
// //                      
// // //  2nd Method  ====> Try other    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try other     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Hashing 
// // //  1st Method    ======>    Simple Hashing 
// // //  1st Method    ======>    Simple Hashing 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(10^5)   
// //                               

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n = arr.size() ; 
        vector<int> v(100005 , 0 ) ;
        for(int i=0; i<n; i++)
        {
            v[arr[i]] ++ ;
            if( v[arr[i]] > n/4 ) return arr[i] ;
        }
        return 0 ;
    }
};









// //                           
// //                           
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// //                           
// //                           
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               
















































