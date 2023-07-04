




// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using map     TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using sort() function    TC = O(nlog(n))    , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using XOR      TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Using map
// // //  1st Method    ======>  Using map
// // //  1st Method    ======>  Using map
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     int singleNumber(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         unordered_map<int,int> mp;
//         for(int i=0; i<n; i++) mp[nums[i]] ++ ;
//         for(auto &it :mp) if(it.second!=2) return it.first ;
//         cout<<nums[n-1] ;
//         return nums[n-1] ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>  Using sort() function
// // //  2nd Method    ======>  Using sort() function
// // //  2nd Method    ======>  Using sort() function
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin(), nums.end()) ;
//         for(int i=0; i<n; )
//         {
//             if(i+1<n && nums[i]==nums[i+1] ) i +=2 ;
//             else return nums[i] ;
//         }
//         cout<<nums[n-1] ;
//         return nums[n-1] ;
//     }
// };






// //                           
// //                           
// // //  3rd Method    ======>   Using XOR 
// // //  3rd Method    ======>   Using XOR 
// // //  3rd Method    ======>   Using XOR 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size() ;
        int xr = 0 ;
        for(int i=0; i<n; i++ ) xr ^= nums[i] ;
        return xr ;
    }
};












































