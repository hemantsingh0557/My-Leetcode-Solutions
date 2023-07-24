







// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>   
// //                     
// //                     
// //               // //  here n can will  10^10      
// // //  1st Method  ====>  Simple Iteration till n (TLE TLE TLE)  TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  By Reducing n to n/2    TC = O(log(n)) , SC = O(1) constant
// //                     
// //                     
// // //  3rd Method (Two ways)  ====>  Binary Exponentiation   TC = O(log(n)) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     double myPow(double x, int n) {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration till n (TLE TLE) 
// // //  1st Method    ======>    Simple Iteration till n (TLE TLE) 
// // //  1st Method    ======>    Simple Iteration till n (TLE TLE) 
// //                             
// // //   Time Complexity   = O(n)    //  // //  here n can will  10^10      
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               
// //
// // //  Got TLE because if n= 2147483647 then it is greater than 1e8 or 1e7 (10^8 or 10^7) so we got TLE
// // //  Got TLE because if n= 2147483647 then it is greater than 1e8 or 1e7 (10^8 or 10^7) so we got TLE
// // //  Got TLE because if n= 2147483647 then it is greater than 1e8 or 1e7 (10^8 or 10^7) so we got TLE
// //


// class Solution {
// public:
//     double myPow(double x, int n) 
//     {
//         if(x==0) return 0;
//         if(n==0) return 1;
//         double ans = 1;
//         long m = n ; // long m because if n = -2147483648 then when we multipli by -1 then it becomes
//         //           // 2147483648 which is out of range for int datatype 
//         if(m<0) m = -m ;
//         // long i because if n>0 and  n = 2147483647 then when i becomes 2147483647 because i <= n and when it
//         // again increment then i becomes 2147483648 which is out of range for int datatype 
//         if(n>0) for(long i=1; i<=n; i++) ans *= x ;         
//         else for(long i=1; i<=m; i++) ans *= (double)(1/x) ;
//         // long i because if n = -2147483648 and also m = -2147483648  then when we multipli by -1 then it becomes
//         // 2147483648 which is out of range for int datatype 
//         return ans  ;
//     }
// };










// //                           
// //                           
// // //  2nd Method    ======>   By Reducing n to n/2 ;
// // //  2nd Method    ======>   By Reducing n to n/2 ;
// // //  2nd Method    ======>   By Reducing n to n/2 ;
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// class Solution {
// public:
//     double myPow(double x, int n) 
//     {
//         if(n==0) return 1 ;
//         if(n==1) return x ; 
//         long  m = n  ;  
//         if(m<0) m = -m  ;  
//         double ans  = 1 ;
//         while(m>0)
//         {
//             if(m%2==1) ans = ans * x , m-- ; 
//             else x = x * x , m = m/2 ;
//         }
//         if(n>0) return ans  ;
//         return (double) 1/(ans) ; 
//     }
// };








// //                           
// //                           
// // //  3rd Method  (Two ways)  ======>   Binary Exponentiation
// // //  3rd Method  (Two ways)  ======>   Binary Exponentiation
// // //  3rd Method  (Two ways)  ======>   Binary Exponentiation
// //                             
// // //   Time Complexity   = O(log(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// // //   3rd  Method   ====>      1st way   =====> Recursion Binary Exponentiation                            
// // //   3rd  Method   ====>      1st way   =====> Recursion Binary Exponentiation       
// // //   3rd  Method   ====>      1st way   =====> Recursion Binary Exponentiation       


// class Solution {
// public:
//     double binExp(double x , long m)
//     {
//         if(m==0) return 1 ;
//         double res = binExp( x,  m/2 ) ; ;
//         if(m&1) return x * res * res ;
//         else return  res * res ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     double myPow(double x, int n) 
//     {
//         if(n==0) return 1 ;
//         if(n==1) return x ; 
//         long  m = n  ;  
//         if(m<0) m = -m  ;  
//         double ans  = binExp( x,  m ) ;
//         if(n>0) return ans  ;
//         return (double) 1/(ans) ; 
//     }
// };






// // //   3rd  Method   ====>      2nd way   =====>  Iterative Binary Exponentiation     
// // //   3rd  Method   ====>      2nd way   =====>  Iterative Binary Exponentiation     
// // //   3rd  Method   ====>      2nd way   =====>  Iterative Binary Exponentiation     


class Solution {
public:
    double binIter(double x , long m)
    {
        double res = 1 ;
        while(m>0)
        {
            if(m&1)  res  = res * x ;
            x =  x * x ;
            m >>= 1 ;
        }
        return res ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    double myPow(double x, int n) 
    {
        if(n==0) return 1 ;
        if(n==1) return x ; 
        long  m = n  ;  
        if(m<0) m = -m  ;  
        double ans  = binIter( x,  m ) ;
        if(n>0) return ans  ;
        return (double) 1/(ans) ; 
    }
};















































