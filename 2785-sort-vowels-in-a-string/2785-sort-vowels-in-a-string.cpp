













// class Solution {
// public:
//     string sortVowels(string s) {
        
//     }
// };











// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                 
// //                     
// // //  1st Method  ====> Store and sort    TC = O(nlog(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> using Unordered map    TC = O(n) , SC = O(10) constant
// //                                          // //   5 lowercase and 5 uppercase Vowel
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Store and sort  
// // //  1st Method    ======>   Store and sort  
// // //  1st Method    ======>   Store and sort  
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)  
// //                               


// class Solution {
// public:
//     bool isVowel(char c )
//     {
//         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
//         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'  ;   
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string sortVowels(string s) 
//     {
//         int n = s.size() ;
//         string ans ; 
//         string temp ;    
//         for(int i=0; i<n; i++)
//         {
//             if( isVowel(s[i]) ) temp.push_back(s[i]) ; 
//         }
//         sort(temp.begin() , temp.end() )  ;
//         int j = 0  ;
//         for(int i=0; i<n; i++)
//         {
//            if( isVowel(s[i]) )  ans.push_back(temp[j++]); 
//            else ans.push_back(s[i]) ; 
//         }
//         return ans  ;  
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   using Unordered map    
// // //  2nd Method    ======>   using Unordered map    
// // //  2nd Method    ======>   using Unordered map    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(10) constant  
// //                   // //   5 lowercase and 5 uppercase Vowel            


class Solution {
public:
    bool isVowel(char c )
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'  ;   
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    string sortVowels(string s) 
    {
        int n = s.size() ;
        string ans; 
        unordered_map<char , int> mp ; 
        for(int i=0; i<n; i++)
        {
            if( isVowel(s[i]) ) mp[s[i]] ++ ;   
        }
        string temp  = "AEIOUaeiou";    
        int j = 0  ;
        for(int i=0; i<n; i++)
        {
           if( isVowel(s[i]) ) 
           {
               while( mp[temp[j]] == 0 ) j++ ;
               ans.push_back(temp[j]) ; 
               mp[temp[j]] -- ; 
           }
           else ans.push_back(s[i]) ;  
        }
        return ans  ;  
    }
};




























































