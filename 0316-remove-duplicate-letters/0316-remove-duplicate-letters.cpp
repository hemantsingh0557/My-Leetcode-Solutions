














// class Solution {
// public:
//     string removeDuplicateLetters(string s) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Using  Set    TC = O(n) , SC = O(150) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Using  Set 
// // //  1st Method    ======>   Simple Using  Set 
// // //  1st Method    ======>   Simple Using  Set 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(150) constant     
// //                               



class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        int n = s.size() ; 
        vector<int> last_ind(150 , 0) ;  
        for(int i=0; i<n; i++) last_ind[s[i]] = i ;
        vector<char> v(150 , 0) ;
        string ans = "" ;
        for(int i=0; i<n; i++)
        {  
            if( v[s[i] ] ) continue ;
            int ind = last_ind[s[i]] ;
            while( ans.size()>0 && ans.back() > s[i] && last_ind[ans.back()] >= i  )
            {
                v[ans.back()] = 0 ;   
                ans.pop_back() ;  
            }
            ans.push_back(s[i]) ; 
            v[s[i]] = 1 ; 
        }
        return ans  ; 
    }
};















































