








// class Solution {
// public:
//     int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        
//     }
// };






















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// //      // //  n is no of courses and m is size of relation array               
// //                     
// // //  1st Method  ====> Only DFS ( TLE TLE TLE )    TC = O((n^2)+m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====> DFS + DP Memoization     TC = O(n+m) , SC = O(n+m) 
// //                     
// //                     
// // //  3rd Method  ====> (Try to solve)  Topological Sort    TC = O(n+m) , SC = O(n+m) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Only DFS ( TLE TLE TLE )
// // //  1st Method    ======>   Only DFS ( TLE TLE TLE )
// // //  1st Method    ======>   Only DFS ( TLE TLE TLE )
// //                             
// //      // //  n is no of courses and m is size of relation array               
// //                             
// // //   Time Complexity   = O((n^2)+m)  
// //                              
// // //   Space Complexity  = O(n+m) 
// //                               


// class Solution {
// public:
//     int dfs( int i , vector<vector<int>> &allCourses , vector<int>& time)
//     {
//         if( allCourses[i].size() == 0 ) return 0  ; 
//         int ans  = 0 ;
//         for( auto course : allCourses[i] )
//         {
//             // //  courseTime is the time to complete the ith course completely
//             int courseTime = time[course-1] + dfs( course , allCourses , time) ; 
//             ans = max( ans , courseTime  ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) 
//     {
//         int m = relations.size() ; 
//         vector<vector<int>>allCourses ( n+5 ) ;     
//         for(int i=0; i<m; i++)
//         {
//             int prevCourse = relations[i][0] ; 
//             int nextCourse = relations[i][1] ; 
//             allCourses[nextCourse].push_back(prevCourse) ;
//         }
//         int ans = 0 ;
//         for(int i=1; i<=n; i++)
//         {
//             // //  courseTime is the time to complete the ith course completely
//             int courseTime = time[i-1] + dfs( i , allCourses , time ) ; 
//             ans = max( ans , courseTime ) ;  
//         }
//         return ans ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>   DFS + DP Memoization  
// // //  2nd Method    ======>   DFS + DP Memoization  
// // //  2nd Method    ======>   DFS + DP Memoization  
// //                             
// //      // //  n is no of courses and m is size of relation array               
// //                             
// // //   Time Complexity   = O(n+m)  
// //                              
// // //   Space Complexity  = O(n+m) 
// //                               


class Solution {
public:
    int dp[100000] ;
    int dfs( int i , vector<vector<int>> &allCourses , vector<int>& time)
    {
        if( allCourses[i].size() == 0 ) return 0  ; 
        if( dp[i] != -1  ) return dp[i] ;
        int ans  = 0 ;
        for( auto course : allCourses[i] )
        {
            // //  courseTime is the time to complete the ith course completely
            int courseTime = time[course-1] + dfs( course , allCourses , time) ; 
            ans = max( ans , courseTime  ) ;
        }
        return dp[i] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) 
    {
        memset( dp , -1 , sizeof(dp)) ; 
        int m = relations.size() ; 
        vector<vector<int>>allCourses ( n+5 ) ;     
        for(int i=0; i<m; i++)
        {
            int prevCourse = relations[i][0] ; 
            int nextCourse = relations[i][1] ; 
            allCourses[nextCourse].push_back(prevCourse) ;
        }
        int ans = 0 ;
        for(int i=1; i<=n; i++)
        {
            // //  courseTime is the time to complete the ith course completely
            int courseTime = time[i-1] + dfs( i , allCourses , time ) ; 
            ans = max( ans , courseTime ) ;  
        }
        return ans ;
    }
};















// //                           
// //                           
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// //                             
// //      // //  n is no of courses and m is size of relation array               
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               












































