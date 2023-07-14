




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method(Three Ways)  ====>  with and without vector pair   TC = O(n*m) , SC = O(n*m) constant
// //                      
// //                      
// // //  2nd Method  ====> Simple Iteration(Best way)    TC = O(max(n,m)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int compareVersion(string version1, string version2) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     with and without vector pair 
// // //  1st Method    ======>     with and without vector pair 
// // //  1st Method    ======>     with and without vector pair 
// //                             
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(n*m)   
// //                               



// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 
// // //   1st  Method   ====>      2nd  way   =====>                                 


// class Solution {
// public:
//     int compareVersion(string version1, string version2) 
//     {
//         int n = version1.size() , m = version2.size() ; 
//         int i=0, j=0 ;
//         vector<pair<string,string>> vp ;
//         while(true)
//         {
//             while(i<n && version1[i] =='0') i++ ;
//             int k = i ;
//             while(i<n && version1[i] !='.') i++ ;
//             string temp1 = "" ;
//             if(i<=n)  temp1 = version1.substr(k , i-k ) ;
//             //
//             while(j<m && version2[j] =='0') j++ ;
//             k = j ;
//             while(j<m && version2[j] !='.') j++ ;
//             string temp2 = ""  ; 
//             if(j<=m) temp2 =  version2.substr(k , j-k ) ;
//             //
//             vp.push_back({temp1 , temp2}) ;
//             if(i==n && j==m) break ;
//             if(i<n) i++ ;
//             if(j<m) j++ ;
//         }
//         int sz = vp.size() ;
//         for( i=0; i<sz; i++)
//         {
//             string temp1 = vp[i].first ;   
//             string temp2 = vp[i].second ;  
//             int t1 = temp1.size()  , t2 = temp2.size() ; 
//             int num1 = -1 , num2 = -1 ;
//             if(t1>0) num1 = stoi(temp1) ;
//             if(t2>0) num2 = stoi(temp2) ;
//             if(num1>num2) return 1 ; 
//             else if(num1<num2) return -1 ; 
//         }
//         return 0 ;
//     }
// };





// // //   1st  Method   ====>      2nd   way   =====>                                 
// // //   1st  Method   ====>      2nd   way   =====>                                 
// // //   1st  Method   ====>      2nd   way   =====>                                 


// class Solution {
// public:
//     int compareVersion(string version1, string version2) 
//     {
//         int n = version1.size() , m = version2.size() ; 
//         int i=0, j=0 ;
//         while(true)
//         {
//             while(i<n && version1[i] =='0') i++ ;
//             int k = i ;
//             while(i<n && version1[i] !='.') i++ ;
//             string temp1 = "" ;
//             if(i<=n)  temp1 = version1.substr(k , i-k ) ;
//             //
//             while(j<m && version2[j] =='0') j++ ;
//             k = j ;
//             while(j<m && version2[j] !='.') j++ ;
//             string temp2 = ""  ; 
//             if(j<=m) temp2 =  version2.substr(k , j-k ) ;
//             //
//             int t1 = temp1.size()  , t2 = temp2.size() ; 
//             int num1 = -1 , num2 = -1 ;
//             if(t1>0) num1 = stoi(temp1) ;
//             if(t2>0) num2 = stoi(temp2) ;
//             if(num1>num2) return 1 ; 
//             else if(num1<num2) return -1 ; 
//             //
//             if(i==n && j==m) break ;
//             if(i<n) i++ ;
//             if(j<m) j++ ;
//         }
//         return 0 ;
//     }
// };





// // //   1st  Method   ====>      3rd  way   =====>                                 
// // //   1st  Method   ====>      3rd  way   =====>                                 
// // //   1st  Method   ====>      3rd  way   =====>                                 


// class Solution {
// public:
//     int compareVersion(string version1, string version2) 
//     {
//         int n = version1.size() , m = version2.size() ; 
//         int i=0, j=0 , k ;
//         while(true)
//         {
//             string temp1 = "" , temp2 = "" ;
//             if(i<n )
//             {
//                 while(i<n && version1[i]=='0') i++ ;
//                 k=i ;
//                 while(i<n && version1[i]!='.') i++ ;
//                 // if(i<=n) temp1 = version1.substr(k , i-k ) ;
//                 temp1 = version1.substr(k , i-k ) ;
//                 if(i<n) i++ ;
//             }
//             if(j<m )
//             {
//                 while(j<m && version2[j]=='0') j++ ;
//                 k=j ;
//                 while(j<m && version2[j]!='.') j++ ;
//                 // if(j<=m) temp2 = version2.substr(k , j-k ) ;
//                 temp2 = version2.substr(k , j-k ) ;
//                 if(j<m) j++ ;
//             }
//             int t1 = temp1.size()  , t2 = temp2.size() ; 
//             int num1 = -1 , num2 = -1 ;
//             if(t1>0) num1 = stoi(temp1) ;
//             if(t2>0) num2 = stoi(temp2) ;
//             if(num1>num2) return 1 ; 
//             else if(num1<num2) return -1 ; 
//             //
//             if(i==n && j==m) break ;
//         }
//         return 0 ;
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Simple Iteration
// // //  2nd Method    ======>   Simple Iteration
// // //  2nd Method    ======>   Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
        int n = version1.size() , m = version2.size() ; 
        int i=0, j=0 , k ;
        while(i<n || j<m)
        {
            int num1 = 0 , num2 = 0 ;
            while(i<n && version1[i]!='.') num1 = num1*10 , num1 += version1[i]-'0'   , i++ ; 
            while(j<m && version2[j]!='.') num2 = num2*10 , num2 += version2[j]-'0'   , j++ ;
            if(num1>num2) return 1 ;   
            if(num2>num1) return -1 ; 
            i++ , j++ ;  
        }
        return 0 ;
    }
};
























































