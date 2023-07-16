





// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Find dominant then Iterate again   TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int minimumIndex(vector<int>& nums)  {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Find dominant then Iterate again  
// // //  1st Method    ======>    Find dominant then Iterate again  
// // //  1st Method    ======>    Find dominant then Iterate again  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    int minimumIndex(vector<int>& nums) 
    {
        int n = nums.size() ;
        int freq = -1;
        int dom = -1 ;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) 
        {
            mp[nums[i]]++ ;
            if(freq<mp[nums[i]]) 
            {
                freq = mp[nums[i]] ;
                dom = nums[i] ;
            }
        }
        int ct = 0 ;
        int ans = INT_MAX ;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==dom) ct++; 
            if(ct*2>i+1  && (freq-ct)*2 > n-i-1) ans = min(ans , i) ;
        }
        if(ans==INT_MAX) return -1 ;
        return ans ;
    }
};












































