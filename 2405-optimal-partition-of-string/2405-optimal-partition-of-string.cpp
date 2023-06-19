
// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using set ot hash   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using set bit and again reset to zero   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int partitionString(string s) {
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using set ot hash     
// // //  1st Method    ======>   Using set ot hash     
// // //  1st Method    ======>   Using set ot hash     
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int partitionString(string s) 
//     {
//         int n = s.size() ;
//         set<char> st ;
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             if(st.count(s[i]))
//             {
//                 ans++ ;
//                 st.clear();
//             }
//             st.insert(s[i]) ;
//         }
//         return ans + 1   ;
//     }
// };





////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////                                                      





// class Solution {
// public:
//     int partitionString(string s) 
//     {
//         vector<int> hsh(150) ;
//         int ans = 1 ;
//         for(int i=0; i<s.size(); i++)
//         {
//             auto it = find(hsh.begin(), hsh.end() , s[i] ) ;
//             if( it != hsh.end() )
//             {
//                 ans ++ ;
//                 hsh.clear() ;
//             }
//             hsh.push_back(s[i]) ;
//         }
//         return ans ;
//     }
// };

















// //                           
// //                           
// // //  2nd Method    ======>   Using set bit and again reset to zero
// // //  2nd Method    ======>   Using set bit and again reset to zero
// // //  2nd Method    ======>   Using set bit and again reset to zero
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int partitionString(string s) 
    {
        int n = s.size() ;
        int bit =0 , ans = 0 ;
        for(int i=0; i<n; i++)
        {
            int ch = s[i] - 'a' ;
            if(bit & (1<<ch))
            {
                ans++ ;
                bit = 0  ;
            }
            bit |= (1<<ch) ;   
        }
        return ans + 1   ;
    }
};



























// // // // //   Solve Using 3 Method  ===========>
// // // // //   Solve Using 3 Method  ===========>
//
//
// 1st Method  ===>   Using Bit      ========>   Best method 
// 1st Method  ===>   Using Bit      ========>   Best Method 
//
// // //   Time Complexity =  O(n)      // //  // Space Complexity =  O(1)
//
//
//
// 2nd method  ===>   Using  unordered_set         ===============>
// 2nd method  ===>   Using  unordered_set         ===============>
//
// // //   Time Complexity =  O(n)      // //  // Space Complexity =  O(26)
//
//
//
// 3rd Method  ===>   Using hashing (use vector as hsh array )   ========>
// 3rd Method  ===>   Using hashing (use vector as hsh array )   ========>
//
// // //   Time Complexity =  O(n)      // //  // Space Complexity =  O(26)
//
//








//
//
// // // //   1st Method    ===>   Using Bit      ========>        Best method 
// // // //   1st Method    ===>   Using Bit      ========>        Best Method 
// // // //   1st Method    ===>   Using Bit      ========>        Best Method 
// // // //   1st Method    ===>   Using Bit      ========>        Best Method 
//
//


// class Solution {
// public:
//     int partitionString(string s) 
//     {
//         int bt = 0 , ans = 1 ;
//         for(int i=0; i<s.size(); i++)
//         {
//             int ch = s[i] - 'a'  ;
//             if( bt & (1<<ch) )
//             {
//                 ans ++;
//                 bt = 0;
//             }
//             bt = bt | (1<<ch) ;
//         }
//         return ans ;
//     }
// };











//
//
// // // //    2nd  method  ===>     Using  unordered_set    ===========>
// // // //    2nd  method  ===>     Using  unordered_set    ===========>
// // // //    2nd  method  ===>     Using  unordered_set    ===========>
// // // //    2nd  method  ===>     Using  unordered_set    ===========>
//
//



// class Solution {
// public:
//     int partitionString(string s) 
//     {
//         unordered_set<char> st ;
//         int ans = 1 ;
//         for(int i=0; i<s.size(); i++)
//         {
//             auto it = st.find( s[i] ) ;
//             if( it != st.end() )
//             {
//                 ans ++ ;
//                 st.clear() ;
//             }
//             st.insert(s[i]) ;
           
//         }
//         return ans ;

//     }


// };











//
//
// // // //     3rd Method     ===>      using hashing (use vector as hsh array )      =====>
// // // //     3rd Method     ===>      using hashing (use vector as hsh array )      =====>
// // // //     3rd Method     ===>      using hashing (use vector as hsh array )      =====>
// // // //     3rd Method     ===>      using hashing (use vector as hsh array )      =====>
//
//











