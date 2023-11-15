
















// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using sort function   TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using sort function   TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>  Using unordered_map   TC = O(n) , SC = O(n)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using sort function 
// // //  1st Method    ======>  Using sort function 
// // //  1st Method    ======>  Using sort function 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
//     {
//         int n = arr.size() ;  
//         sort( arr.begin()  , arr.end() ) ; 
//         arr[0] = 1 ; 
//         for(int i=1; i<n; i++)
//         {
//             if( abs(arr[i]-arr[i-1]) > 1 ) arr[i] = arr[i-1] + 1 ; 
//         }
//         return arr[n-1] ;  
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Using sort function 
// // //  2nd Method    ======>   Using sort function 
// // //  2nd Method    ======>   Using sort function 
// //                             
// // //   Time Complexity   = O(n*loh(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
//     {
//         int n = arr.size() ;  
//         sort( arr.begin()  , arr.end() ) ; 
//         int ans = 1 ;
//         for(int i=1; i<n; i++)
//         {
//             if( abs(arr[i] - ans ) >= 1 ) ans++ ; 
//             // if( arr[i] >= ans+1 ) ans++ ; 
//         }
//         return ans ;  
//     }
// };













// //                           
// //                           
// // //  3rd Method    ======>   Using unordered_map
// // //  3rd Method    ======>   Using unordered_map
// // //  3rd Method    ======>   Using unordered_map
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
    {
        int n = arr.size() ;  
        unordered_map<int , int> mp ;
        for(int i=0; i<n; i++) mp[arr[i]] ++  ;
        int ans = 1 ;
        mp[ans] -- ; 
        for(int i=1; i<n; i++)
        {
            if( mp[ans] > 0 ) mp[ans]-- ;
            else if( mp[ans+1] > 0 ) mp[ans+1]-- , ans++ ;
            else mp[arr[i]]-- ,  ans++ ;
        }
        return ans ;  
    }
};



















