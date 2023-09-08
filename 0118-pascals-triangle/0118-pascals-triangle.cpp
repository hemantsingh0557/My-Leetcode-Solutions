




// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
        
//     }
// };































// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways )  ====>  Simple Maths  ( nCr Formula )   TC = O(n^2) , SC = O(n^2)  
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two Ways )  ======>    Simple Maths  ( nCr Formula ) 
// // //  1st Method  ( Two Ways )  ======>    Simple Maths  ( nCr Formula ) 
// // //  1st Method  ( Two Ways )  ======>    Simple Maths  ( nCr Formula ) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n^2)  
// //                               







// // //   1st  Method  ==>  1st  way  ====>      Simple Maths ( nCr ) 
// // //   1st  Method  ==>  1st  way  ====>      Simple Maths ( nCr ) 
// // //   1st  Method  ==>  1st  way  ====>      Simple Maths ( nCr ) 


// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) 
//     {
//         int numerator = 1 , denominator = 1  ;
//         vector<vector<int>> ans  ; 
//         for(int i=0; i<numRows; i++)
//         {
//             vector<int> temp  ;   
//             for(int j=0; j<=i; j++)
//             {
//                 int val = 1 ;
//                 for(int k=1; k<=j; k++)  val *= (i+1-k) , val /= k ;
//                 temp.push_back(val) ;
//             }
//             ans.push_back(temp) ;
//         }
//         return ans ; 
//     }
// };








// // //   1st  Method  ==>  2nd  way  ====>      Simple Maths (  C(n,r) = C(n−1,r−1) + C(n−1,r)  ) 
// // //   1st  Method  ==>  2nd  way  ====>      Simple Maths (  C(n,r) = C(n−1,r−1) + C(n−1,r)  ) 
// // //   1st  Method  ==>  2nd  way  ====>      Simple Maths (  C(n,r) = C(n−1,r−1) + C(n−1,r)  ) 


class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int numerator = 1 , denominator = 1  ;
        vector<vector<int>> ans  ; 
        for(int i=0; i<numRows; i++)
        {
            vector<int> temp(i+1,1)  ;   
            for(int j=1; j<i; j++)
            {
                temp[j] = ans[i-1][j-1] + ans[i-1][j] ;
            }
            ans.push_back(temp) ;  
        }
        return ans ; 
    }
};












































