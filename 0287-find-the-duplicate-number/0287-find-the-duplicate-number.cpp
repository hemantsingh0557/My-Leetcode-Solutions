




//
// // // // // // //  Solve Using  Three  Method  ===>
// // // // // // //  Solve Using  Three  Method  ===>
// // // // // // //  Solve Using  Three  Method  ===>
// 
//
// // // //    1st Method   ====>   Use sort()   so wrong because we can't modify the array
// // 
// //
// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    
// //
// //                        // //  Floyd's Tortoise and Hare 
// // // //    3rd Method   ====>   Slow Pointer and fast Pointer Method 
// //
// //
//



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//     }
// };












// // // //    1st Method   ====>   Use sort()   so wrong because we can't modify the array
// // // //    1st Method   ====>   Use sort()   so wrong because we can't modify the array
// // // //    1st Method   ====>   Use sort()   so wrong because we can't modify the array
// // // //    1st Method   ====>   Use sort()   so wrong because we can't modify the array


// // //
// // //
// // // // // // //    it is wrong as per the question because we can't modify the array
// // // // // // //    and we are using the sort()  function 
// // //
// // //

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin(), nums.end() ) ; 
//         for(int i=1; i<n; i++)
//         {
//             if(nums[i-1]==nums[i]) return nums[i] ;
//         }
//         return 0 ;
//     }
// };










// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    
// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    
// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    
// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    
// // // //    2nd Method   ====>   Use hash    so wrong because we use more space    


// // //
// // //
// // // // // // //    it is wrong as per the question because we can't use more space 
// // // // // // //    and we are using the hash  
// // //
// // //


// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         int hsh[100005] = {0} ;
//         for(int i=0; i<n; i++)
//         {
//             hsh[nums[i]]++ ;
//             if(hsh[nums[i]]==2) return nums[i] ;
//         }
//         return 0 ;
//     }
// };









// //
// //
// // // //    3rd Method   ====>   Slow Pointer and fast Pointer Method 
// // // //    3rd Method   ====>   Slow Pointer and fast Pointer Method 
// // // //    3rd Method   ====>   Slow Pointer and fast Pointer Method 
// // // //    3rd Method   ====>   Slow Pointer and fast Pointer Method 
//
// // // //  Floyd's Tortoise and Hare 
// // // //  Floyd's Tortoise and Hare 
// // // //  Floyd's Tortoise and Hare 
// //
// //
// // //   Time Complexity   = O( n)
// //
// // //   Space Complexity  = O(1)
// // 


class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        // int slow = nums[0] ; 
        // int fast = nums[0] ;
        int slow = 0  ; 
        int fast = 0  ;

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast) ;
        
        // slow = 0 ;
        fast = 0 ;
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow  ;
    }
};





















