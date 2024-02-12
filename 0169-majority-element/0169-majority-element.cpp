

















// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two for loop (TLE TLE TLE)  TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using  map    TC = O( nlog(n) + n ) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Using  sort() function   TC = O(nlog(n)) , SC = O(1) constant 
// //                     
// //                     
// //  4th Method ==> Boyer–Moore majority vote algorithm   TC = O(n), SC = O(1) constant 
// //                     
// //     // ///  BEST METHOD        // ///  BEST METHOD        // ///  BEST METHOD    
// //     // ///  BEST METHOD        // ///  BEST METHOD        // ///  BEST METHOD    
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Two for loop (TLE TLE TLE) 
// // //  1st Method    ======>   Two for loop (TLE TLE TLE) 
// // //  1st Method    ======>   Two for loop (TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         for(int i=0; i<n; i++)
//         {
//             int ct = 0;
//             for(int j=0; j<n; j++)
//             {
//                 if(nums[i]==nums[j]) ct++;
//                 if(ct>n/2) return nums[i];
//             }
//         }
//         return 0 ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using  map   
// // //  2nd Method    ======>   Using  map   
// // //  2nd Method    ======>   Using  map   
// //                             
// // //   Time Complexity   =  O( nlog(n) + n )  
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         map<int, int> mp;
//         for(int i=0; i<n; i++)
//         {
//             mp[nums[i]] ++;
//         }
//         for(auto it : mp)
//         {
//             if(it.second> n/2) return it.first ;
//         }
//         return 0 ;
//     }
// };








// //                           
// //                           
// // //  3rd Method    ======>   Using  sort() function   
// // //  3rd Method    ======>   Using  sort() function   
// // //  3rd Method    ======>   Using  sort() function   
// //                             
// // //   Time Complexity   = O(nlog(n))  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) 
//     {
//         sort(nums.begin() , nums.end());
//         return nums[nums.size()/2];
//     }
// };












// //                           
// //                           
// // //  4th  Method    ======>  Boyer–Moore majority vote algorithm 
// // //  4th  Method    ======>  Boyer–Moore majority vote algorithm 
// // //  4th  Method    ======>  Boyer–Moore majority vote algorithm 
// //                             
// // //   Time Complexity   = O(n)  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size() ;
        int ct = 0 , element = 0 ;
        for(int i=0; i<n; i++)
        {
            if( ct == 0 ) element = nums[i] ;
            if( element == nums[i] )  ct++ ;
            else ct -- ;  
        }
        return element ;
    }
};



















































































































