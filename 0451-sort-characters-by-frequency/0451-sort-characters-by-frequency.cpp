













// class Solution {
// public:
//     string frequencySort(string s) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Hashing    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try optimized method (Heap or priority queue)    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Other method    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Hashing  
// // //  1st Method    ======>    Using Hashing  
// // //  1st Method    ======>    Using Hashing  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    string frequencySort(string s) 
    {
        int n = s.size() ; 
        unordered_map<char,int> freq ;
        for(int i=0; i<n; i++) freq[s[i]] ++ ; 
        map<int,string> mp ;
        for(auto it : freq) 
        {
            int temp = it.second ;
            while(temp--) mp[it.second].push_back(it.first) ;
        }
        string ans ="" ;
        for(auto it : mp) ans += it.second ;
        reverse(ans.begin() , ans.end() ) ; 
        return ans ;
    }
};







// //                           
// //                           
// // //  2nd Method    ======>  Try optimized method (Heap or priority queue)
// // //  2nd Method    ======>  Try optimized method (Heap or priority queue)
// // //  2nd Method    ======>  Try optimized method (Heap or priority queue)
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>   Other method  
// // //  3rd Method    ======>   Other method  
// // //  3rd Method    ======>   Other method  
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               










































