






// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
        
//     }
// };












// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
        
//     }
// };



































// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Using sort() function      TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>   Min Heap    TC = O(nlog(n))   , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>   Max Heap    TC = O(nlog(n))   , SC = O(1) constant
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// //                           
// //                           
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin() , nums.end()) ;
//         return nums[n-k] ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>    Min Heap 
// // //  2nd Method    ======>    Min Heap 
// // //  2nd Method    ======>    Min Heap 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k)
//     {
//         int n= nums.size() ;
//         priority_queue<int , vector<int> , greater<int>> minHeap ;
//         for(int i=0; i<k; i++)
//         {
//             minHeap.push(nums[i]) ;
//         }
//         for(int i=k; i<n; i++)
//         {
//             if(nums[i]>minHeap.top())
//             {
//                 minHeap.pop() ;
//                 minHeap.push(nums[i]) ;
//             }
//         }
//         return  minHeap.top() ; 
//     }
// };







// //                           
// //                           
// // //  3nd Method    ======>    Max Heap 
// // //  3nd Method    ======>    Max Heap 
// // //  3nd Method    ======>    Max Heap 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int n= nums.size() ;
        priority_queue<int > pq ;
        for(int i=0; i<n; i++)
        {
            pq.push(nums[i]) ;
        }
        for(int i=1; i<k; i++)
        {
            pq.pop() ;
        }
        return  pq.top() ; 
    }
};



































