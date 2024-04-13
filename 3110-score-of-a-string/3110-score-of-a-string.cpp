












// //  LeetCode  Biweekly Contest  128  (  Able To Solve Two Question )


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    13th April 2024  -  Saturday    .    











// class Solution {
// public:
//     int scoreOfString(string s) 
//     {
        
//     }
// };














// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Normal Iteration    TC = O(n) , SC = O(1) constant
// //                                        
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Normal Iteration  
// // //  1st Method    ======>  Normal Iteration  
// // //  1st Method    ======>  Normal Iteration  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    int scoreOfString(string s) 
    {
        int  n = s.size() , ans = 0  ; 
        for(int i=0; i<n-1; i++)
        {
            ans  += abs(s[i] - s[i+1]) ;
        }
        return ans  ;
    }
};

















































