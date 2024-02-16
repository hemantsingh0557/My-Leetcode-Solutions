










// class Solution {
// public:
//     int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple hashing    TC = O(n*log(n)) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple hashing 
// // //  1st Method    ======>   Simple hashing 
// // //  1st Method    ======>   Simple hashing 
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        int n = arr.size() ; 
        map<int,int> freq ;
        for(int i=0; i<n; i++)  freq[arr[i]]++ ;  
        // for(auto i : freq ) cout<<i.first<<"  ok  "<<i.second<<endl ;
        map<int,int> mp ; 
        for(auto i : freq ) mp[i.second] ++ ;
        int ans = 0 ; 
        for(auto it : mp ) 
        {
            // cout<<it.first <<" "<< it.second <<endl;
            int ct = it.first * it.second  ;
            if( ct <= k ) k -= ct  ; 
            else if( ct > k ) 
            {
                int times = k / it.first ;
                int rem = it.second - times ; 
                ans += rem ; 
                k = 0;  
            }
        }
        return ans ; 
    }
};
























