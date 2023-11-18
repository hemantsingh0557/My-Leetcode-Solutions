













// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Sort , Sliding Window and map    TC = O(n*log(n)) , SC = O(log(n))
// //                      
// //                      
// // //  2nd Method  ====> Sort , Sliding Window     TC = O(n*log(n)) , SC = O(log(n))
// //                     
// //                     
// // //  3rd Method  ====> Sort , Sliding Window     TC = O(n*log(n)) , SC = O(log(n))
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Sort , Sliding Window and map 
// // //  1st Method    ======>   Sort , Sliding Window and map 
// // //  1st Method    ======>   Sort , Sliding Window and map 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         sort(nums.begin() ,  nums.end() ) ; 
//         unordered_map<int,int> mp ; 
//         for(int i=0; i<n; i++)  mp[nums[i]] ++ ; 
//         int ans = mp[nums[0]] ;
//         for(int i=1; i<n; i++)
//         {
//             if( nums[i-1] == nums[i] ) continue ; 
//             int ct = mp[nums[i]] ;
//             int op = k ;  
//             int j = i-1 ; 
//             while(j>=0 && nums[i] - nums[j] <= op )
//             {
//                 op = op - (nums[i] - nums[j] ) ; 
//                 j-- ;
//                 ct++ ; 
//             }
//             ans = max( ans , ct ) ; 
//         }
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>   Sort  and  Sliding Window 
// // //  2nd Method    ======>   Sort  and  Sliding Window 
// // //  2nd Method    ======>   Sort  and  Sliding Window 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         sort(nums.begin() ,  nums.end() ) ; 
//         int ans = 1 ;
//         int ct = 1 ;
//         for(int i=1; i<n; i++)
//         {
//             if( nums[i-1] == nums[i] )
//             {
//                 ans = max( ans , ++ct ) ; 
//                 continue ; 
//             }  
//             int op = k ;  
//             int j = i ; 
//             while(j>=0 && nums[i] - nums[j] <= op )
//             {
//                 op = op - (nums[i] - nums[j] ) ; 
//                 j-- ;
//             }
//             ct = i - j  ;  
//             ans = max( ans , ct ) ; 
//         }
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  3rd Method    ======>   Sort  and  Sliding Window 
// // //  3rd Method    ======>   Sort  and  Sliding Window 
// // //  3rd Method    ======>   Sort  and  Sliding Window 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                                


class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        int n = nums.size() ; 
        sort(nums.begin() ,  nums.end() ) ; 
        int ans = 0 ;
        long sum = 0 ;
        int j =0 ;
        for(int i=0; i<n; i++)
        {
            long target = nums[i] ;
            sum += target ;
            while( target * (i-j+1) - sum > k ) sum -= nums[j++] ; 
            ans = max( ans , i - j + 1 ) ;   
        }
        return ans ;
    }
};































