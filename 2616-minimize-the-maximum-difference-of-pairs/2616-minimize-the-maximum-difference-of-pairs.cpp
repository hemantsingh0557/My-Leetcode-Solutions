







// class Solution {
// public:
//     int minimizeMax(vector<int>& nums, int p) {
        
//     }
// };























// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Binary Search   TC = O(n*log(n)) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Binary Search   
// // //  1st Method    ======>   Binary Search   
// // //  1st Method    ======>   Binary Search   
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               






class Solution {
public:
    int n ;
    int findPair(int mid , vector<int>& nums )
    {
        int ct = 0 ; 
        for(int i=0; i<n-1; i++)
        {
            if(nums[i+1]-nums[i]<=mid) ct++ , i++ ;
        }
        return ct ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimizeMax(vector<int>& nums, int p) 
    {
        n = nums.size() ;   
        sort(nums.begin(), nums.end()) ;
        int lo = 0 , hi = nums[n-1]-nums[0] ;
        while(hi-lo>1)
        {
            int mid = (lo+hi)/2 ;  
            if(findPair(mid , nums) >= p ) hi = mid ;
            else lo = mid+1 ; 
        }
        if(findPair(lo , nums) >= p ) return lo ;
        return hi ;
    }
};


















































































