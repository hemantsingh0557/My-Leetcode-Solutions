









// //  LeetCode  Biweekly Contest  128  (  Able To Solve Two Question )


// //  2nd  Question  ===> Able to solve in contest


// //  Today's  Date   -    13th April 2024  -  Saturday    .    














// class Solution {
// public:
//     int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) 
//     {
//     }
// };















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using sort()     TC = O(n*log(n)) , SC = O(log(n)) 
// //                                          
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using sort() 
// // //  1st Method    ======>    Using sort() 
// // //  1st Method    ======>    Using sort() 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) 
    {
        int n = points.size() ; 
        sort(points.begin() , points.end() ) ;
        int ans = 1 ;
        int prev = points[0][0] ; 
        for(int i=1; i<n; i++)
        {
            if( points[i][0] > prev+w  ) prev = points[i][0] , ans++ ;
        }
        return ans  ;
    }
};















































