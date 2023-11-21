















// class Solution {
// public:
//     int countNicePairs(vector<int>& nums) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two Nested For Loop(TLE TLE TLE)    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using map   TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Two Nested For Loop(TLE TLE TLE) 
// // //  1st Method    ======>   Two Nested For Loop(TLE TLE TLE) 
// // //  1st Method    ======>   Two Nested For Loop(TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int M = 1e9 + 7 ; 
//     int rev(int num)
//     {
//         string s = to_string(num) ;
//         reverse(s.begin() , s.end() ) ;
//         num = stoi(s) ;
//         return num ;
//     }  
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int countNicePairs(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         int ans = 0  ;  
//         for(int i=0; i<n; i++)
//         {
//             for(int j =i+1; j<n; j++)
//             {
//                 if( nums[i] + rev(nums[j]) == nums[j] + rev(nums[i]) ) ans++ ;
//                 ans %= M ; 
//             }
//         }
//         return ans  ; 
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Using map
// // //  2nd Method    ======>   Using map
// // //  2nd Method    ======>   Using map
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int M = 1e9 + 7 ; 
    int rev(int num)
    {
        string s = to_string(num) ;
        reverse(s.begin() , s.end() ) ;
        num = stoi(s) ;
        return num ;
    }  
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int countNicePairs(vector<int>& nums) 
    {
        int n = nums.size() ;  
        unordered_map<int,int> mp ;
        //
        //  nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
        // // or 
        //  nums[i] - rev(nums[i]) == nums[j] - rev(nums[j])
        //
        for(int i=0; i<n; i++) 
        {
            mp[ nums[i]-rev(nums[i]) ] ++ ;  
        }
        int ans = 0  ;  
        for(auto it : mp)
        {
            long temp = it.second ;
            // if temp is 4 then answer will be 4C2  menas 4*3/2 == (4)*(4-1) / 2 
            //
            //
            long ct = temp * 1LL * (temp-1) / 2 ;
            ans = (ans + ct % M ) % M  ;
        }
        return ans  ; 
    }
};























































