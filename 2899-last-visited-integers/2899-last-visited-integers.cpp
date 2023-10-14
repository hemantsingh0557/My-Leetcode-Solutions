













// class Solution {
// public:
//     vector<int> lastVisitedIntegers(vector<string>& words) 
//     {
//         
//     }
// };


















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration   
// // //  1st Method    ======>   Simple Iteration   
// // //  1st Method    ======>   Simple Iteration   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) 
    {
        int n = words.size() ;
        vector<int> nums ;
        vector<int> ans ;
        int ct = 0 ;
        for(int i=0; i<n; i++)
        {
            if( words[i] == "prev" ) 
            {
                ct ++ ;
                int m = nums.size() ;
                if( m-ct >=0 ) ans.push_back( nums[m-ct] ) ;
                else  ans.push_back( -1 ) ;
            }
            else
            {
                ct = 0;
                nums.push_back( stoi(words[i]) ) ;
            }
        }
        return ans ;
    }
};



































