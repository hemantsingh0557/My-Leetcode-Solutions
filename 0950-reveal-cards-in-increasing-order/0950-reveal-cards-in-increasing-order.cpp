












// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    10th   April   2024   -   Wednesday    .    
















// class Solution {
// public:
//     vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
//     }
// };














// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Queue Simulation    TC = O(n*log(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Using Two Pointer    TC = O(n*log(n)) , SC = O(log(n)) 
// //                     
// //                     
// // //  3rd Method  ====>  Try any other  TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Queue Simulation   
// // //  1st Method    ======>    Using Queue Simulation  
// // //  1st Method    ======>    Using Queue Simulation  
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     vector<int> deckRevealedIncreasing(vector<int>& deck) 
//     {
//         int n = deck.size() ; 
//         queue<int> q ; 
//         for(int i=0; i<n; i++) q.push(i) ;  
//         sort(deck.begin() , deck.end() ) ;
//         vector<int> ans(n)  ;
//         for(int i=0; i<n; i++)
//         {
//             ans[q.front()] = deck[i] ; 
//             q.pop() ; 
//             if( q.size() )
//             {
//                 q.push(q.front()) ; 
//                 q.pop() ; 
//             }
//         }
//         return ans  ; 
//     }
// };









// //                           
// //                           
// // //  2nd Method    ======>   Using Two Pointer 
// // //  2nd Method    ======>   Using Two Pointer 
// // //  2nd Method    ======>   Using Two Pointer 
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        int n = deck.size() ; 
        sort(deck.begin() , deck.end() ) ;
        vector<int> ans(n,0)  ;
        int deckInd = 0 , ansInd = 0 ,  skip = 0 ; 
        while(deckInd<n)
        {
            if( ans[ansInd] == 0 )
            {
                if( ! skip )
                {
                    ans[ansInd] = deck[deckInd] ;
                    deckInd ++ ; 
                }
                skip = !skip ; 
            }
            ansInd = (ansInd+1) % n ; 
        }
        return ans  ; 
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




















































