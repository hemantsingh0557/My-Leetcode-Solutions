












// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Two unordered set or map  TC = O(n+m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====>(Try to solve) One Dictionary Method    TC = O(n+m) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Try any other method    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Two unordered set or map
// // //  1st Method    ======>    Using Two unordered set or map
// // //  1st Method    ======>    Using Two unordered set or map
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n+m)   
// //                               

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size() , m = nums2.size() ;  
        unordered_map<int,int> mp1 , mp2  ; 
        for(int i=0; i<n; i++ ) if( mp1[nums1[i]] == 0 ) mp1[nums1[i]]++ ;
        for(int i=0; i<m; i++ ) 
        {
            if( mp1[nums2[i]] && mp2[nums2[i]] == 0 ) mp2[nums2[i]]++ ;
        }
        vector<int> ans ; 
        for(auto it : mp2) ans.push_back(it.first) ; 
        return ans ; 
    }
};












// //                           
// //                           
// // //  2nd Method    ======>   (Try to solve) One Dictionary Method  
// // //  2nd Method    ======>   (Try to solve) One Dictionary Method  
// // //  2nd Method    ======>   (Try to solve) One Dictionary Method  
// //                             
// // //   Time Complexity   = O(n+m)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
//     {
//         int n = nums1.size() , m = nums2.size() ;  
        
//     }
// };








// //                           
// //                           
// // //  3rd Method    ======>   Try any other method 
// // //  3rd Method    ======>   Try any other method 
// // //  3rd Method    ======>   Try any other method 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


































