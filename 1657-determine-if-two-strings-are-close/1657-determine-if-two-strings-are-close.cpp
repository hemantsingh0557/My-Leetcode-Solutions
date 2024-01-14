























// class Solution {
// public:
//     bool closeStrings(string word1, string word2) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Uisng set and sort()    TC = O( n * log(n) ) , SC = O(120) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Uisng set and sort()  
// // //  1st Method    ======>    Uisng set and sort()  
// // //  1st Method    ======>    Uisng set and sort()  
// //                             
// // //   Time Complexity   = O( n * log(n) )    //  //  log(n) for inserting into the set 
// //                              
// // //   Space Complexity  = O(120) // //  because both set and both array vector have size maximun 26   
// //                               


// class Solution {
// public:
//     bool closeStrings(string word1, string word2) 
//     {
//         int n = word1.size() ;  
//         int m = word2.size() ;  
//         if( n != m ) return false ; 
//         set<char> st1 , st2 ;  
//         vector<int> w1(30,0) , w2(30,0) ; 
//         for(int i=0; i<n ; i++)
//         {
//             st1.insert(word1[i]) , st2.insert(word2[i])  ;   
//             w1[word1[i]-'a'] ++ ; 
//             w2[word2[i]-'a'] ++ ; 
//         }
//         auto it1 = st1.begin() ;  
//         auto it2 = st2.begin() ;  
//         while( it1 != st1.end() && it2 != st2.end() ) 
//         {
//             if( *it1 != *it2 ) return false  ;
//             it1++ , it2++ ;  
//         }  
//         sort(w1.begin() , w1.end() ) ;
//         sort(w2.begin() , w2.end() ) ;
//         for(int i=0; i<30; i++) if( w1[i] != w2[i] ) return false ; 
//         return true ;     
//     }
// };



////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////


class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        int n = word1.size() ;  
        int m = word2.size() ;  
        if( n != m ) return false ; 
        set<char> st1 , st2 ;  
        vector<int> w1(30,0) , w2(30,0) ; 
        for(int i=0; i<n ; i++)
        {
            st1.insert(word1[i]) , st2.insert(word2[i])  ;   
            w1[word1[i]-'a'] ++ ; 
            w2[word2[i]-'a'] ++ ; 
        }
        sort(w1.begin() , w1.end() ) ;
        sort(w2.begin() , w2.end() ) ;
        return st1 == st2 && w1 == w2 ;     
    }
};
































