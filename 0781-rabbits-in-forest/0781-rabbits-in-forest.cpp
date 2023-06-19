










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  unordered_map   TC = O(n)in Best case , o(n*n) in Worst Case  , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using sort() function   TC = O(nlog(n)) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     int numRabbits(vector<int>& answers) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   unordered_map  
// // //  1st Method    ======>   unordered_map  
// // //  1st Method    ======>   unordered_map  
// //                             
// // //   Time Complexity   = O(n)  in Best Case   ,  unordered_map  Best case insert Complexity = O(1)  
// //                        = o(n*n) in Worst Case ,  unordered_map  Worst case insert Complexity = O(n) 
// //                           
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int numRabbits(vector<int>& answers) 
//     {
//         int n = answers.size() ;
//         unordered_map<int, int> mp;
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             if(mp[answers[i]] == 0 ) ans += answers[i]+1   ;
//             if(mp[answers[i]] != 0 ) mp[answers[i]] --  ;
//             else mp[answers[i]] = answers[i]  ;
//         }
//         return ans ;
//     }
// };

















// //                           
// //                           
// // //  2nd Method    ======>     Using sort() function    
// // //  2nd Method    ======>     Using sort() function    
// // //  2nd Method    ======>     Using sort() function 
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     int numRabbits(vector<int>& answers) 
//     {
//         int n = answers.size() ;
//         sort(answers.begin() , answers.end()) ;
//         int ans = 0 ;
//         for(int i=0; i<n; i++)
//         {
//             int j = i , ct = answers[i]+1 ;
//             ans += ct ;
//             while(j<n && answers[i]==answers[j] && ct-- )  j++ ;
//             i = j-1 ;
//         }
//         return ans ;
//     }
// };



////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////                                                      






class Solution {
public:
    int numRabbits(vector<int>& answers) 
    {
        int n = answers.size() ;
        sort(answers.begin() , answers.end()) ;
        int ans = 0 ;
        for(int i=0; i<n; )
        {
            int j = i , ct = answers[i]+1 ;
            ans += ct ;
            while(j<n && answers[i]==answers[j] && ct-- )  j++ ;
            i = j ;
        }
        return ans ;
    }
};

























































