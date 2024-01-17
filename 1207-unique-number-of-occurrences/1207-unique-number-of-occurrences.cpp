













// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) 
//     {
        
//     }
// };











// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Using Hashing(map)    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Using Hashing(map)  
// // //  1st Method    ======>   Simple Using Hashing(map)  
// // //  1st Method    ======>   Simple Using Hashing(map)  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int n = arr.size() ; 
        unordered_map<int,int> freq ; 
        for(int i=0; i<n; i++) freq[arr[i]]++ ;  
        unordered_map<int,int> mp ;
        for(auto it : freq) 
        {
            if( mp[it.second] ) return false ;
            else mp[it.second] ++ ;  
        }
        return true ;  
    }
};



































