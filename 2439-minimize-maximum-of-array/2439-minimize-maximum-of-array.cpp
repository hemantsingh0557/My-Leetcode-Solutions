




// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    
// // // //  take some help from solution tab  ======>                    



 
 
// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Binary Search     TC =  O(n*log(mx))  , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Math   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int minimizeArrayValue(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Binary Search  
// // //  1st Method    ======>    Binary Search  
// // //  1st Method    ======>    Binary Search  
// //                             
// // //   Time Complexity   = O( (log(mx)) * n )  or  O(n*log(mx)) 
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     bool valid(int mid , vector<int>& nums)
//     {
//         int n = nums.size() ;
//         long long sum = 0  ;
//         for(int i=0; i<n; i++)
//         {
//             sum += nums[i] ;
//             if(sum > (i+1) *1LL* mid) return false ;
//         }
//         return true;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimizeArrayValue(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         int mx = *max_element(nums.begin(), nums.end()) ;  
//         int lo = 0 , hi = mx ;
//         while(hi-lo>1)
//         {
//             int mid = (hi+lo)/2  ; 
//             if(!valid(mid, nums)) lo = mid +1 ; 
//             else hi = mid ;  
//         }
//         if(valid(lo, nums)) return lo ; 
//         return  hi ;
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Math 
// // //  2nd Method    ======>   Math 
// // //  2nd Method    ======>   Math 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) 
    {
        int n = nums.size() ; 
        long long ans = 0 , sum = 0 ;
        for(int i=0; i<n; i++)
        {
            sum += nums[i] ;
            ans = max(ans , (sum+i)/(i+1) ) ;    // ceil of a/n  ==  (a+n-1)/n
            // here sum/(i+1) == (sum + i+1 -1)/(i+1) == (sum+i)/(i+1) 
        }
        return ans ;
    }
};






























