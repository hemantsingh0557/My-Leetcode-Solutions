







// //  LeetCode  Weekly Contest  391 


// //  4th  Question  ===> Not Able to solve in contest


// //  Today's  Date   -    31st March 2024  -  Sunday    .    













// class Solution {
// public:
//     int minimumDistance(vector<vector<int>>& points) 
//     {
//         
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Multiset    TC = O(n*log(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using map    TC = O(n*log(n)) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Try any other     TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //  Explanation  ==>
//
//
// let say two point are (x1 , y1)  and (x2 , y2)
//
//  so Manhattan Distance is  |x1 - x2|  +  |y1 - y2|
//  which has 4 cases
//
//  1. =>    x1 > x2 && y1 > y2  then (x1 - x2)  +  (y1 - y2) ==  (x1 + y1) - (x2 + y2)
//  2. =>    x1 > x2 && y1 < y2  then (x1 - x2)  +  (y2 - y1) ==  (x1 - y1) - (x2 - y2)
//  3. =>    x1 < x2 && y1 > y2  then (x2 - x1)  +  (y1 - y2) ==  (x2 - y2) - (x1 - y1)
//  4. =>    x1 < x2 && y1 < y2  then (x2 - x1)  +  (y2 - y1) ==  (x2 + y2) - (x1 + y1)
//
//  so in above cases =>  case 1 and case 4 are same and case 2 and case 3 are same
//
//
// so above we can clearly see   that Manhattan Distance distance is either the 
// difference of sum of their coordinates (case 1 and case 4) 
// OR
// difference of difference of their coordinates  (case 2 and case 3 )
//
//  so to find the maximum distace between any two points either we need to find the 
//  1. =>  difference in  maximum sum and minimum sum of their coordinates  
//        means for case 1 we need max(x1 + y1) and min(x2 + y2)
//        means for case 1 we need max(x2 + y2) and min(x1 + y1)
//
//   so we just find maximum sum and minimum sum of their coordinates for case 1 and case 4 
//
// 
//  OR
//
//  2. =>  difference in  maximum diff and minimum diff of their coordinates    
//        means for case 2 we need max(x1 - y1) and min(x2 - y2)
//        means for case 3 we need max(x2 - y2) and min(x1 - y1)
//  
// so we just find maximum difference and minimum difference of their coordinates for case2 and case3 
//
//
//
//
//
//
//
//  now to do it we just store the sum of their coordinates and also difference of their coordinates
//  now see below  for this either we use multiset or   just map
//  but it case of map when count is 1 means we need to erase it ( not when the count is zero)
//  we need to erase when count is 1 (not in zero) in map
//











// //                           
// //                           
// // //  1st Method    ======>    Using Multiset  
// // //  1st Method    ======>    Using Multiset  
// // //  1st Method    ======>    Using Multiset  
// //                             
// // //   Time Complexity   =  O(n*log(n))  
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int minimumDistance(vector<vector<int>>& points) 
//     {
//         int n = points.size() ;
//         int ans = INT_MAX ;  
//         multiset< int > sumPoints , diffPoints ;
//         for(int i=0; i<n; i++)
//         {
//             sumPoints.insert( points[i][0] + points[i][1] ) ; 
//             diffPoints.insert( points[i][0] - points[i][1] ) ; 
//         }
//         for(int i=0; i<n; i++)
//         {
//             int sum =  points[i][0] + points[i][1]   ; 
//             int diff =  points[i][0] - points[i][1]   ; 
//             sumPoints.erase( sumPoints.lower_bound(sum) ) ;
//             diffPoints.erase( diffPoints.lower_bound(diff) ) ;
//             int mxdist1 = *sumPoints.rbegin() - *sumPoints.begin() ; 
//             int mxdist2 = *diffPoints.rbegin() - *diffPoints.begin() ; 
//             ans = min( ans , max( mxdist1 , mxdist2 ) ) ;
//             sumPoints.insert( sum ) ; 
//             diffPoints.insert( diff ) ; 
//         }
//         return ans  ;
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   Using map  
// // //  2nd Method    ======>   Using map  
// // //  2nd Method    ======>   Using map  
// //                             
// // //   Time Complexity   =  O(n*log(n)) 
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) 
    {
        int n = points.size() ;
        int ans = INT_MAX ;  
        map< int , int > sumPoints , diffPoints ;
        for(int i=0; i<n; i++)
        {
            sumPoints[points[i][0] + points[i][1]] ++ ; 
            diffPoints[points[i][0] - points[i][1]] ++ ; 
        }
        for(int i=0; i<n; i++)
        {
            int sum =  points[i][0] + points[i][1]   ; 
            int diff =  points[i][0] - points[i][1]   ; 
            //
            //
            //
            // // //  remember when erase when it is 1 then erase it otherwise decrement count
            if( sumPoints[sum] > 1 )  sumPoints[sum] -- ; 
            else sumPoints.erase( sum ) ;
            //
            // // //  remember when erase when it is 1 then erase it otherwise decrement count
            if( diffPoints[diff] > 1 )  diffPoints[diff] -- ; 
            else diffPoints.erase( diff ) ;
            //
            //
            //
            int mxdist1 = sumPoints.rbegin()->first - sumPoints.begin()->first ; 
            int mxdist2 = diffPoints.rbegin()->first - diffPoints.begin()->first ; 
            ans = min( ans , max( mxdist1 , mxdist2 ) ) ;
            sumPoints[ sum ] ++ ; 
            diffPoints[ diff ] ++ ; 
        }
        return ans  ;
    }
};










// //                           
// //                           
// // //  3rd Method    ======>   Try any other  
// // //  3rd Method    ======>   Try any other  
// // //  3rd Method    ======>   Try any other  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





















































