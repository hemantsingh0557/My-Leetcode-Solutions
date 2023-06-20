





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two For Loops(TLE TLE TLE)   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Prefix Sum    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<int> getAverages(vector<int>& nums, int k) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Two For Loops(TLE TLE TLE)   
// // //  1st Method    ======>    Two For Loops(TLE TLE TLE)   
// // //  1st Method    ======>    Two For Loops(TLE TLE TLE)   
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> getAverages(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         vector<int> ans  ;
//         for(int i=0; i<n; i++)
//         {
//             if(i-k<0 || i+k>=n) ans.push_back(-1) ;
//             else
//             {
//                 long long sum = nums[i] ;
//                 for(int j =1; j<=k ; j++  )
//                 {
//                     sum += nums[i-j] + nums[i+j]  ;
//                 }
//                 sum = sum/(2*k+1) ;
//                 ans.push_back(sum) ;
//             }
//         }
//         return ans  ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>  Prefix Sum
// // //  2nd Method    ======>  Prefix Sum
// // //  2nd Method    ======>  Prefix Sum
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        vector<long long> pre(n+1 , 0)  ;       // // prefix sum
        for(int i=0; i<n; i++) pre[i+1]  = pre[i] + nums[i] ;
        vector<int> ans  ;
        for(int i=0; i<n; i++)
        {
            if(i-k<0 || i+k>=n) ans.push_back(-1) ;
            else
            {
                long long sum = pre[i+k+1] - pre[i-k] ;
                sum = sum/(2*k+1) ;
                ans.push_back(sum) ;
            }
        }
        return ans  ;
    }
};
























