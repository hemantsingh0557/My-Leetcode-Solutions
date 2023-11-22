

















// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
//     }
// };


















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration ( TLE TLE TLE )   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using Map    TC = O(n*log(n)) , SC = O(n)
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration ( TLE TLE TLE )  
// // //  1st Method    ======>    Simple Iteration ( TLE TLE TLE )  
// // //  1st Method    ======>    Simple Iteration ( TLE TLE TLE )  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
//     {
//         int n = nums.size() ; 
//         // cout<<n<<" ok ok ok  "<<endl; 
//         vector<int> ans  ;
//         for(int i=0; i<n; i++)
//         {
//             int k = i ; 
//             for(int j=0; ; j++)
//             {
//                 if( k < 0 ) break ;
//                 int sz = nums[k].size() ; 
//                 if( j < sz ) ans.push_back(nums[k][j]) ;
//                 k-- ; 
//             }
//         }
//         //
//         // the below is for the last row
//         for(int col=1; ; col++)
//         {
//             int k = n-1 ; 
//             int check = 0 ; //   it will check if in any diagonal, at least one element is present
//             // //  if even  at least one element is not present then it means break the loop 
//             for(int j=col; ; j++)
//             {
//                 if( k < 0 ) break ;
//                 int sz = nums[k].size() ; 
//                 if( j < sz ) check = 1  , ans.push_back(nums[k][j]) ;
//                 k-- ; 
//             }
//             if( check == 0 ) break ; 
//         }
//         return ans ;  
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>    Using Map  
// // //  2nd Method    ======>    Using Map  
// // //  2nd Method    ======>    Using Map  
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        int n = nums.size() ; 
        map<int , vector<int>> mp ;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<nums[i].size() ; j++)
            {
                mp[i+j].push_back(nums[i][j]) ;
            }
        }
        vector<int> ans  ;
        for(auto it: mp)
        {
            int sz = it.second.size() ;
            for(int i=sz-1; i>=0; i--) ans.push_back( it.second[i] ) ;
        }
        return ans ;  
    }
};
























































