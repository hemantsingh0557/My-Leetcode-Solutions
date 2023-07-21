










// class Solution {
// public:
//     int findNumberOfLIS(vector<int>& nums) {
        
//     }
// };























// // // // wrong
// // // // wrong
// // // // wrong
// // // // wrong


// class Solution {
// public:
//     int n  , longestLength = -1 , ans =  0 ;
//     int calculateMaxLength(int i ,  vector<int>& nums )
//     {
//         int mxLength = 0 ;  
//         for(int j=i+1; j<n; j++)
//         {
//             if(nums[j]>nums[i]) mxLength = max(mxLength , 1 + calculateMaxLength(j  , nums) ) ;  
//             if(longestLength == 1+mxLength) ans ++ ;
//         }
//         return mxLength ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findNumberOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         int mxLength = 0 ;  
//         for(int i=0; i<n; i++)
//         {
//             mxLength = max(mxLength , 1 + calculateMaxLength(i ,  nums) ) ;  
//         }
//         longestLength = mxLength ; 
//         cout<<longestLength<<endl;
//         for(int i=0; i<n; i++)
//         {
//             mxLength = max(mxLength , 1 + calculateMaxLength(i ,  nums) ) ;  
//         }
//         return ans ;
//     }
// };











// // // // wrong
// // // // wrong
// // // // wrong
// // // // wrong



// class Solution {
// public:
//     int n  , ans = 0 , mxLength =0 , check = 1 ;
//     void calculateMaxLength(int i , int length ,  vector<int>& nums )
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(nums[j]>nums[i])
//             {
//                 if(mxLength==length) ans ++ ;
//                 else if(mxLength < length) ans =1  , mxLength = max(mxLength , length) ;
//                 calculateMaxLength(j , length +1 ,  nums)  ;
//                 check  = 0 ;
//             }
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findNumberOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         for(int i=0; i<n; i++)
//         {
//             calculateMaxLength(i, 1  , nums)  ;
//             if(check) ans ++ ; 
//         }
//         return ans ;
//     }
// };









// // // // wrong
// // // // wrong
// // // // wrong
// // // // wrong



// class Solution {
// public:
//     int n  , ans = 0 , mxLength =0 ;
//     void calculateMaxLength(int cur , int prev , int length ,  vector<int>& nums )
//     {
//         if(cur==n) return ;
//         if(nums[cur]>nums[prev])
//         {
//             if(mxLength==length) ans ++ ;
//             else if(mxLength < length) ans =1  , mxLength = max(mxLength , length) ;
//             calculateMaxLength(cur+1 , cur , length +1 ,  nums)  ;
//         }
//         else if(nums[cur]==nums[prev]) ans ++ , calculateMaxLength(cur+1 , cur , length ,  nums)  ;
//         calculateMaxLength(cur+1 , prev , length  ,  nums)  ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findNumberOfLIS(vector<int>& nums) 
//     {
//         n = nums.size() ;
//         calculateMaxLength(0, 0 , 1  , nums)  ;
//         return ans ;
//     }
// };














// // // //  Copy from the solutoin tab      =======>                     
// // // //  Copy from the solutoin tab      =======>                     
// // // //  Copy from the solutoin tab      =======>                     
// // // //  Copy from the solutoin tab      =======>                     



class Solution {
public:
    int findNumberOfLIS(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> length(n, 1);
        vector<int> count(n, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    if (length[j] + 1 > length[i]) {
                        length[i] = length[j] + 1;
                        count[i] = 0;
                    }
                    if (length[j] + 1 == length[i]) {
                        count[i] += count[j];
                    }
                }
            }
        }

        int maxLength = *max_element(length.begin(), length.end());
        int result = 0;

        for (int i = 0; i < n; i++) {
            if (length[i] == maxLength) {
                result += count[i];
            }
        }

        return result;
    }
};




























