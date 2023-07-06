






// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Nested Loops (TLE TLE TLE)    TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Priority Queue(Heap)    TC = O(nlog(k)) , SC = O(k) 
// //                     
// //                     
// // //  3rd Method( Two ways )  ====>  Dequeue     TC = O(n) , SC = O(k)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) 
//     {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Nested Loops (TLE TLE TLE) 
// // //  1st Method    ======>    Nested Loops (TLE TLE TLE) 
// // //  1st Method    ======>    Nested Loops (TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         vector<int> ans ;
//         for(int i=0; i<=n-k; i++)
//         {
//             int mx = INT_MIN ;
//             for(int j=i; j<i+k; j++)   mx = max(mx , nums[j]) ;
//             ans.push_back(mx) ;
//         }
//         return ans ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>     Priority Queue(Heap) 
// // //  2nd Method    ======>     Priority Queue(Heap) 
// // //  2nd Method    ======>     Priority Queue(Heap) 
// //                             
// // //   Time Complexity   = O(nlog(k))   
// //                              
// // //   Space Complexity  = O(k)   
// //                               


// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         int i=0, j=0 ;
//         priority_queue<pair<int,int>> pq ;
//         vector<int> ans ;
//         while(j<n)
//         {
//             pq.push({nums[j] , j}) ; 
//             if(j-i+1 ==k)
//             {
//                 while(pq.size() && pq.top().second<i ) pq.pop() ;
//                 ans.push_back(pq.top().first) ;
//                 i++ ;
//             }
//             j++ ;
//         }
//         return ans ;
//     }
// };










// //                           
// //                           
// // //  3rd Method    ======>    Dequeue
// // //  3rd Method    ======>    Dequeue
// // //  3rd Method    ======>    Dequeue
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(k)   
// //                               




// // //   3rd  Method   ====>  Dequeue ( using value )    1st way   =====>                                 
// // //   3rd  Method   ====>  Dequeue ( using value )    1st way   =====>                                 
// // //   3rd  Method   ====>  Dequeue ( using value )    1st way   =====>                                 




// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         vector <int> ans ; 
//         deque<int> q;
//         int i =0;
//         for(int j=0; j<n; j++)
//         {
//             while(!q.empty() && q.back()<nums[j])   q.pop_back() ;
//             q.push_back(nums[j]) ;
//             if(j-i+1==k)
//             {
//                 ans.push_back(q.front()) ;
//                 if(nums[i]==q.front())  q.pop_front() ;
//                 i++;
//             }
//         }
//         return ans  ;
//     }
// };









// // //   3rd  Method   ====>  Dequeue ( using index )   2nd  way   =====>                                 
// // //   3rd  Method   ====>  Dequeue ( using index )   2nd  way   =====>                                 
// // //   3rd  Method   ====>  Dequeue ( using index )   2nd  way   =====>                                 



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        vector <int> ans ; 
        deque<int> q;
        int i =0;
        for(int j=0; j<n; j++)
        {
            while(!q.empty() && nums[q.back()]<nums[j])   q.pop_back() ;
            q.push_back(j) ;
            if(j-i+1==k)
            {
                ans.push_back(nums[q.front()]) ;
                if(nums[i]==nums[q.front()])  q.pop_front() ;
                i++;
            }
        }
        return ans  ;
    }
};















