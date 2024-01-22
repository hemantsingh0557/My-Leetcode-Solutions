





















// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Using Hashing    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try space optimized method   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Using Hashing 
// // //  1st Method    ======>   Simple Using Hashing 
// // //  1st Method    ======>   Simple Using Hashing 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size() ; 
        unordered_map<int,int> freq ; 
        for(int i=0; i<n; i++)  freq[nums[i]] ++ ;
        vector<int> ans(2,0) ; 
        for(int i=1; i<=n; i++) 
        {
            if( freq[i] == 2 ) ans[0] = i ; 
            if( freq[i] == 0 ) ans[1] = i ; 
        }
        return ans ; 
    }
};




// //                           
// //                           
// // //  2nd Method    ======>   Try space optimized method   
// // //  2nd Method    ======>   Try space optimized method   
// // //  2nd Method    ======>   Try space optimized method   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               







































