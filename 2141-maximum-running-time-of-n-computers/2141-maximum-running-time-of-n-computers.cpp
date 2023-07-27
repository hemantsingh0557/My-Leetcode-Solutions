






// class Solution {
// public:
//     long long maxRunTime(int n, vector<int>& batteries) {
        
//     }
// };








// // // // // Try to understand more clearly 
// // // // // Try to understand more clearly 
// // // // // Try to understand more clearly 
// // // // // Try to understand more clearly 
// // // // // Try to understand more clearly 









// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                 // // m is size of batteries and  k == totalMin   or   k == totalMin/n ;   
// // 
// // //  1st Method  ====> Bianry Search    TC = O(m*log(k)) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>      Bianry  Search 
// // //  1st Method    ======>      Bianry  Search 
// // //  1st Method    ======>      Bianry  Search 
// //
// //                             
// // //   Time Complexity   = O(m * log(totalMin))  or  O(m * log(totalMin/n))  
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) 
    {
        long long totalMin = 0 ;
        for(long long  minutes : batteries ) totalMin += minutes  ;     
        //
        // long long lo = 1 , hi = totalMin ;
        long long lo = 1 , hi = totalMin/n ; // // it is for optimization
        //
        while(hi-lo>1)
        {
            long long mid = (hi+lo)/2 ;
            long long runTime = n *1LL* mid ;
            //
            totalMin = 0 ;
            for(long long minutes : batteries ) totalMin += min(minutes , mid) ;
            if( runTime <= totalMin )  lo = mid ;
            else hi = mid-1 ;  
        }       
        totalMin = 0 ;
        for(long long  minutes : batteries ) totalMin += min(minutes , hi) ;                      
        long long runTime = n * hi ;
        if( runTime <= totalMin )  return hi ;
        return lo ;
    }
};














































































