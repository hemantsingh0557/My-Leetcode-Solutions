



// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Only Recursion(not good)   TC = O(2^n) , SC = O(2^n * n) 
// //                      
// //                      
// // //  2nd Method  ====>  Recursion Backtracking    TC = O(2^n) , SC = O(2^n * n) 
// //                     
// //                     
// // //  3rd Method  ====>  Bit masking    TC = O(2^n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& num){
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Only Recursion(not good) 
// // //  1st Method    ======>   Only Recursion(not good) 
// // //  1st Method    ======>   Only Recursion(not good) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(2^n * n) 
// //                               

// //  but it is not efficient because  here we do not pass subset  by reference  so on each call
// //  subset make its copy which increase the complexity
// //  that's why no need to  subset.pop_back(); 


// class Solution {
// public:
//     vector<vector<int>> allsubsets ;
//     //
//     /////////   Without Backtracking     Without Backtracking
//     //  here we do not pass subset  by reference 
//     void generate(vector<int> subset , int i, vector<int>& num )
//     {
//         if(i==num.size())
//         {
//             allsubsets.push_back(subset);
//             return ;
//         }
//         // ith element is not considered
//         generate(subset, i+1, num);
//         // ith element is  considered
//         subset.push_back(num[i]);
//         generate(subset, i+1, num);
//         // subset.pop_back();         /////////   Without Backtracking     Without Backtracking  
//     }
//     // // // // // // //  Main Question Function   ====>
//     // // // // // // //  Main Question Function   ====>
//     vector<vector<int>> subsets(vector<int>& num)     // Question function
//     {
//         vector<int> subset;
//         generate(subset , 0 , num );
//         return allsubsets;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   Recursion Backtracking 
// // //  2nd Method    ======>   Recursion Backtracking 
// // //  2nd Method    ======>   Recursion Backtracking 
// //                             
// // //   Time Complexity   = O(2^n)    
// //                              
// // //   Space Complexity  = O(2^n * n)  
// //                               


// //  it is  efficient because  here we  pass subset  by reference  so on each call
// //  subset does not make its copy which will be efficient 
// //  that's why we need to  subset.pop_back(); 

// class Solution {
// public:
//     vector<vector<int>> allsubsets ;
//     //
//     /////////    Backtracking      Backtracking      Backtracking
//     //  here we  pass subset  by reference
//     void generate(vector<int> &subset , int i, vector<int>& num )
//     {
//         if(i==num.size())
//         {
//             allsubsets.push_back(subset);
//             return ;
//         }
//         // ith element is not considered
//         generate(subset, i+1, num);
//         // ith element is  considered
//         subset.push_back(num[i]);
//         generate(subset, i+1, num);
//         subset.pop_back();            /////////  Backtracking  Backtracking   Backtracking
//     }
//     // // // // // // //  Main Question Function   ====>
//     // // // // // // //  Main Question Function   ====>
//     vector<vector<int>> subsets(vector<int>& num)     // Question function
//     {
//         vector<int> subset;
//         generate(subset , 0 , num );
//         return allsubsets;
//     }
// };











// //                           
// //                           
// // //  3rd Method    ======>    Bit masking
// // //  3rd Method    ======>    Bit masking
// // //  3rd Method    ======>    Bit masking
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    vector<vector<int>> subsets(vector<int>& num)   // Main Question function
    {
        int n = num.size();
        int subset_ct = 1<<n;
        vector<vector<int>> allsubsets ;
        for(int mask =0; mask<subset_ct; mask++)
        {
            vector<int> subset;
            for(int i=0; i<n; i++)
            {
                if(mask & (1<<i) )   subset.push_back(num[i]);
            }
            allsubsets.push_back(subset);
        }
        return allsubsets ;
    }
};
























