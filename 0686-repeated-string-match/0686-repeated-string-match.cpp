





// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// //1st Method (Three Ways)==>Simple Iteration   TC = O(n *(maxRepeat *maxRepeat))) , SC = O(maxRepeat * n)  
// //                      
// //                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method  (Three Ways)  ======>   Simple Iteration
// // //  1st Method  (Three Ways)  ======>   Simple Iteration
// // //  1st Method  (Three Ways)  ======>   Simple Iteration
// //                             
// //                     
// // //   Time Complexity  =  O(n * (maxRepeat *maxRepeat))   // // here maxRepeat >= 1
// //                       =  O( n + 2n + 3n + 4n + 5n + ..... +  maxRepeat * n )  
// //
// //                              
// // //   Space Complexity  = O( maxRepeat * n )   
// //                     because if a will repeat 4 times then we need n *4 space  
// //                               


 




// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 
// // //   1st  Method   ====>      1st way   =====>                                 



// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) 
//     {
//         int ans =1  ;
//         string temp = a ; 
//         while(a.size()<b.size()) a = a + temp , ans ++ ;  
//         int i=0 ;
//         int m = b.size() ;
//         while( i <= a.size() - b.size())
//         {
//             string temp = a.substr(i,m) ;
//             if(temp==b) return ans ;
//             i++ ;
//         }
//         a = a + temp ;
//         while( i <= a.size() - b.size())
//         {
//             string temp = a.substr(i,m) ;
//             if(temp==b) return ans+1 ;
//             i++ ;
//         }
//         return -1 ;
//     }
// };







// // //   1st  Method   ====>     2nd way   =====>                                 
// // //   1st  Method   ====>     2nd way   =====>                                 
// // //   1st  Method   ====>     2nd way   =====>                                 


// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) 
//     {
//         int n = a.size()  , m = b.size() ;
//         int maxRepeat = 0;
//         if(m%n==0) maxRepeat = m/n + 1 ;
//         else maxRepeat = m/n + 2 ; 
//         string temp = a ;
//         int lastposition = 0 ;
//         for(int i=1 ; i<=maxRepeat; i++)
//         {
//             int j = lastposition ;
//             n = a.size()  , m = b.size() ;
//             while( j <= n-m)
//             {
//                 string s = a.substr(j , m) ;
//                 if(s==b) return i ;
//                 j++ ;
//             }
//             lastposition = j ;
//             a = a + temp  ;
//         }
//         return -1 ;
//     }
// };




// // //   1st  Method   ====>     3rd way   =====>                                 
// // //   1st  Method   ====>     3rd way   =====>                                 
// // //   1st  Method   ====>     3rd way   =====>                                 




class Solution {
public:
    int repeatedStringMatch(string a, string b) 
    {
        int n = a.size()  , m = b.size() ;
        int maxRepeat = 0;
        if(m%n==0) maxRepeat = m/n + 1 ;
        else maxRepeat = m/n + 2 ; 
        string temp = a ;
        int lastposition = 0 ;
        for(int i=1 ; i<=maxRepeat; i++)
        {
            if(a.find(b) != -1) return i ; 
            a = a + temp ;
        }
        return -1 ;
    }
};





























