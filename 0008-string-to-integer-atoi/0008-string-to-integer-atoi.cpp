





// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                 // //  Don't think extra just read problem and ho through step by step
// // //  1st Method  ====> Simple Iteration step by step   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int myAtoi(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration step by step
// // //  1st Method    ======>   Simple Iteration step by step
// // //  1st Method    ======>   Simple Iteration step by step
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

                              


// class Solution {
// public:
//     int myAtoi(string s) 
//     {
//         int n = s.size() ;
//         long long ans = 0 ;  
//         int i=0 , check = 0 ;
//         while(i<n && s[i]==' ') i++ ;
//         if(i<n && s[i]=='-') i++  , check = 1 ;   
//         else if(s[i]=='+') i++ ;
//         while(i<n && s[i]>='0' && s[i]<='9' && ans <=INT_MAX)
//         {
//             ans = ans*10 + s[i]-'0' ;  
//             i++ ; 
//         }
//         if(check) ans = -ans ;
//         if(ans>INT_MAX) ans = INT_MAX ; 
//         else if(ans<INT_MIN) ans = INT_MIN ; 
//         return ans ;
//     }
// };





class Solution {
public:
    int myAtoi(string s) 
    {
        int n = s.size() ;
        long long ans = 0 ;  
        int i=0 , check = 0 ;
        while(i<n && s[i]==' ') i++ ;
        if(i<n && s[i]=='-') i++  , check = 1 ;   
        else if(s[i]=='+') i++ ;
        for( ; i<n; i++)
        {
            if(s[i]>='0' && s[i]<='9') ans = ans*10 + s[i]-'0' ;
            else break;
            if(ans>INT_MAX)break;
        }
        if(check) ans = -ans ;
        if(ans>INT_MAX) ans = INT_MAX ; 
        else if(ans<INT_MIN) ans = INT_MIN ; 
        return ans ;
    }
};





















 
 





























