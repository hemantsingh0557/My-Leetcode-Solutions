











// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Brute Force ( accepted)    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using map    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force ( accepted)  
// // //  1st Method    ======>   Brute Force ( accepted)  
// // //  1st Method    ======>   Brute Force ( accepted)  
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         int ans = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++) if( nums[i] == nums[j] ) ans++ ;
//         }
//         return ans  ; 
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>    Using map  
// // //  2nd Method    ======>    Using map  
// // //  2nd Method    ======>    Using map  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int ans = 0 ; 
        unordered_map<int , int> mp ;
        for(int i=0; i<n; i++)
        {
            // if( mp[nums[i]] > 0 ) ans += mp[nums[i]] ; 
            // mp[nums[i]] ++ ;
            //
            // we can replace the above two line by the below one line 
            ans += mp[nums[i]]++ ; 
        }
        return ans  ; 
    }
};









































