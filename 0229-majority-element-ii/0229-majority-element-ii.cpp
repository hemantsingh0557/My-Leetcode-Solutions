









// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//     }
// };









// //
// // // // // // //  Solve Using  Three  Method  ===>     
// // // // // // //  Solve Using  Three  Method  ===>                        
// //                     
// //                     
// // // 1st Method  ====> Sort() function   TC = O( nlog(n) + (2n/3) ) , SC = O(1) constant
// //                      
// //                      
// // // 2nd Method  ====> Using  map    TC = O( nlog(n) + n ) , SC = O(n) 
// //                     
// //                     
// // // 3rd Method ==> Boyer–Moore majority vote algorithm   TC = O(n), SC = O(1) constant 
// //                     
// //     // ///  BEST METHOD        // ///  BEST METHOD        // ///  BEST METHOD    
// //     // ///  BEST METHOD        // ///  BEST METHOD        // ///  BEST METHOD    
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //
// // // // // // //        1st Method          ======>       sort()     function   
// // // // // // //        1st Method          ======>       sort()     function   
// // // // // // //        1st Method          ======>       sort()     function   
// //
// //

// // // //    1st Method    ======>   1st  way      ======>    sort()  function   
// // // //    1st Method    ======>   1st  way      ======>    sort()  function   
// //
// //
// //  Time Complexity == O( nlog(n) + (2n/3) )  
// //
// // 
// //   Space Complexity == O(2)     constant       (use vector )   (use vector )
// //
// //



// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin() , nums.end() ) ;
//         vector<int> maj ;
//         int maj1 = 0 , maj2 = 0 ;
//         for(int i =0 ; i<= (2*n)/3  ; i++)
//         {
//             if(maj.size()>0  &&  nums[i] == maj[maj.size()-1] )  continue;
//             if(nums[i]== nums[i+ n/3]) 
//             {
//                 maj.push_back(nums[i]) ;
//             }
//         }
//         return maj ;
//     }
// };




// // // //    1st Method    ======>   2nd  way      ======>    sort()  function   
// // // //    1st Method    ======>   2nd  way      ======>    sort()  function   
// // // //    1st Method    ======>   2nd  way      ======>    sort()  function   
// //
// //
// //  Time Complexity == O( nlog(n) + (2n/3) )  
// //
// // 
// //   Space Complexity == O(1)      constant      (use two variable )  (use two variable )
// //
// //



// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         sort(nums.begin() , nums.end() ) ;
//         int m = 1000000007 ;
//         int maj1 = m , maj2 = m ;
//         for(int i =0 ; i<= (2*n)/3  ; i++)
//         {
//             if(nums[i] == maj1)  continue;
//             if(nums[i] == maj2)  break;
//             if(nums[i]== nums[i+ n/3]) 
//             {
//                 if(maj1 ==m ) maj1 = nums[i] ; 
//                 else if(maj2 ==m ) maj2 = nums[i] ; 
//             }
//         }
//         if(maj1 !=m  &&  maj2 != m  )  return {maj1 , maj2 } ;
//         else if(maj1 !=m  &&  maj2 == m  )  return {maj1 } ;
//         else if(maj1 ==m  &&  maj2 != m  )  return {maj2} ;
//         return {} ;
//     }
// };















// //
// //
// // // // // // //        2nd Method          ======>    map     
// // // // // // //        2nd Method          ======>    map     
// // // // // // //        2nd Method          ======>    map     
// // // // // // //        2nd Method          ======>    map     
// //
// //
// //
// //
// //  Time Complexity == O( nlog(n) + n )  
// //
// // 
// //  Space Complexity == O(n+ 2)     constant       (use map + vector )   (use map + vector )   
// //
// //


// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         map<int , int> mp;   
//         vector<int> ans ;     
//         for(int i =0 ; i<n ; i++)    mp[nums[i]] ++ ;
//         for(auto it : mp)   if( it.second >n/3 )   ans.push_back(it.first );
//         return ans ;
//     }
// };








// //
// //
// // // //    3rd Method  ====>   Boyer–Moore majority vote algorithm  
// // // //    3rd Method  ====>   Boyer–Moore majority vote algorithm  
// // // //    3rd Method  ====>   Boyer–Moore majority vote algorithm  
// // // //    3rd Method  ====>   Boyer–Moore majority vote algorithm  
// // 
// //
// //  Time Complexity == O( n )  
// //
// // 
// //  Space Complexity == O(2) constant (vector)   
// //


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size() ;
        int ct1 =0 , ct2=0 ,  num1 = 0  , num2 = 0 ;   
        for(int i =0 ; i<n ; i++)
        {
            if(ct1==0 && nums[i] != num2) ct1++ , num1 = nums[i] ;
            else if(ct2==0 && nums[i] != num1) ct2++ , num2 = nums[i] ;
            else if(nums[i] == num1) ct1++  ;
            else if(nums[i] == num2) ct2++  ;
            else   ct1--  ,  ct2--   ;
        }
        ct1 = 0 ,  ct2 = 0  ;
        vector<int> ans ;
        for(int i =0 ; i<n ; i++)
        {
            if(nums[i] == num1) ct1++ ;
            else if(nums[i] == num2) ct2++ ;
        }
        if(ct1>n/3) ans.push_back(num1) ;
        if(ct2>n/3) ans.push_back(num2) ;
        return ans ;
    }
};









































