

















// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort() method    TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Using Two pointer    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using sort() method  
// // //  1st Method    ======>  Using sort() method  
// // //  1st Method    ======>  Using sort() method  
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         vector<int> ans = nums ;   
//         for(int i=0; i<n; i++) ans[i] *= ans[i] ; 
//         sort(ans.begin() , ans.end() ) ;
//         return ans ; 
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   Using Two pointer 
// // //  2nd Method    ======>   Using Two pointer 
// // //  2nd Method    ======>   Using Two pointer 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int i=0 , j =0 ; 
        while( i < n && nums[i] < 0  ) i++ , j++  ;
        j-- ; 
        vector<int> ans ;   
        while( j >=0 || i<n  )
        {
            if( j >=0 && i < n )
            {
                if( nums[j]*nums[j] > nums[i] * nums[i] ) ans.push_back( nums[i] * nums[i] ) , i++ ;
                else ans.push_back( nums[j] * nums[j] ) , j-- ;
            }
            else if( j < 0 && i < n ) ans.push_back( nums[i] * nums[i] ) , i++ ;
            else if( j >= 0 && i >= n )  ans.push_back( nums[j] * nums[j] ) , j-- ;
        }
        return ans ; 
    }
};



























