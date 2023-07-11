




///  // // Please see the issue of 2nd method
///  // // Please see the issue of 2nd method
///  // // Please see the issue of 2nd method
///  // // Please see the issue of 2nd method





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple use unordered_map and then Iterate    TC = O(n) , SC = O(7) constant
// //                      
// //                      
// // //  2nd Method  ====>  Same as Method 1 but have issue (see below)   TC = O(n) , SC = O(7) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int romanToInt(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Simple use unordered_map and then Iterate
// // //  1st Method    ======>  Simple use unordered_map and then Iterate
// // //  1st Method    ======>  Simple use unordered_map and then Iterate
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(7) constant  
// //                               


class Solution {
public:
    int romanToInt(string s) 
    {
        int n = s.size() ; 
        unordered_map<char , int> mp = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} } ;
        if(n==1) return mp[s[0]] ;
        int ans = 0 ;  
        for(int i=0; i<n-1; i++)
        {
            if(mp[s[i]]>=mp[s[i+1]]) ans += mp[s[i]] ;
            else ans -= mp[s[i]] ;
            if(i==n-2) ans += mp[s[n-1]] ; 
        }
        return ans ;
    }
};
















// //                           
// //                           
// // //  2nd Method    ======>    Same as method 1 but change in i<n 
// // //  2nd Method    ======>    Same as method 1 but change in i<n 
// // //  2nd Method    ======>    Same as method 1 but change in i<n 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(7) constant  
// //                               




// Don't know why it is running even when we iterate from i=0 to i<n and compare m[s[i]] with mp[s[i+1]]
// so it should give an error because of s[i+1] when i==n-1



// class Solution {
// public:
//     int romanToInt(string s) 
//     {
//         int n = s.size() ; 
//         unordered_map<char , int> mp = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} } ;
//         if(n==1) return mp[s[0]] ;
//         int ans = 0 ;  
//         for(int i=0; i<n; i++)
//         {
//             if(mp[s[i]]>=mp[s[i+1]]) ans += mp[s[i]] ;
//             else ans -= mp[s[i]] ;
//         }
//         return ans ;
//     }
// };

































































