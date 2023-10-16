












// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Two nested for loop  TC = O(rowIndex^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using only one for loop   TC = O(rowIndex) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> More optimized of 2nd method   TC = O(rowIndex/2) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Two nested for loop
// // //  1st Method    ======>   Using Two nested for loop
// // //  1st Method    ======>   Using Two nested for loop
// //                             
// // //   Time Complexity   = O(rowIndex^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> getRow(int rowIndex) 
//     {
//         vector<int> ans ;
//         for(int i=0; i<=rowIndex; i++)
//         {
//             long val = 1 ;
//             for(int j=1; j<=i; j++)
//             {
//                 val *= ( rowIndex + 1 - j ) ;   
//                 val /= j ;   
//             }  
//             ans.push_back(val) ;
//         }
//         return ans ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  Using only one for loop
// // //  2nd Method    ======>  Using only one for loop
// // //  2nd Method    ======>  Using only one for loop
// //                             
// // //   Time Complexity   = O(rowIndex)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> getRow(int rowIndex) 
//     {
//         vector<int> ans ;
//         long val = 1 ; 
//         ans.push_back(val) ;
//         for(int i=1; i<=rowIndex; i++)
//         {
//             val = val * ( rowIndex + 1 - i ) ;    
//             val /= i ;    
//             ans.push_back(val) ;
//         }
//         return ans ;
//     }
// };








// //                           
// //                           
// // //  3rd Method    ======>   More optimized of 2nd method 
// // //  3rd Method    ======>   More optimized of 2nd method 
// // //  3rd Method    ======>   More optimized of 2nd method 
// //                             
// // //   Time Complexity   = O(rowIndex/2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> ans(rowIndex+1 , 0) ;
        long val = 1 ; 
        ans[0] = val ;
        ans[rowIndex] = val ;
        for(int i=1; i<=rowIndex/2; i++)
        {
            val = val * ( rowIndex + 1 - i ) ;    
            val /= i ;    
            ans[i] = val ;
            ans[rowIndex-i] = val ;
        }
        return ans ;
    }
};

























