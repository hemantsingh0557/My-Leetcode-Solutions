















// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Store positive and negative    TC = O(2*n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Two pointer    TC = O(2*n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try optimized(one pass) (using queue)  TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Store positive and negative 
// // //  1st Method    ======>  Store positive and negative 
// // //  1st Method    ======>  Store positive and negative 
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         vector<int> pos , neg  ; 
//         for(int i=0; i<n; i++)
//         {
//             if( nums[i] > 0 ) pos.push_back( nums[i] ) ; 
//             else  neg.push_back( nums[i] ) ; 
//         }
//         vector<int> ans ; 
//         for(int i=0; i<n/2; i++)
//         {
//             ans.push_back(pos[i]) ;  
//             ans.push_back(neg[i]) ;  
//         }
//         return ans ; 
//     }
// };






// //                           
// //                           
// // //  2nd Method    ======>  Two pointer   
// // //  2nd Method    ======>  Two pointer   
// // //  2nd Method    ======>  Two pointer   
// //                             
// // //   Time Complexity   = O(2*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n = nums.size() ; 
        vector<int> ans ; 
        int i = 0 , j = 0  ;
        while(i<n || j<n )
        {
            // cout<<i<<" ok "<<j<<endl;
            while( i < n && nums[i] < 0 ) i++ ;   
            if( i < n ) ans.push_back( nums[i] ) ;  
            while( j < n && nums[j] > 0 ) j++ ;   
            if( j < n ) ans.push_back( nums[j] ) ;  
            i++ ,  j++ ;  
            // cout<<i<<" no "<<j<<endl;
        }
        return ans ; 
    }
};








// //                           
// //                           
// // //  3rd Method    ======>    Try optimized(one pass) (using queue)
// // //  3rd Method    ======>    Try optimized(one pass) (using queue)
// // //  3rd Method    ======>    Try optimized(one pass) (using queue)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

























































