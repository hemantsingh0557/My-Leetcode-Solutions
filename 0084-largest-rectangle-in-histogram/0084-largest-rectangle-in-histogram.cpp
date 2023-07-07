





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// //  1st Method ==> For loops BruteForce (TLE TLE TLE)   TC = O(n^2) , SC = O(1) constant
// //                      
// //                      
// //  2nd Method  ====> Using two stack    TC = O(4*n) , SC = O(4*n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======> for loops  BruteForce (TLE TLE TLE)
// // //  1st Method    ======> for loops  BruteForce (TLE TLE TLE)
// // //  1st Method    ======> for loops  BruteForce (TLE TLE TLE)
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) 
//     {
//         int n = heights.size() ;
//         int ans = -1 ;
//         for(int i=0; i<n; i++)
//         {
//             int area =0 , ct = 1 ;
//             for(int j=i-1; j>=0; j--)
//             {
//                 if(heights[i]<= heights[j]) ct++ ;
//                 else break ;
//             }
//             for(int j=i+1; j<n; j++)
//             {
//                 if(heights[i]<= heights[j]) ct++ ;
//                 else break ;
//             }
//             ans = max(ans , ct*heights[i]) ;
//         }
//         return ans; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Using two stack
// // //  2nd Method    ======>   Using two stack
// // //  2nd Method    ======>   Using two stack
// //                             
// // //   Time Complexity   = O(4*n)  = O(n)  
// //                              
// // //   Space Complexity  = O(4*n)  = O(n)
// //                               




class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n = heights.size() ;
        vector<int> leftsmall(n,0);
        stack<int> st1 ;
        for(int i=0; i<n; i++)
        {
            while(st1.size() && heights[st1.top()]>=heights[i])  st1.pop() ;
            if(st1.size()==0) leftsmall[i] = 0 ;
            else leftsmall[i] = st1.top()+1 ;
            st1.push(i) ;
        }
        vector<int> rightsmall(n,0);
        stack<int> st2 ;
        for(int i=n-1; i>=0; i--)
        {
            while(st2.size() && heights[st2.top()]>=heights[i])  st2.pop() ;
            if(st2.size()==0) rightsmall[i] = n-1 ;
            else rightsmall[i] = st2.top()-1 ;
            st2.push(i) ;
        }
        int ans = -1 ;
        for(int i=0; i<n; i++)
        {
            int area = (rightsmall[i]-leftsmall[i]+1)*heights[i] ;
            ans = max(ans , area) ;
        }
        return ans; 
    }
};


























