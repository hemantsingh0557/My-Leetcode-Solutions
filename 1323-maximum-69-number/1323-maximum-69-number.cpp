



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Three Pass and  to_string()     TC = O(3n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Single Pass    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

// class Solution {
// public:
//     int maximum69Number (int num)  {
//     }
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======>     Three  Pass and  to_string()    
// // //  1st Method    ======>     Three  Pass and  to_string()    
// // //  1st Method    ======>     Three  Pass and  to_string()    
// //                             
// // //   Time Complexity   = O(3n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     int maximum69Number (int num) 
//     {
//         string s = to_string(num) ;
//         int n = s.size() ;
//         for(int i=0; i<n; i++)
//         {
//             if(s[i] != '9' )
//             {
//                 s[i] = '9' ;
//                 break ;
//             }
//         }
//         num = 0 ;
//         for(int i=0; i<n; i++) num = num*10 + (s[i]-'0');
//         return num ;
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
//     int maximum69Number (int num) 
//     {
//         string s = to_string(num) ;
//         int n = s.size() ;
//         for(int i=0; i<n; i++)
//         {
//             if(s[i] != '9' )
//             {
//                 s[i] = '9' ;
//                 break ;
//             }
//         }
//         num = stoi(s) ;
//         return num ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    Single Pass       
// // //  2nd Method    ======>    Single Pass       
// // //  2nd Method    ======>    Single Pass       
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// // // // // // // //  Explaination  ============>
// // // // // // // //  Explaination  ============>
// // // // // // // //  Explaination  ============>
// // // // // // // //  Explaination  ============>

// //
// // //  in this we just add 3 to the 6 where fisrt 6 comes from the left 
// //
// // example == 9669   then we add 300
// //
// //        9669
// //       + 300 
// //      = 9969
// //
// //
// // example == 6669   then we add 300
// //
// //        6669
// //      + 3000 
// //      = 9669
// //
// //
// // example == 9966   then we add 300
// //
// //        9966
// //        + 30 
// //      = 9696
// //






class Solution {
public:
    int maximum69Number (int num) 
    {
        int temp = num ;
        int leftfirstSix = -1 , ct = 0 ;
        while(temp)
        {
            int digit = temp  % 10  ;  
            if(digit==6) leftfirstSix = ct ;
            ct++ ;
            temp /= 10 ;
        }
        if(leftfirstSix==-1) return num ;
        num = num + 3 * pow(10, leftfirstSix) ;
        return num ;
    }
};


















































