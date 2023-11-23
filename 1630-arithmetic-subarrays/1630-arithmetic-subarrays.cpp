














// class Solution {
// public:
//     vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
//     }
// };













// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple sort and check    TC = O(n*m(log(n))) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Simple sort and check 
// // //  1st Method    ======>     Simple sort and check 
// // //  1st Method    ======>     Simple sort and check 
// //                             
// // //   Time Complexity   = O(n*m*log(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    bool checkArithmetic(vector<int> & temp)
    {
        sort(temp.begin(), temp.end());
        int diff = temp[1] - temp[0];
        for (int i = 2; i < temp.size(); i++) 
        {
            if (temp[i] - temp[i - 1] != diff) 
            {
                return false;
            }
        }
        return true ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        int m = l.size() ; 
        vector<bool> ans ;  
        for(int i=0; i<m; i++ )
        {
            vector<int> temp ;
            for( int j = l[i] ; j<=r[i] ; j++)  temp.push_back(nums[j]) ;
            bool check =  checkArithmetic(temp) ;  
            ans.push_back(check) ;
        }
        return ans ; 
    }
};
















































































