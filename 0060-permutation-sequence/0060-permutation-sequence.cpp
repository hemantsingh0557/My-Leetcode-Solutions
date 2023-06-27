




// //
// // // // // // //  Solve Using  Two Method  ===>     
// // // // // // //  Solve Using  Two Method  ===>                        
// //                     
// //                     //                       (see explaination below)
// // 1st Method  ====>  Maths and next_permutation()   TC = O(n * n! ) , SC = O(n) 
// //                      
// //                      
// // 2nd Method  ====> Maths(Best Approach)    TC = O(n*n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     string getPermutation(int n, int k) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Maths and next_permutation()
// // //  1st Method    ======>   Maths and next_permutation()
// // //  1st Method    ======>   Maths and next_permutation()
// //                             
// // //   Time Complexity   = O(n * n! )     (see explaination below)
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     string getPermutation(int n, int k) 
//     {
//         int val = 1 ;  // till value of (n-1)!
//         int i ;
//         for( i=1 ; i<=n-1 ; i++) val *= i ;
//         int permutation_ct = 0 ;
//         for( i=1 ; i<=n ; i++)
//         {
//             if( permutation_ct+val < k ) permutation_ct += val ;
//             else break ;
//         }
//         // // in worst case for loop run till n-1 times and i become n means i=n
//         //
//         //
//         int needed = k - permutation_ct ;
//         // // in worst case needed value will be (n-1)*(n-1)! 
//         // because in worst case when k = n! so after running loop  permutation_ct = (n-1)!
//         // so needed == ( n! - (n-1)! ) == (n-1)*(n-1)!
//         //
//         //
//         // after finding i from where the answer permutation will start
//         // we will genereate the first permutation string start with i and store in s string
//         string s = "" ;
//         s.push_back(i+'0') ;
//         for( int j=1 ; j<=n ; j++) 
//         {
//             if(j==i) continue ; 
//             s.push_back(j+'0') ;
//         }
//         // // here string length will be n 
//         //
//         needed-- ;
//         while( needed--) 
//         {
//             next_permutation(s.begin() , s.end()) ;
//         }
//         // here needed == (n-1)*(n-1)! 
//         // next_permutation time complexity ==  n 
//         // this while loop total complexity  == (n-1)*(n)! == (n-1) * n!
//         //
//         // so in worst case when n==9 and k==9!  then time complexity == 2903040  which will accept
//         //
//         //
//         // means total total complexity  == (n-1)*(n)! == (n-1) * n! == n * n! 
//         //
//         // if n=9 then 3265920   which will be accept because it is less than 4* 10^7
//         //
//         return s ;
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>   Maths(Best Approach) 
// // //  2nd Method    ======>   Maths(Best Approach) 
// // //  2nd Method    ======>   Maths(Best Approach) 
// //                             
// // //   Time Complexity   = O(n*n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    string getPermutation(int n, int k) 
    {
        int fact = 1 ;  // till value of (n-1)!
        vector<int> factorial ;
        for(int i=1 ; i<=n-1 ; i++) fact *= i , factorial.push_back(i) ;
        factorial.push_back(n) ;
        k-- ;
        string s = "" ;
        while(true)
        {
            s += to_string(factorial[k/fact]) ;
            factorial.erase(factorial.begin() + k/fact) ;
            if(factorial.size()==0) break ;
            k = k%fact ; 
            fact = fact/factorial.size() ;
        }
        return s ;
    }
};





























































































