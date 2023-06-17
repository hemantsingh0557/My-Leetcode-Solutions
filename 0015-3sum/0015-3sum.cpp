



// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Three Loops ( TLE TLE TLE )    TC = O(n^3) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using sort and set   TC = O(n*n) , SC = O(no of triples) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Three Loops ( TLE TLE TLE )   
// // //  1st Method    ======>    Three Loops ( TLE TLE TLE )   
// // //  1st Method    ======>    Three Loops ( TLE TLE TLE )   
// //                             
// // //   Time Complexity   = O(n^3)  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) 
//     {
//         int n = nums.size() ;
//         set<vector<int>> st ;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 for(int k=j+1; k<n; k++)
//                 {
//                     if(nums[i]+nums[j]+nums[k]==0) 
//                     {
//                         vector<int> temp = {nums[i], nums[j], nums[k]} ;
//                         sort(temp.begin(), temp.end()) ;
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> ans(st.begin(), st.end()) ;
//         return ans ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>    Using sort and set    
// // //  2nd Method    ======>    Using sort and set    
// // //  2nd Method    ======>    Using sort and set    
// //                             
// // //   Time Complexity   = O(n*n)    and     wortst case = O(n*nlog(n))          
// //                              
// // //   Space Complexity  = O(no of triples)  
// //                               



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()) ;
        int n = nums.size() ;
        set<vector<int>> st ;
        for(int i=0; i<n; i++)
        {
            int j=i+1 , k=n-1 ;
            while(j<k)
            {
                long long sum = nums[i] + nums[j] ;
                sum += nums[k] ;
                if(sum==0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]} ;
                    sort(temp.begin(), temp.end()) ;
                    st.insert(temp);
                    j++ , k-- ;
                    if(j<k && nums[j]==nums[j-1]) j++;
                    if(j<k && nums[k]==nums[k+1]) k-- ;
                }
                else if(sum<0) j++ ;
                else k-- ;
            }
        }
        vector<vector<int>> ans(st.begin(), st.end()) ;
        return ans ;
    }
};







































































