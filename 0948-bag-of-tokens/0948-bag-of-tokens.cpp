












// class Solution {
// public:
//     int bagOfTokensScore(vector<int>& tokens, int power) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Two Pointer and sort()  TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Try to solve using Deque  TC = O(n*log(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Two Pointer and sort()
// // //  1st Method    ======>   Using Two Pointer and sort()
// // //  1st Method    ======>   Using Two Pointer and sort()
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               


class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        int n = tokens.size() ; 
        sort(tokens.begin() , tokens.end() ) ;  
        int ans = 0 , score = 0 ; 
        int i = 0 , j = n-1; 
        while( i <= j )   
        {
            // cout<<i<<" "<<j<<" "<<power<<" "<<ans<<endl;
            if( power >= tokens[i] ) score ++ , power -= tokens[i] , i++ ; 
            else if( ans >= 1 ) score -- , power += tokens[j] , j-- ; 
            else break ; 
            ans = max( ans , score ) ; 
        }
        return ans  ; 
    }
};









// //                           
// //                           
// // //  2nd Method    ======>    Try to solve using Deque 
// // //  2nd Method    ======>    Try to solve using Deque 
// // //  2nd Method    ======>    Try to solve using Deque 
// //                             
// // //   Time Complexity   = O(n*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                              


































