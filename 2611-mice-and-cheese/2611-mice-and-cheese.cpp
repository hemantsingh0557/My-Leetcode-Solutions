







// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   sort by difference     TC = O(nlog(n))  ,  SC = O(2n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k)  {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   sort by difference 
// // //  1st Method    ======>   sort by difference 
// // //  1st Method    ======>   sort by difference 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) 
    {
        int n = reward1.size() ;
        int ans = 0 ;
        vector<pair<int,int>> vp ;
        for(int i=0; i<n; i++)
        {
            vp.push_back({reward1[i]-reward2[i] , i});
        }
        sort(vp.rbegin(), vp.rend()) ;
        for(int i=0; i<n; i++)
        {
            if(k>0) ans += reward1[vp[i].second] , k--  ;
            else ans += reward2[vp[i].second] ;
            // k-- ;  
        }
        return ans ;  
    }
};

















