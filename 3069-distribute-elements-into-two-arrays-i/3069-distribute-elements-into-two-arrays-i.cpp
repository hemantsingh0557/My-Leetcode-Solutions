













// //  LeetCode  Weekly Contest 387 


// //  1st Question ==> Solve during contest  


// //  Today's   Date   -    3rd   March   2024    -   Sunday    .    










// class Solution {
// public:
//     vector<int> resultArray(vector<int>& nums) 
//     {
        
//     }
// };










class Solution {
public:
    vector<int> resultArray(vector<int>& nums) 
    {
        int n = nums.size() ;  
        vector<int> arr1 , arr2 ; 
        arr1.push_back( nums[0] ) ; 
        arr2.push_back( nums[1] ) ;
        for(int i=2; i<n; i++)
        {
            if( arr1.back() > arr2.back() ) arr1.push_back( nums[i] ) ; 
            else arr2.push_back( nums[i] ) ; 
        }
        vector<int> ans = arr1 ; 
        for(int i=0; i<arr2.size(); i++) ans.push_back( arr2[i] ) ; 
        return ans  ;
    }
};

































