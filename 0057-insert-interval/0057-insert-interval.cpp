









// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Linera Search    TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Try other method    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try other method    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple Linera Search 
// // //  1st Method    ======>  Simple Linera Search 
// // //  1st Method    ======>  Simple Linera Search 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        int n = intervals.size() ; 
        vector<vector<int>> ans  ; 
        int i=0 ; 
        while( i < n && intervals[i][1] < newInterval[0]  )
        {
            ans.push_back(intervals[i])  ;
            i++  ;
        }
        while( i < n && intervals[i][0] <= newInterval[1]  )
        {
            newInterval[0] = min( newInterval[0] , intervals[i][0] )  ;  
            newInterval[1] = max( newInterval[1] , intervals[i][1] )  ; 
            i++  ;
        }
        ans.push_back(newInterval) ; 
        while( i < n  )
        {
            ans.push_back(intervals[i])  ;
            i++  ;
        }
        return ans  ;
    }
};










// //                           
// //                           
// // //  2nd Method    ======>   Try other method 
// // //  2nd Method    ======>   Try other method 
// // //  2nd Method    ======>   Try other method 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>   Try other method 
// // //  3rd Method    ======>   Try other method 
// // //  3rd Method    ======>   Try other method 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               






























































