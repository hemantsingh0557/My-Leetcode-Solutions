












// //  LeetCode  Biweekly Contest  128  (  Able To Solve Two Question )


// //  4th  Question  ===> Not Not Able to solve in contest ( see solution at last )


// //  Today's  Date   -    13th April 2024  -  Saturday    .    














// class Solution {
// public:
//     long long numberOfSubarrays(vector<int>& nums) 
//     {
//     }
// };

























// //   tried but not able to solve it in contest
// //   tried but not able to solve it in contest
// //   tried but not able to solve it in contest
// //   tried but not able to solve it in contest



// class Solution {
// public:
//     long long numberOfSubarrays(vector<int>& nums) 
//     {
//         int n = nums.size() ; 
//         // cout<<"okokok   "<<n<<endl<<endl;
//         long long ans = 0 ; 
//         map<int , vector<int>> mp ; 
//         for(int i=0; i<n; i++)
//         {
//             mp[nums[i]].push_back(i)  ;  
//         }
//         for(auto it : mp)
//         {
//             vector<int> v = it.second ;
//             int sz = v.size() ;
//             // cout<<it.first<<endl;
//             // for(int i=0; i<sz; i++) cout<<v[i]<<" ";
//             // cout<<endl;
//             if( sz % 2 == 0 )
//             {
//                 int i = sz/2 -1 , j = sz/2  ;
//                 while( i >=0 && j < sz )
//                 {
//                     int first = v[i] , last = v[j]  ;
//                     int mx = nums[first] ; 
//                     for(int k=first; k<=last; k++ ) mx = max( mx , nums[k] ) ;
//                     if( nums[first] != mx ) break  ; 
//                     i-- , j++ ; 
                    
//                 }
//                 i++ , j-- ; 
//                 int ct = j-i+1 ; 
//                 ans += 
//             }
//             else
//             {
//                 int mid = sz/2 ; 
//             }
//             for(int i=0; i<sz; i++)
//             {
//                 int check = 0 ;
//                 for(int j=sz-1; j>=0; j--)
//                 {
//                     // cout<<v[i]<<"  ok "<<v[j]<<endl;
//                     int mx = -1 ; 
//                     for(int k=v[i]; k<=v[j]; k++ ) mx = max( mx , nums[k] ) ;
                    
//                     if( nums[v[i]] == mx )
//                     {
//                         // cout<<"add  "<< (j+1-i)*(j-i) / 2<<endl;
//                         // cout<<v[i]<<"  ok "<<v[j]<<endl;
//                         // cout<<i<<" no "<<j<<endl;
//                         int ct = j-i+1 ; 
//                         int res = (ct)*(ct-1) / 2  ;
//                         // cout<<ct<<"   "<<res<<endl;
//                         ans += ct ; 
//                         check = 1 ;
//                         // ans ++ ; 
//                         break;
//                     }
//                 }
//                 // if( check == 1 ) break ;
//             }
//             // ans += sz ; 
//         }
        
//         return ans  ; 
//     }
// };












// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using monotonic stack    TC = O(n) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using monotonic stack ( monotonically decreasing. )  
// // //  1st Method    ======>    Using monotonic stack ( monotonically decreasing. )  
// // //  1st Method    ======>    Using monotonic stack ( monotonically decreasing. )  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) 
    {
        int n = nums.size() ; 
        long long ans = 0 ;
        stack<pair<int , int>> st ;  // // monotonic stack ( monotonically decreasing. )
        for(int i=0; i<n; i++)
        {
            while( st.size()  && st.top().first < nums[i] ) st.pop() ; 
            if( ! st.size() || st.top().first != nums[i] ) st.push( {nums[i] , 1} ) ;
            else 
            {
                int ct = st.top().second ;
                st.pop() ; 
                st.push( {nums[i] , ct+1} ) ;
            }
            ans += st.top().second  ;
        }
        return ans  ; 
    }
};











































