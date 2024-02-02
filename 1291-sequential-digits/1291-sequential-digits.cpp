






















// class Solution {
// public:
//     vector<int> sequentialDigits(int low, int high) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Two method   Method  ===>     
// // // // // // //  Solve Using  Two method   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple nested for loops   TC = O(9*9) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Better Code Quality   TC = O(9*9) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple nested for loops 
// // //  1st Method    ======>    Simple nested for loops 
// // //  1st Method    ======>    Simple nested for loops 
// //                             
// // //   Time Complexity   = O(9*9)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> sequentialDigits(int low, int high) 
//     {
//         vector<int> ans ; 
//         int digit = 1 ;  
//         while( digit < 10 )
//         {
//             int num = digit ;
//             string temp = "" ; 
//             while( num < 10  )
//             {
//                 temp += (num + '0') ;
//                 if( stoi(temp) >= low && stoi(temp) <= high ) ans.push_back(stoi(temp)) ;
//                 num ++ ;
//             }
//             digit++ ;
//         }
//         sort(ans.begin() , ans.end() ) ; 
//         return ans ; 
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   Better Code Quality  
// // //  2nd Method    ======>   Better Code Quality  
// // //  2nd Method    ======>   Better Code Quality  
// //                             
// // //   Time Complexity   = O(9*9)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> ans ; 
        for(int i=1 ; i<10; i++)
        {
            string temp = "" ; 
            for(int j=i ; j<10; j++)
            {
                temp += (j + '0') ;
                if( stoi(temp) >= low && stoi(temp) <= high ) ans.push_back(stoi(temp)) ;
            }
        }
        sort(ans.begin() , ans.end() ) ; 
        return ans ; 
    }
};





























