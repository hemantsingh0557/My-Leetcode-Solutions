
















// //  LeetCode  Weekly Contest  394  ( Able To Solve Three Question(third takes more time in implement) )


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    21st April 2024  -  Sunday    .    















// class Solution {
// public:
//     int numberOfSpecialChars(string word) 
//     {
//     }
// };













// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using hashing    TC = O(n+26) , SC = O(26) 
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Using hashing 
// // //  1st Method    ======>  Using hashing 
// // //  1st Method    ======>  Using hashing 
// //                             
// // //   Time Complexity   = O(n+26)   
// //                              
// // //   Space Complexity  = O(26)   
// //                               

class Solution {
public:
    int numberOfSpecialChars(string word) 
    {
        int n = word.size() ;
        int ans = 0 ;
        vector<int> up(26,0) , lo(26,0);
        for(int i=0; i<n ; i++)
        {
            if( word[i] >= 97 ) lo[word[i] - 'a' ] = word[i] ; 
            else up[word[i] - 'A' ] = word[i] ; 
        }
        for(int i=0; i<26; i++)
        {
            if( up[i] + 32 == lo[i] ) ans ++ ;
        }
        return ans ; 
    }
};














// //                           
// //                           
// // //  2nd Method    ======>  Try any other    
// // //  2nd Method    ======>  Try any other    
// // //  2nd Method    ======>  Try any other    
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               














































































