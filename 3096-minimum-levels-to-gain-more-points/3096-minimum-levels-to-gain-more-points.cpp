









// //  LeetCode  Biweekly  Contest  127 


// //  2nd  Question  ===> Able to solve in contest


// //  Today's  Date   -    30th March 2024  -  Saturday    .    











// class Solution {
// public:
//     int minimumLevels(vector<int>& possible) 
//     {
//         
//     }
// };














// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Prefix Sum   TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Simple using total sum   TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====> Try any other   TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Prefix Sum 
// // //  1st Method    ======>    Using Prefix Sum 
// // //  1st Method    ======>    Using Prefix Sum 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //      
                         
// class Solution {
// public:
//     int minimumLevels(vector<int>& possible) 
//     {
//         int n = possible.size() ; 
//         vector<int> pref(n+2 , 0) ;
//         for(int i=0; i<n; i++)
//         {
//             if( possible[i] == 1 ) pref[i+1] = pref[i] + possible[i] ;
//             else pref[i+1] = pref[i] - 1 ;
//         }
//         int total = pref[n] ;
//         for(int i=1; i<n; i++)
//         {
//             int d = pref[i] ;
//             int b = total - d ;
//             if( d > b ) return i ;
//         }
//         return -1 ;
//     }
// };




// //                           
// //                           
// // //  2nd Method    ======>   Simple using total sum
// // //  2nd Method    ======>   Simple using total sum
// // //  2nd Method    ======>   Simple using total sum
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int minimumLevels(vector<int>& possible) 
    {
        int n = possible.size() ; 
        int total = 0 ;
        for(int i=0; i<n; i++)
        {
            if( possible[i] == 1 ) total += possible[i] ;
            else total += -1 ;
        }
        int sum  = 0 ;
        for(int i=0; i<n-1; i++)
        {
            if( possible[i] == 1 ) sum += possible[i] ;
            else sum += -1 ;
            int d = sum ;
            int b = total - d ;
            if( d > b ) return i+1 ;
        }
        return -1 ;
    }
};










// //                           
// //                           
// // //  3rd Method    ======>   Try any other
// // //  3rd Method    ======>   Try any other
// // //  3rd Method    ======>   Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               




























