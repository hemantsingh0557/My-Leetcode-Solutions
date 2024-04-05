















// class Solution {
// public:
//     string makeGood(string s) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method (Three ways)  ====> Using extra space( stack or stirng ) TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> In-place Method    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try any other    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  (Three ways)  ======>   Using extra space( stack or stirng ) 
// // //  1st Method  (Three ways)  ======>   Using extra space( stack or stirng ) 
// // //  1st Method  (Three ways)  ======>   Using extra space( stack or stirng ) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// // //    1st  Method   ====>  1st way   =====>   Using stack ( not better code quality)      
// // //    1st  Method   ====>  1st way   =====>   Using stack ( not better code quality)      
// // //    1st  Method   ====>  1st way   =====>   Using stack ( not better code quality)      


// class Solution {
// public:
//     string makeGood(string s) 
//     {
//         int n = s.size() ; 
//         string ans = "" ;
//         stack<char > st ; 
//         for(int i=0; i<n; i++)
//         {
//             while(  i < n && st.size() && ( abs(st.top() - s[i] ) == 32 ) )
//             {
//                 st.pop() ;
//                 i++ ;
//             }
//             if( i < n ) st.push(s[i]) ;
//         }
//         while(st.size() ) ans.push_back(st.top()) , st.pop() ; 
//         reverse(ans.begin() , ans.end() ) ;
//         return ans  ;  
//     }
// };





// // //    1st  Method   ====>  2nd way   =====>  Using stack but better code quality             
// // //    1st  Method   ====>  2nd way   =====>  Using stack but better code quality             
// // //    1st  Method   ====>  2nd way   =====>  Using stack but better code quality       

// class Solution {
// public:
//     string makeGood(string s) 
//     {
//         int n = s.size() ; 
//         string ans = "" ;
//         stack<char > st ; 
//         for(int i=0; i<n; i++)
//         {
//             if( st.size() && ( abs(st.top() - s[i] ) == 32 ) ) st.pop() ;
//             else st.push(s[i]) ;
//         }
//         while(st.size() ) ans.push_back(st.top()) , st.pop() ; 
//         reverse(ans.begin() , ans.end() ) ;
//         return ans  ;  
//     }
// };







// // //    1st  Method   ====>   3rd way   =====>  Using string        
// // //    1st  Method   ====>   3rd way   =====>  Using string        
// // //    1st  Method   ====>   3rd way   =====>  Using string  

// class Solution {
// public:
//     string makeGood(string s) 
//     {
//         int n = s.size() ; 
//         string ans = "" ;
//         for(int i=0; i<n; i++)
//         {
//             if(  ans.size() && ( abs(ans.back() - s[i] ) == 32 ) ) ans.pop_back() ;
//             else ans.push_back(s[i]) ;
//         }
//         return ans  ;  
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   In-place Method
// // //  2nd Method    ======>   In-place Method
// // //  2nd Method    ======>   In-place Method
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    string makeGood(string s) 
    {
        int n = s.size() ; 
        for(int i=0; i<n-1; )
        {
            if( ( abs( s[i] - s[i+1] ) == 32 ) ) 
            {
                // for example "abBAcC" we delet bB  that's why  we do the just below line
                s.erase(s.begin() + i , s.begin() + i + 2 ) ;
                i = max( 0 , i-1 ) ; // // when string is aAcC then when we delet
                // // aA then i become i-1 will be -1 which is out of index
                // //   that's why i take max(0 , i-1) ;
                //
                //
                // cout<<i<<endl;
                // cout<<s[i]<<" "<<s[i+1]<<endl;
            }
            else i++ ;
        }
        return s  ;  
    }
};



















// //                           
// //                           
// // //  3rd Method    ======>  Try any other
// // //  3rd Method    ======>  Try any other
// // //  3rd Method    ======>  Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               




















































