







// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // 1st Method ===> Using iteration and push element in vector  TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method  ====> Using maths formula   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maximizeSum(vector<int>& nums, int k)  {
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using iteration and push element in vector    
// // //  1st Method    ======>   Using iteration and push element in vector    
// // //  1st Method    ======>   Using iteration and push element in vector    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int maximizeSum(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         int mx = INT_MIN ;
//         for(int i=0; i<n; i++) mx = max(mx , nums[i]) ;
//         int ans = mx ;  // // here we have taken the one element
//         for(int i=0; i<k-1; i++)
//         {
//             mx++ ;
//             ans += mx ;
//             nums.push_back(mx);
//         }
//         return ans  ;
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>     Using maths formula      
// // //  2nd Method    ======>     Using maths formula      
// // //  2nd Method    ======>     Using maths formula      
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int mx = *max_element(nums.begin() , nums.end()) ;
        // //
        // // because after finding mx we always push mx+1, mx+2 , mx+3 , mx+4 , ..............
        // // means mx , mx+1, mx+2 , mx+3 , mx+4 , .............. mx+(k-1) times 
        // //
        // // so here mx will come k time and other will  0 , 1 , 2 , 3 , 4 , 5 ............
        // //
        // //
        int ans = mx*k + (k-1) * ((k-1)+1)/2 ;  
        return ans  ;
    }
};














