








// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) {
        
//     }
// };








// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Three Pass and map   TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  One Pass and map  TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Three Pass and map
// // //  1st Method    ======>  Three Pass and map
// // //  1st Method    ======>  Three Pass and map
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) 
//     {
//         int n = nums.size() , mx = 0 , ans = 0 ; 
//         unordered_map<int,int> mp ;
//         for(int i=0; i<n; i++) mp[nums[i]]++ ; 
//         for(auto it : mp ) mx = max( mx , it.second ) ; 
//         for(auto it : mp ) if( it.second == mx ) ans += mx ; 
//         return ans  ; 
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   One Pass and map 
// // //  2nd Method    ======>   One Pass and map 
// // //  2nd Method    ======>   One Pass and map 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int n = nums.size() , mx = 0 , ans = 0 ; 
        unordered_map<int,int> mp ;
        for(int i=0; i<n; i++)
        {
            int freq =  ++ mp[nums[i]] ;
            if( freq > mx  ) ans = freq , mx = freq ; 
            else if( freq == mx ) ans += freq   ;
        } 
        return ans  ; 
    }
};






















