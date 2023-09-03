









// class Solution {
// public:
//     int minimumOperations(string num) 
//     {
//         
//     }
// };
























// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also
// // // // //  try to solve this question using dp also









// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Last Two Digit Check   TC = O(5*n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>     TC = O(n) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method  ====>     TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Last Two Digit Check 
// // //  1st Method    ======>   Simple Last Two Digit Check 
// // //  1st Method    ======>   Simple Last Two Digit Check 
// //                             
// // //   Time Complexity   = O(5*n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int n  ;  
    int check( int d1 , int d2 , string & num)
    {
        int d2found = false ;
        for(int i = n-1; i>=0; i--)
        {
            int digit = num[i] - '0' ; 
            if( digit == d2 && ! d2found ) d2found = true ;
            else if( digit == d1 && d2found ) return n - (i+2) ;
        }
        return n ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumOperations(string num) 
    {
        n = num.size() ; 
        int ans = n ;
        //
        // check for 00
        ans = min( ans , check( 0 ,0 , num) ) ;    
        // check for 25
        ans = min( ans , check( 2 ,5 , num) ) ;   
        // check for 50 
        ans = min( ans , check( 5 ,0 , num) ) ; 
        // check for 75   
        ans = min( ans , check( 7 ,5 , num) ) ; 
        //
        //
        //
        // // the below loops is when if num contains many zero 
        // // then instead of making a number we simply remove all no zero digit and
        // // then we have only all zero which will obviously divisible by 25
        // // example =>200000015
        // // in the above exampple it is more efficient that removing 1 ,5 than removing 0
        // // if we remove 0 then operation are 6 and if we remove 1, 5 then operations are 2
        // // so removing 1 ,5 is more effiecient 
        // //
        // // but the below loop is when we remove all non zero in example we not remove all non 
        // // zero we left 2 as it is but in some cases removing all non xero also helpful ;
        // // 
        // //  below loop when num is 10 , 20 , 30 etc 
        //
        int ct = 0 ;
        for(int i=0; i<n; i++) if( num[i]-'0' == 0 ) ct ++ ;
        ans = min( ans , n - ct ) ;  
        return ans ;
    }
};














// //                           
// //                           
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// // //  2nd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumOperations(string num) 
//     {
//         n = num.size() ; 
//         int ans  = solve( 0 ,  num) ;
//         retur ans  ;
//     }
// };









// //                           
// //                           
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// // //  3rd Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


















































