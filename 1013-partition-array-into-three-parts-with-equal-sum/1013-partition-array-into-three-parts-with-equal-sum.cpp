
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Three For Loops (TLE TLE TLE )    TC = O(n^3) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Two For Loops and PrefixSum   TC = O(n^2) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Simple Math    TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Three For Loops (TLE TLE TLE )
// // //  1st Method    ======>   Three For Loops (TLE TLE TLE )
// // //  1st Method    ======>   Three For Loops (TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(n^3)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) 
//     {
//         int n = arr.size() ; 
//         int part1 = 0 , part2 = 0 , part3 = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             part1 += arr[i] ;
//             part2 =0 ;
//             for(int j=i+1; j<n; j++)
//             {
//                 part2 += arr[j] ;
//                 part3 = 0 ;
//                 for(int k=j+1; k<n; k++)
//                 {
//                     part3 += arr[k] ;
//                     if(k==n-1 && part1==part2 && part2== part3) return true ;
//                 }
//             }
//         }
//         return false  ;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======>     Two For Loops and PrefixSum    
// // //  2nd Method    ======>     Two For Loops and PrefixSum    
// // //  2nd Method    ======>     Two For Loops and PrefixSum    
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) 
//     {
//         int n = arr.size() ;
//         vector<int> pre(n+1, 0) ; 
//         for(int i=0; i<n; i++)     pre[i+1] = pre[i] + arr[i] ;
//         int part1 = 0 , part2 = 0 , part3 = 0 ; 
//         for(int i=1; i<n-1; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 if(pre[i]==pre[j]-pre[i] && pre[j]-pre[i] == pre[n]-pre[j] ) return true  ;
//             }
//         }
//         return false  ;
//     }
// };











// //                           
// //                           
// // //  3rd Method    ======>    Simple Math
// // //  3rd Method    ======>    Simple Math
// // //  3rd Method    ======>    Simple Math
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        int n = arr.size() ;
        int totalSum = accumulate(arr.begin(), arr.end() ,0 ) ;  
        if(totalSum%3 != 0) return false ;
        int target = totalSum/3  ; 
        int sum = 0;
        int part = 0 ;
        for(int i=0 ; i<n-1; i++)
        {
            sum += arr[i] ; 
            if(sum==target) part ++ , sum = 0 ;
            if(part==2) return true ;
        }
        return false  ;
    }
};



































