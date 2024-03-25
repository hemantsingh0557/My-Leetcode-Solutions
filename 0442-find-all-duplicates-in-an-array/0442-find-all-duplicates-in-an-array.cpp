














// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
        
//     }
// };



















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort() function    TC = O(n8log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Using map    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// // //  1st Method    ======>   Using sort() function 
// // //  1st Method    ======>   Using sort() function 
// // //  1st Method    ======>   Using sort() function 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         sort(nums.begin() , nums.end() ) ;
//         vector<int> ans  ;  
//         for(int i=1; i<n; i++) if( nums[i-1] == nums[i] ) ans.push_back(nums[i]) ;
//         return ans ; 
//     }
// };






// //                           
// // //  2nd Method    ======>    Using map  
// // //  2nd Method    ======>    Using map  
// // //  2nd Method    ======>    Using map  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         unordered_map<int,int> freq ; 
//         for(int i=0; i<n; i++) freq[nums[i]]++ ;
//         vector<int> ans  ;  
//         for(auto it : freq ) if( it.second == 2 ) ans.push_back(it.first) ;
//         return ans ; 
//     }
// };










// //                           
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size() ;
        // //
        // // as we know nums[i] < n so we will use nums[i] as index and as index have range 
        // // 0 to n-1 so we use nums[i] - 1 as index  to check whether elemnt
        // // at the index nums[i]-1  is visited or not    and 
        // // lets say nums = 3  so we mark the index 2 as visted and if nums[i] = 3 
        // // appears again then it measn we again get the inded 2 again it means
        // //  when we check at index it is aalready marks so we push nums[i] = 3 or index+1
        // // to our answer see the example below to understand it better
        // //     
        // //   
        // // lets take example 1 => nums = [4,3,2,7,8,2,3,1]
        // //
        // //  here when i =0 and nums[i] = 4 then  ind = 4-1 = 3  so nums[3] = 7 and 
        // //  we just mark nums[ind] = nums[3] = -7   or   nums[3] = - nums[3] here we just 
        // //  when nums[i] = 3 means ind = 2 means nums[2] = 2 so we change nums[2] = -nums[2]
        // //  when i = 2 and nums[i] = 2 means ind = 1 means nums[1] = 3 so  nums[1] = -nums[1]
        // //  when i = 3 and nums[i] = 7 means ind = 6 means nums[6] = 3 so  nums[6] = -nums[6]
        // //  when i = 4 and nums[i] = 8 means ind = 7 means nums[7] = 1 so  nums[7] = -nums[7]
        // //  when i = 5 and nums[i] = 2 means ind = 1 means nums[1] = -3 as nums[i] = 2 appears
        // //  before so we first take abs of nums[1] = -3 which is 3 and find ind = 3 - 1 = 2
        // //  then check nums[ind] = nums[2] < 0 so we just add to the answer which 
        // //  is ind+1 or nums[i] 
        // //
        // //  now  complete this exaplanation and understand the solution 100%
        // //
        // //
        vector<int> ans  ;  
        for(int i=0; i<n; i++) 
        {
            int ind = abs(nums[i]) - 1 ; 
            if( nums[ind] < 0 ) ans.push_back(ind+1) ; 
            else nums[ind] = - nums[ind]  ;
        }
        return ans ; 
    }
};




































































