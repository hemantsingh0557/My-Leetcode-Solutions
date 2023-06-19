









// //
// // // // // // //  Solve Using One Method  ===>     
// // // // // // //  Solve Using One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     string removeDigit(string number, char digit) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration 
// // //  1st Method    ======>   Simple Iteration 
// // //  1st Method    ======>   Simple Iteration 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        int n = number.size() ;
        string ans = "" ;
        for(int i=n-1; i>=0; i--)
        {
            if(number[i]==digit )
            {
                string temp  = number.substr(0,i) + number.substr(i+1, n) ;
                ans = max(ans ,temp ) ;
            }
        }
        return ans;
    }
};


























