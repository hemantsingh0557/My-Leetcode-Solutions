











// //  LeetCode  Weekly Contest  391 


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    31st March 2024  -  Sunday    .    
















// class Solution {
// public:
//     int sumOfTheDigitsOfHarshadNumber(int x) 
//     {
//         
//     }
// };








// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple just calculate sum    TC = O() , SC = O() 
// //                      
// //                                          
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Simple just calculate sum 
// // //  1st Method    ======>    Simple just calculate sum 
// // //  1st Method    ======>    Simple just calculate sum 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        string s = to_string(x) ;
        int n = s.size(); 
        int sum = 0 ;
        for(int i=0; i<n; i++) sum += s[i] - '0' ;
        if(  x % sum == 0 ) return sum ;
        return -1 ; 
    }
};



                               
































