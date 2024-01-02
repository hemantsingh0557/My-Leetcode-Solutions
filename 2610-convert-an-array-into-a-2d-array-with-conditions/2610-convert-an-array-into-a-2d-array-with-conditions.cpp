


















// class Solution {
// public:
//     vector<vector<int>> findMatrix(vector<int>& nums) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using map and iteration    TC = O(n) , SC = O(n)
// //                      
// //                      
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using map and iteration
// // //  1st Method    ======>    Using map and iteration
// // //  1st Method    ======>    Using map and iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        int n = nums.size() ; 
        vector<vector<int>> ans   ; 
        unordered_map<int,int> mp ; 
        for(int i=0 ; i<n; i++)  mp[nums[i]]++ ; 
        while(true)
        {
            vector<int> temp ; 
            for(auto it : mp )
            {
                if( it.second != 0 ) temp.push_back(it.first) , mp[it.first]-- ; 
            }
            if( temp.size() == 0 ) return ans ; 
            ans.push_back(temp) ; 
        }
        return {}  ; 
    }
};





































