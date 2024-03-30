






// //  LeetCode  Biweekly  Contest  127 


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    30th March 2024  -  Saturday    .    











// class Solution {
// public:
//     int minimumSubarrayLength(vector<int>& nums, int k) 
//     {
//         
//     }
// };













// // //  see the article below =>
// // //  see the article below =>
// //
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // // 
// // //











// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Just Brute Force   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using sliding Window and bit    TC = O(32*n) , SC = O(32*n) 
// //                     
// //                     
// // //  3rd Method  ====> Try any other    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Just Brute Force 
// // //  1st Method    ======>    Just Brute Force 
// // //  1st Method    ======>    Just Brute Force 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int minimumSubarrayLength(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ; 
//         int ans =  INT_MAX ; 
//         for(int i=0; i<n; i++)
//         {
//             int res = 0 ;
//             for(int j =i; j<n; j++)
//             {
//                 res |= nums[j] ; 
//                 if( res >= k )
//                 {
//                     ans = min( ans , j-i+1) ; 
//                     break ;
//                 }
//             }
//         }
//         if( ans == INT_MAX ) return -1 ; 
//         return ans  ;
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>   Using sliding Window and bit 
// // //  2nd Method    ======>   Using sliding Window and bit 
// // //  2nd Method    ======>   Using sliding Window and bit 
// //                             
// // //   Time Complexity   = O(32*n)   
// //                              
// // //   Space Complexity  = O(32*n)   
// //                               
//
//
//
// // //  see the article below =>
// // //  see the article below =>
// //
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // //  https://stackoverflow.com/questions/26727044/how-to-reverse-a-bitwise-or-operation
// // // 
// // //
//
//
// // example 1 => 
//
// 0 0 0 0
// 0 0 1 0
// 0 0 1 1  
//
//
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int ans = INT_MAX, i = 0;
        int res = 0;
        map<int, int> mp;

        for (int j = 0; j < n; ++j) 
        {
            bitset<32> binary_representation(nums[j]);

            for (int p = binary_representation.size() - 1; p >= 0; --p) 
            {
                if (binary_representation[p] == 1) mp[p]++;
            }

            res |= nums[j];

            if (res >= k) 
            {
                ans = min(ans, j - i + 1);
                
                while (res >= k && i <= j ) 
                {
                    bitset<32> binary_representation(nums[i]);
                    for (int l = binary_representation.size() - 1; l >= 0; --l) 
                    {
                        if (binary_representation[l] == 1 && mp[l] > 0)  mp[l]--;
                    }
                    int x = 0 ;
                    for (auto it : mp) 
                    {
                        if (it.second != 0)  x += pow(2, it.first);
                    }
                    res = x;
                    i++;
                }
                ans = min(ans, j - i + 1);
            }
        }

        if (ans == INT_MAX) return -1;
        return ans+1;
        
    }
};


































// //                           
// //                           
// // //  3rd Method    ======>     Try any other 
// // //  3rd Method    ======>     Try any other 
// // //  3rd Method    ======>     Try any other 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               












// class Solution {
// public:
//     int minimumSubarrayLength(vector<int>& nums, int k) 
//     {
//         
//     }
// };




































