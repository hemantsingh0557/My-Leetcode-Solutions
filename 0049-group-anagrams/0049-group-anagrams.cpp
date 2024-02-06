














// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
//     }
// };









// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                 
// //    
// // //       n is length of strs and m is length of each string                 
// // //  1st Method  ====> Simple Using Hashing and sort()    TC = O(n*m*log(m)) , SC = O(n*m) (Probably)
// //                      
// //                      
// // //  2nd Method  ====> Try Other Methods also even Optimized also    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Try Other Methods also even Optimized also    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Using Hashing and sort()  
// // //  1st Method    ======>   Simple Using Hashing and sort()  
// // //  1st Method    ======>   Simple Using Hashing and sort()  
// //                             
// // //       n is length of strs and m is length of each string      
// //           
// // //   Time Complexity   = O(n*m*log(m))  
// //                              
// // //   Space Complexity  = O(n*m) (Probably)  
// //                               

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n = strs.size() ; 
        map< string , vector<string> > mp ;
        for(int i=0; i<n; i++)
        {
            string temp = strs[i] ;
            sort(temp.begin() , temp.end() ) ; 
            mp[temp].push_back( strs[i] ) ;
        }
        vector<vector<string>> ans ; 
        for(auto it : mp ) ans.push_back(it.second) ;
        return ans ; 
    }
};













// //                           
// //                           
// // //  2nd Method    ======>  Try Other Methods also even Optimized also   
// // //  2nd Method    ======>  Try Other Methods also even Optimized also   
// // //  2nd Method    ======>  Try Other Methods also even Optimized also   
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>   Try Other Methods also even Optimized also   
// // //  3rd Method    ======>   Try Other Methods also even Optimized also   
// // //  3rd Method    ======>   Try Other Methods also even Optimized also   
// //                              
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               



























































