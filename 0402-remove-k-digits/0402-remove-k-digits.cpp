









// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    11th   April   2024   -   Thursday    .    











// class Solution {
// public:
//     string removeKdigits(string num, int k) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method (Three Ways) ====> Using  string as monotonic stack  TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  (Three Ways)   ======>   Using  string as monotonic stack  
// // //  1st Method  (Three Ways)   ======>   Using  string as monotonic stack  
// // //  1st Method  (Three Ways)   ======>   Using  string as monotonic stack  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       

// class Solution {
// public:
//     string removeKdigits(string num, int k) 
//     {
//         int n = num.size() ; 
//         if( n == k ) return "0" ; 
//         string ans = "" ; 
//         for(int i=0; i<n; i++)
//         {
//             if( ans.size() && k > 0 )
//             {
//                 // cout<<ans.back()<<" "<<num[i]<<endl;
//                 int sz = ans.size()  ;
//                 if( ans.back() < num[i] ) ans.push_back( num[i] ) ; 
//                 else 
//                 {
//                     while( sz && k > 0 &&  ans.back() > num[i]  ) 
//                     {
//                         k-- ;
//                         sz-- ;
//                         ans.pop_back() ;
//                     }
//                     if( ! ans.size() && num[i] != '0' )  ans.push_back( num[i] ) ;
//                     else if( ans.size() )  ans.push_back( num[i] ) ;
//                 }
//                 // cout<<ans.back()<<" ok  "<<num[i]<<endl;
//             }
//             else if( ans.size() && k == 0 ) ans.push_back( num[i] ) ; 
//             else if( ! ans.size() && num[i] != '0' ) ans.push_back( num[i] ) ; 
//         }
//         // cout<<k<<endl;
//         while( k-- && ans.size() ) ans.pop_back()  ; 
//         if( ans == "" ) return "0" ; // // one example is num = "10" and k = 1 then output will be "0" ;
//         return ans ; 
//     }   
// };






// // //   1st Method   ====>     2nd way   =====>       
// // //   1st Method   ====>     2nd way   =====>       
// // //   1st Method   ====>     2nd way   =====>     

// class Solution {
// public:
//     string removeKdigits(string num, int k) 
//     {
//         int n = num.size() ; 
//         if( n == k ) return "0" ; 
//         string ans = "" ; 
//         for(int i=0; i<n; i++)
//         {
//             while( ans.size() && k > 0 &&  ans.back() > num[i]  ) 
//             {
//                 k-- ;
//                 ans.pop_back() ;
//             }
//             if( ! ans.size() && num[i] != '0' )  ans.push_back( num[i] ) ;
//             else if( ans.size() )  ans.push_back( num[i] ) ; 
//         }
//         // cout<<k<<endl;
//         while( k-- && ans.size() ) ans.pop_back()  ; 
//         if( ans == "" ) return "0" ; // // one example is num = "10" and k = 1 then output will be "0" ;
//         return ans ; 
//     }   
// };






// // //   1st Method   ====>     3rd way   =====>       
// // //   1st Method   ====>     3rd way   =====>       
// // //   1st Method   ====>     3rd way   =====>     

class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        int n = num.size() ; 
        if( n == k ) return "0" ; 
        string ans = "" ; 
        for(int i=0; i<n; i++)
        {
            while( ans.size() && k > 0 &&  ans.back() > num[i]  ) 
            {
                k-- ;
                ans.pop_back() ;
            }
            ans.push_back( num[i] ) ; 
        }
        // cout<<k<<endl;
        while( k > 0 ) ans.pop_back() , k--  ; 
        int j = 0 ;  
        while( ans[j] == '0'  && j < ans.size() ) j++ ; 
        ans.erase( 0 , j ) ;  
        if( ans == "" ) return "0" ; // // one example is num = "10" and k = 1 then output will be "0" ;
        return ans ; 
    }   
};















// //                           
// //                           
// // //  2nd Method    ======>  Try any other        
// // //  2nd Method    ======>  Try any other       
// // //  2nd Method    ======>  Try any other        
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


































