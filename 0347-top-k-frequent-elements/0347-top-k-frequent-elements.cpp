





// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  map and vector   TC = O(nlog(n))  , SC = O(3n) = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Priority Queue    TC = O(nlog(n))  , SC = O(3n) = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    map and vector 
// // //  1st Method    ======>    map and vector 
// // //  1st Method    ======>    map and vector 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(3n) = O(n)   
// //                               



// class Solution {
// public:
//     static bool cmp(pair<int,int> a , pair<int , int>b)
//     {
//         return a.second> b.second ;
//     }
//     vector<int> topKFrequent(vector<int>& nums, int k) 
//     {
//         int n = nums.size() ;
//         map<int,int> mp;
//         for(int i=0; i<n; i++) mp[nums[i]]++  ;
//         vector<pair<int,int>> vp(mp.begin() , mp.end());
//         sort(vp.begin() , vp.end() , cmp) ;
//         vector<int> ans ;
//         for(int i=0; i<k; i++) ans.push_back(vp[i].first) ;
//         return ans ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>  Priority Queue
// // //  2nd Method    ======>  Priority Queue
// // //  2nd Method    ======>  Priority Queue
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(3n) = O(n)
// //                               


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        map<int,int> mp;
        for(int i=0; i<n; i++) mp[nums[i]]++  ;
        priority_queue<pair<int,int>> pq;
        for(auto it :mp) pq.push({it.second , it.first}) ; 
        vector<int> ans ;
        while(k--) ans.push_back(pq.top().second) , pq.pop() ;
        return ans ;
    }
};











// //                           
// //                           
// // //  3rd  Method    ======>  
// // //  3rd  Method    ======>  
// // //  3rd  Method    ======>  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()
// //                               


// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) 
//     {
        
//     }
// };












