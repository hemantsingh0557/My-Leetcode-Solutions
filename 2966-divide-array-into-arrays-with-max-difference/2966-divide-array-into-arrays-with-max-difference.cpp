










// class Solution {
// public:
//     vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort()    TC = O(n*log(n)) , SC = O(log(n)) for sorting
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using sort()  
// // //  1st Method    ======>   Using sort()  
// // //  1st Method    ======>   Using sort()  
// //                             
// // //   Time Complexity   =  O(n*log(n))   
// //                              
// // //   Space Complexity  =  O(log(n)) for sorting
// //                               


class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end() ) ; 
        vector<vector<int>> ans ; 
        for(int i=0; i<=n-3; i+=3)
        {
            // if( nums[i+1] - nums[i] > k || nums[i+2] - nums[i] > k || nums[i+2] - nums[i+1] > k) return {} ;
            if( nums[i+2] - nums[i] > k ) return {} ;
            ans.push_back({nums[i] , nums[i+1] , nums[i+2]}) ;
        }
        return ans ; 
    }
};






















































