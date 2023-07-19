




// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method (Two Ways) ====>  Simple Greedy   TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Greedy   
// // //  1st Method    ======>   Simple Greedy   
// // //  1st Method    ======>   Simple Greedy   
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 



// class Solution {
// public:
//     static bool cmp(vector<int>&a , vector<int>&b)
//     {
//         return a[1]<b[1] ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) 
//     {
//         int n = intervals.size() ; 
//         sort(intervals.begin() , intervals.end() , cmp ) ; 
//         int ans = 0 , preEnd = intervals[0][1] , curStart  ; 
//         for(int i=1; i<n; i++)
//         {
//             curStart = intervals[i][0] ; 
//             if(preEnd<=curStart)   preEnd = intervals[i][1] ; 
//             else ans++ ;
//         }
//         return ans ;
//     }
// };








// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 



class Solution {
public:
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int n = intervals.size() ; 
        sort(intervals.begin() , intervals.end() ) ; 
        int ans = 0 , preEnd = intervals[0][1] , curStart  ; 
        for(int i=1; i<n; i++)
        {
            curStart = intervals[i][0] ; 
            if(preEnd<=curStart)   preEnd = intervals[i][1] ; 
            else preEnd = min(preEnd , intervals[i][1] ) , ans++ ;
        }
        return ans ;
    }
};







































