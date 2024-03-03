







// //  LeetCode  Weekly Contest 387 


// 4th Question ==> (logic was right) Somehow I thought all distict numbers in nums (not able to solve) 


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
        //
        vector<int> arr1Sorted , arr2Sorted ; 
        arr1Sorted.push_back( nums[0] ) ; 
        arr2Sorted.push_back( nums[1] ) ;
        //
        vector<int> arr1 , arr2 ;  
        arr1.push_back( nums[0] ) ; 
        arr2.push_back( nums[1] ) ;
        //
        //
        for(int i=2; i<n; i++)
        {
            auto it1 = upper_bound(arr1Sorted.begin(), arr1Sorted.end(), nums[i] ) ;
            auto it2 = upper_bound(arr2Sorted.begin(), arr2Sorted.end(), nums[i] ) ;
            int ct1 = arr1Sorted.end() - it1  ; 
            int ct2 = arr2Sorted.end() - it2  ; 
            //
            //
            // // // can do anything below in either two
            // if( ct1 > ct2 || ( ct1 == ct2 && arr1.size() <= arr2.size() ) )
            if( ct1 > ct2 || ( ct1 == ct2 && arr1Sorted.size() <= arr2Sorted.size() ) )
            {
                arr1.push_back(nums[i]) ; 
                arr1Sorted.insert(it1, nums[i]);
            }
            else arr2.push_back(nums[i]) , arr2Sorted.insert(it2, nums[i]);  
        }
        vector<int> ans = arr1  ; 
        for(auto it : arr2)  ans.push_back( it ) ; 
        return ans  ;
    }
};



















































