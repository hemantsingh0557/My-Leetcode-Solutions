



// //
// // // // // // //  Solve Using  Four Method  ===>     
// // // // // // //  Solve Using  Four Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple hashing  approach    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Simple Iteration     TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using XOR    TC = O(n) , SC = O(1) constant 
// //        
// //             
// // //  4th Method  ====>  Using  Binary Search      TC = O(log(n)) , SC = O(1) constant 
// //       
// //              
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) 
//     {   
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple hashing  approach
// // //  1st Method    ======>   Simple hashing  approach
// // //  1st Method    ======>   Simple hashing  approach
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) 
//     {
//         int hsh[100005] = {0};
//         for(int i= 0 ; i<nums.size(); i++)
//         {
//             hsh[nums[i]]++;
//         }
//         for(int i= 0 ; i<100005; i++)
//         {
//             if(hsh[i]==1) return i ;
//         }
//         return 1;
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>    Simple Iteration
// // //  2nd Method    ======>    Simple Iteration
// // //  2nd Method    ======>    Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) 
//     {
//         for(int i= 0 ; i<nums.size(); i = i+2 )
//         {
//             if(i==nums.size()-1) return nums[i] ;
//             if(nums[i]!= nums[i+1]) return nums[i];
//         }
//         return 1;    
//     }
// };







// //                           
// //                           
// // //  3rd Method    ======> Using XOR 
// // //  3rd Method    ======> Using XOR 
// // //  3rd Method    ======> Using XOR 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) 
//     {   
//         int x = 0 ;
//         for(int i= 0 ; i<nums.size(); i++)
//         {
//             x = x^nums[i] ;
//         }
//         return x;
//     }
// };
 
 


// //                           
// //                           
// // //  4th  Method    ======>   Using  Binary Search 
// // //  4th  Method    ======>   Using  Binary Search 
// // //  4th  Method    ======>   Using  Binary Search 
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {   
        int n = nums.size() ;
        if(n==1) return nums[0] ;
        int lo = 0 , hi = n-1;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2 ;
            if( (mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])  )
            {
                lo = mid+1 ;
            }
            else hi = mid ;
        }
        if( (lo%2==1 && nums[lo]==nums[lo-1]) || (lo%2==0 && nums[lo]==nums[lo+1])  ) return nums[hi] ;
        return nums[lo] ;
    }
};
 
 

































